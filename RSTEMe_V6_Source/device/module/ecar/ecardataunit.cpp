#include "ecardataunit.h"
#include <QtMath>
#include <QDebug>

ECarDataUnit::ECarDataUnit(QObject *parent)
    : QObject{parent}
{
    this->initUnit();
}

ECarDataUnit::~ECarDataUnit()
{

}

void ECarDataUnit::initUnit()
{

    QList<UnitType> _unit;
    QList<PrecisionType> _res;
    _res.append(getPrecision("0.001",3));
    _res.append(getPrecision("0.01",2));
    _res.append(getPrecision("0.1",1));
    _res.append(getPrecision("1",0));
    //time
    _unit.append(this->getUnit("Giây","(s)",1,0));
    _unit.append(this->getUnit("milli giây","(ms)",1000,0));
    this->setTimeUnits(_unit);
    this->setTimeUnit(_unit.at(0));
    this->setTimePrecisions(_res);
    this->setTimePrecision(_res.at(0));
    //force
    _unit.clear();
    _unit.append(this->getUnit("Newton","(N)",0.01,0));
    _unit.append(this->getUnit("G","(G)",100,0));
    _unit.append(this->getUnit("Kg","(Kg)",0.001,0));
    this->setForceUnits(_unit);
    this->setForceUnit(_unit.at(0));
    this->setForcePrecisions(_res);
    this->setForcePrecision(_res.at(0));

    //distance
    _unit.clear();
    _unit.append(this->getUnit("mm","(mm)",1,0));
    _unit.append(this->getUnit("m","(m)",0.001,0));
    _unit.append(this->getUnit("km","(km)",0.000001,0));
    this->setDistanceUnits(_unit);
    this->setDistanceUnit(_unit.at(0));
    this->setDistancePrecisions(_res);
    this->setDistancePrecision(_res.at(2));
    //speed
    _unit.clear();
    _unit.append(this->getUnit("mm/s","(mm/s)",1,0));
    _unit.append(this->getUnit("m/s","(m/s)",0.001,0));
    _unit.append(this->getUnit("km/h","(km/h)",0.0036,0));
    this->setSpeedUnits(_unit);
    this->setSpeedUnit(_unit.at(0));
    this->setSpeedPrecisions(_res);
    this->setSpeedPrecision(_res.at(0));
    //accel
    _unit.clear();
    _unit.append(this->getUnit("mm/s2","(mm/s2)",1,0));
    _unit.append(this->getUnit("m/s2","(m/s2)",0.001,0));
    this->setAccelerationUnits(_unit);
    this->setAccelerationUnit(_unit.at(0));
    this->setAccelerationPrecisions(_res);
    this->setAccelerationPrecision(_res.at(0));
    //axisX
    this->setAxisXPrecisions(_res);
    this->setAxisXPrecision(_res.at(2));
    //axisY
    this->setAxisYPrecisions(_res);
    this->setAxisYPrecision(_res.at(2));
    //axisZ
    this->setAxisZPrecisions(_res);
    this->setAxisZPrecision(_res.at(2));
}

ECarDataUnit::UnitType ECarDataUnit::getUnit(QString name, QString symbol, double factor,double offset)
{
UnitType _unit;
_unit.name = name;
_unit.symbol = symbol;
_unit.factor = factor;
_unit.offset = offset;
return _unit;
}

ECarDataUnit::PrecisionType ECarDataUnit::getPrecision(QString name, double factor)
{
PrecisionType _res;
_res.name = name;
_res.factor = factor;
return _res;
}
quint32 ECarDataUnit::encode_toUInt32(double f, int m)
{
    quint32 _val = 0;
    if(f<0){
        f *= (-1);
        _val = 0x80000000;
    }
    _val |= (quint32)(f*pow(10,m));
    return _val;
}
double ECarDataUnit::decryption_toDouble(quint32 val)
{
    double _f = 1;
    if(val&0x80000000){
        val &= ~0x80000000;
        _f *= (-1);
    }
    _f *= (double)val;
    return _f;
}

double ECarDataUnit::decryption_toDouble(quint32 val, int m)
{
    double _f = 1;
    if(val&0x80000000){
        val &= ~0x80000000;
        _f *= (-1);
    }
    _f *= (double)val/pow(10,m);
    return _f;
}

uint16_t ECarDataUnit::elapsed(uint16_t now, uint16_t last)
{
    if(now>=last)return (now-last);
    else return (((uint16_t)-last)+now);
}
uint8_t ECarDataUnit::elapsed8(uint8_t now, uint8_t last)
{
    if(now>=last)return (now-last);
    else return (((uint8_t)-last)+now);
}


qreal ECarDataUnit::convertUnit(qreal value,UnitType unit)
{
    qreal _raw=0;
    _raw = value*unit.factor+unit.offset;
    return _raw;
}

qreal ECarDataUnit::getPrecision(qreal value,PrecisionType pre)
{
    return QString::number(value,'f',pre.factor).toDouble();
}

void ECarDataUnit::checkErrorFrame()
{
    if(this->elapsed8(this->counterFrame(),m_dataUnit.lastFrame)!=1){
        m_dataUnit.errorFrame++;
        m_dataUnit.counterConnect++;
        if(m_dataUnit.counterConnect>=5){
            m_dataUnit.counterConnect=0;
            this->setConnect(false);
        }
    }
    else {
        m_dataUnit.counterConnect=0;
        this->setConnect(true);
    }
    m_dataUnit.lastFrame = this->counterFrame();
}

qreal ECarDataUnit::getTimeError()
{
/*
 * timeLast.........................sample-0........sample-1........sample-n..TimeNow
 * <------------->timeError------------|-------5ms-----|-------5ms-----|-------------
*/
    qreal _time = QVariant(elapsed(m_dataUnit.timeSystem,m_dataUnit.timeErrorLast)).toDouble()/m_dataUnit.timeFactory;
    m_dataUnit.timeErrorLast = m_dataUnit.timeSystem;
    if(_time>0.5)return 0;
    _time = _time - QVariant(m_carData.distanceIndex*sampleTime()).toDouble()/m_dataUnit.timeFactory;
    if(_time<0)return QVariant(sampleTime()).toDouble()/m_dataUnit.timeFactory;
    return _time;
}

void ECarDataUnit::calPin()
{
    qreal _val;
    if(m_carData.pin&0x8000)m_dataUnit.pinCountCharge++;
    _val = QVariant(m_carData.pin&0x7FFF).toDouble();
    this->setPin(_val);
    if(m_dataUnit.pinCountTime++>20){
        PinCharge_TypeDef _chg=PinCharge_TypeDef::PIN_DISCHARGE;
        if(m_dataUnit.pinCountCharge>2)_chg=PinCharge_TypeDef::PIN_CHARGING;
        if(m_dataUnit.pinCountCharge>10)_chg=PinCharge_TypeDef::PIN_FULL;
        this->setPinCharging(_chg);
        m_dataUnit.pinCountCharge=0;
        m_dataUnit.pinCountTime=0;
    }
}

void ECarDataUnit::lowPassFilter(double *output, double input, double dt, double rc)
{
    double _output = *output;
    // Return RC low-pass filter output samples, given input samples,
    // time interval dt, and time constant RC
    /*
     function lowpass(real[1..n] x, real dt, real RC)
        var real[1..n] y
        var real α := dt / (RC + dt)
        y[1] := α * x[1]
        for i from 2 to n
            y[i] := α * x[i] + (1-α) * y[i-1]
        return y
     */
    double _alpha = dt/(rc+dt);
    _output = _output  - (_alpha*(_output-input));
    *output = _output;
}

void ECarDataUnit::calDistance()
{
    double _s=0;
    m_dataUnit.distanceList.clear();
    m_dataUnit.speedList.clear();
    m_dataUnit.accelerationList.clear();
    if(m_carData.distanceIndex>DISTANCE_BUFFER_MAX)return;
   // elapsed(uint16_t now, uint16_t last)
   // m_dataUnit.speedTimeLast += getTimeError();
    for(int i=0;i<m_carData.distanceIndex;i++){
        _s = this->calibDistance()*QVariant((int16_t)m_carData.distanceBuffer[i]).toDouble();
        if(this->sign())_s*=(-1);
        if(!this->vector())if(_s<0)_s*=(-1);
        if(m_dataUnit.distanceIsFilter){
            this->lowPassFilter(&m_dataUnit.distanceFilterOuput,_s,QVariant(m_dataUnit.sampleTime).toDouble()/m_dataUnit.timeFactory,0.001);
            _s = m_dataUnit.distanceFilterOuput;
        }
        //calculate speed
        this->calSpeed(m_dataUnit.distanceLast,_s);
        m_dataUnit.distanceLast = _s;
        _s = this->convertUnit(_s,this->distanceUnit());
        m_dataUnit.distance = this->getPrecision(_s,this->distancePrecision());
        m_dataUnit.distanceList.append(m_dataUnit.distance);
    }
}

void ECarDataUnit::calSpeed(qreal s0, qreal s1)
{
    qreal _spt = QVariant(m_dataUnit.sampleTime).toDouble()/m_dataUnit.timeFactory;
    qreal _spt_speed = QVariant(m_dataUnit.speedSPT).toDouble()/m_dataUnit.timeFactory;
    m_dataUnit.speedSum += (s1-s0);
    m_dataUnit.speedTimeLast += _spt;
    if(m_dataUnit.speedTimeLast>=_spt_speed){
        qreal _v = m_dataUnit.speedSum/m_dataUnit.speedTimeLast;
        if(!this->vector())if(_v<0)_v*=(-1);
        if(m_dataUnit.speedIsFilter){
            this->lowPassFilter(&m_dataUnit.speedFilterOutput,_v,QVariant(m_dataUnit.speedSPT).toDouble()/m_dataUnit.timeFactory,QVariant(m_dataUnit.sampleTime).toDouble()/m_dataUnit.timeFactory);
            _v = m_dataUnit.speedFilterOutput;
        }
        this->calAcceleration(m_dataUnit.speedLast,_v,m_dataUnit.speedTimeLast);
        m_dataUnit.speedLast = _v;
        _v = this->convertUnit(_v,this->speedUnit());
        _v = this->getPrecision(_v,this->speedPrecision());
        this->setSpeed(_v);
        m_dataUnit.speedList.append(_v);
        m_dataUnit.speedSum = 0;
        m_dataUnit.speedTimeLast=0;
    }
}

void ECarDataUnit::calAcceleration(qreal v0, qreal v1,qreal time)
{
    qreal _a = (v1-v0)/time;
    if(!this->vector())if(_a<0)_a*=(-1);
    if(m_dataUnit.accelerationIsFilter){
        this->lowPassFilter(&m_dataUnit.accelerationFilterOutput,_a,QVariant(m_dataUnit.speedSPT).toDouble()/m_dataUnit.timeFactory,QVariant(m_dataUnit.sampleTime).toDouble()/m_dataUnit.timeFactory);
        _a = m_dataUnit.accelerationFilterOutput;
    }
    _a = this->convertUnit(_a,this->accelerationUnit());
    _a = this->getPrecision(_a,this->accelerationPrecision());
    this->setAcceleration(_a);
    m_dataUnit.accelerationList.append(_a);
}

void ECarDataUnit::calForce()
{
    double _f=0;
    double _sum=0;
    m_dataUnit.forceList.clear();
    if(m_carData.forceIndex>FORCE_BUFFER_MAX)return;
    for(int i=0;i<m_carData.forceIndex;i++){
        _f = this->calibForce()*QVariant((int16_t)m_carData.forceBuffer[i]).toDouble();
        if(this->sign())_f*=(-1);
        if(!this->vector())if(_f<0)_f*=(-1);
        _f = this->convertUnit(_f,this->forceUnit());
        m_dataUnit.forceList.append(this->getPrecision(_f,this->forcePrecision()));
        _sum+=_f;
        }
    if(m_carData.forceIndex>0)_f = _sum/QVariant(m_carData.forceIndex).toDouble();
    else _f=0;
    m_dataUnit.force = this->getPrecision(_f,this->forcePrecision());
}


void ECarDataUnit::calAxisX()
{
    this->setAxisX(QVariant((qint16)m_carData.axisX).toDouble()/100);
}
void ECarDataUnit::calAxisY()
{
    this->setAxisY(QVariant((qint16)m_carData.axisY).toDouble()/100);
}
void ECarDataUnit::calAxisZ()
{
    this->setAxisZ(QVariant((qint16)m_carData.axisZ).toDouble()/100);
}

void ECarDataUnit::updateFinish()
{
    //address
    uint32_t _add = 0;
    memcpy(&_add,m_carData.add,sizeof(_add));
    this->setAddress(QString("%1").arg(_add, 10, 10, QLatin1Char( '0' )));
    this->setSampleTime(m_carData.sampleTime);
    this->setTimeTick(m_carData.timeTick);
    this->setCalibForce(this->decryption_toDouble(m_carData.calibForce,5));
    this->setCalibDistance(this->decryption_toDouble(m_carData.calibDistance,5));
    this->setCounterFrame(m_carData.counterFrame);
    this->setCountPerRound(m_carData.countPerRound);
    this->setTimeShutdown(m_carData.timeShutdown);
    this->setTimeShutdownCount(m_carData.timeShutdownCount);
    this->checkErrorFrame();
    this->calPin();
    //calculate Data
    this->calForce();
    this->calDistance();
    this->calAxisX();
    this->calAxisY();
    this->calAxisZ();
    //get condition Start with TimeLine
}


