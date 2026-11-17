#include "ecarpractice.h"
#include <QDebug>

ECarPractice::ECarPractice(QObject *parent)
    : QObject{parent}
{
    this->initSpline(&m_practiceUnit.car01_splines);
    this->initSpline(&m_practiceUnit.car02_splines);
}

void ECarPractice::setUpdateTimeLine(bool var)
{
    m_practiceUnit.updateTimeLine = var;
    m_practiceUnit.isConditionStart = false;
    m_practiceUnit.isConditionStop = false;
    if(var){
        this->clearSpline(&m_practiceUnit.car01_splines);
        this->clearSpline(&m_practiceUnit.car02_splines);
        this->setTimeLine(0);
        this->setTime(0);
    }
}


void ECarPractice::updateCar(ECarDataUnit *car1, ECarDataUnit *car2)
{
    m_ecarUnit1 = car1;
    m_ecarUnit2 = car2;
    this->findCondition(car1,car2);
}

void ECarPractice::clear()
{
    m_practiceUnit.updateTimeLine  = false;
    m_practiceUnit.isConditionStart = false;
    m_practiceUnit.isConditionStop = false;
    this->clearSpline(&m_practiceUnit.car01_splines);
    this->clearSpline(&m_practiceUnit.car02_splines);
    this->setTimeLine(0);
    this->setTime(0);
    this->setTimeStart(0);
    this->setTimeStop(0);
}

void ECarPractice::setPen(int width)
{
    this->setPen(&m_practiceUnit.car01_splines,width);
    this->setPen(&m_practiceUnit.car02_splines,width);
}

void ECarPractice::setNoCondition(qreal time)
{
    m_practiceUnit.updateTimeLine  = true;
    m_practiceUnit.isConditionStart = true;
    m_practiceUnit.isConditionStop = true;
    this->clearSpline(&m_practiceUnit.car01_splines);
    this->clearSpline(&m_practiceUnit.car02_splines);
    this->setTimeLine(0);
    this->setTime(0);
    this->setTimeStart(0);
    this->setTimeStop(time);
}


uint16_t ECarPractice::elapsed(uint16_t now, uint16_t last)
{
    if(now>=last)return (now-last);
    else return (((uint16_t)-last)+now);
}

void ECarPractice::setPen(QtCharts::QLineSeries *line, int width)
{
    auto _pen = line->pen();
    _pen.setWidth(width);
    line->setPen(_pen);
}

void ECarPractice::setPen(ECAR_Splines *spline,int width)
{
    if(spline->distance)this->setPen(spline->distance,width);
    if(spline->speed)this->setPen(spline->speed,width);
    if(spline->acceleration)this->setPen(spline->acceleration,width);
    if(spline->force)this->setPen(spline->force,width);
    if(spline->axisX)this->setPen(spline->axisX,width);
    if(spline->axisY)this->setPen(spline->axisY,width);
    if(spline->axisZ)this->setPen(spline->axisZ,width);
}
void ECarPractice::initSpline(ECAR_Splines *spline)
{
    //init spline
    if(spline->distance){spline->distance->deleteLater();spline->distance=nullptr;}
    spline->distance = new QtCharts::QLineSeries;
    spline->distance->setName("Quãng đường");

    if(spline->speed){spline->speed->deleteLater();spline->speed=nullptr;}
    spline->speed = new QtCharts::QLineSeries;
    spline->speed->setName("Vận tốc");

    if(spline->acceleration){spline->acceleration->deleteLater();spline->acceleration=nullptr;}
    spline->acceleration = new QtCharts::QLineSeries;
    spline->acceleration->setName("Gia tốc");

    if(spline->force){spline->force->deleteLater();spline->force=nullptr;}
    spline->force = new QtCharts::QLineSeries;
    spline->force->setName("Lực tác động");

    if(spline->axisX){spline->axisX->deleteLater();spline->axisX=nullptr;}
    spline->axisX = new QtCharts::QLineSeries;
    spline->axisX->setName("Trục X");

    if(spline->axisY){spline->axisY->deleteLater();spline->axisY=nullptr;}
    spline->axisY = new QtCharts::QLineSeries;
    spline->axisY->setName("Trục Y");

    if(spline->axisZ){spline->axisZ->deleteLater();spline->axisZ=nullptr;}
    spline->axisZ = new QtCharts::QLineSeries;
    spline->axisZ->setName("Trục Z");

    this->setPen(spline,2);
}



void ECarPractice::calTimeLine(ECarDataUnit *car)
{
    //update systemTime
    ECarDataUnit::ECAR_DataUnit _dataUnit;
    _dataUnit = car->dataUnit();
    if(!m_practiceUnit.updateTimeLine){
        this->setTimeLine(0);
        _dataUnit.timeSystemLast = _dataUnit.timeSystem;
        car->setDataUnit(_dataUnit);
        return;
    }
    qreal _timeSys = QVariant(this->elapsed(_dataUnit.timeSystem,_dataUnit.timeSystemLast)).toDouble()/_dataUnit.timeFactory;
    _dataUnit.timeSystemLast = _dataUnit.timeSystem;
    car->setDataUnit(_dataUnit);
    if(_timeSys<0)return;
    this->setTimeLine(this->timeLine()+_timeSys);
}
void ECarPractice::findConditionStart(ECarDataUnit *car01, ECarDataUnit *car02)
{
    //get time point start
    qreal _time1=this->timeLine()+1,_time2=this->timeLine()+1;
    QString _str="",_str1="",_str2="";
    EConditionUnit::ConditionData _cond,_cond1,_cond2;
    if(car01)_time1 = this->findTimePoint(car01,car01->conditionStart(),&_str1,&_cond1);
    if(car02)_time2 = this->findTimePoint(car02,car02->conditionStart(),&_str2,&_cond2);

    qreal _time=0;
    if(_time1<_time2){
        _time=_time1;
        _str = _str1;
        _cond = _cond1;
    }
    else{
        _time=_time2;
        _str = _str2;
        _cond = _cond2;
    }
    if(_time<=this->timeLine()){
        m_practiceUnit.time=0;
        m_practiceUnit.timeStart = _time;
        m_practiceUnit.isConditionStart=true;
        emit this->replySetPlay(true,_cond,_str);
    }
}

void ECarPractice::findConditionStop(ECarDataUnit *car01, ECarDataUnit *car02)
{
    //get time point stop
    qreal _time1=this->timeLine()+1,_time2=this->timeLine()+1;
    QString _str="",_str1="",_str2="";
    EConditionUnit::ConditionData _cond,_cond1,_cond2;
    if(car01)_time1 = this->findTimePoint(car01,car01->conditionStop(),&_str1,&_cond1);
    if(car02)_time2 = this->findTimePoint(car02,car02->conditionStop(),&_str2,&_cond2);

    qreal _time=0;
    if(_time1<_time2){
        _time=_time1;
        _str = _str1;
        _cond = _cond1;
    }
    else{
        _time=_time2;
        _str = _str2;
        _cond = _cond2;
    }
    if(_time<=this->timeLine()){
        m_practiceUnit.timeStop = _time;
        m_practiceUnit.isConditionStop=true;
        emit this->replySetPlay(false,_cond,_str);
    }
}
void ECarPractice::findCondition(ECarDataUnit *car01, ECarDataUnit *car02)
{
    //update Time line
    if(car01)this->calTimeLine(car01);
        else if(car02)this->calTimeLine(car02);
    if(!m_practiceUnit.updateTimeLine)return;
    if(!m_practiceUnit.isConditionStart)this->findConditionStart(car01,car02);
    else{
        if(!m_practiceUnit.isConditionStop)this->findConditionStop(car01,car02);
        }
    //update splines
    if(car01){
        auto _unit = car01->dataUnit();
        this->updateSplines(&_unit,&m_practiceUnit.car01_splines);
        car01->setDataUnit(_unit);
    }
    if(car02){
        auto _unit = car02->dataUnit();
        this->updateSplines(&_unit,&m_practiceUnit.car02_splines);
        car02->setDataUnit(_unit);
    }
}

qreal ECarPractice::checkErrorTimeLine(qreal time, qreal timeLast,qreal sampleTime)
{
    qreal _timeRes = time;
    if(time<=timeLast){
        _timeRes = timeLast+sampleTime;
        this->setTimeLine(this->timeLine()+_timeRes);
        this->setTime(this->timeLine()-this->timeStart());
        if(!m_practiceUnit.isConditionStop)m_practiceUnit.timeStop = this->timeLine()+1;
    }
    return _timeRes;
}

void ECarPractice::updateSplineDistance(ECarDataUnit::ECAR_DataUnit *unit, ECAR_Splines *spline)
{
    auto _p = spline->distance->points();
    auto _data = unit->distanceList;
    for(int i=0;i<_data.count();i++){
        qreal _timelap = (QVariant((_data.count()-i-1)*unit->sampleTime).toDouble()/unit->timeFactory);
        if(((this->timeLine()-_timelap)>=this->timeStart())&&((this->timeLine()-_timelap)<=(this->timeStop()+ QVariant(unit->sampleTime).toDouble()/unit->timeFactory))){
            qreal _time = 0;
            if(_p.count()<1){
                _p.append(QPointF(unit->timeError/unit->timeFactory,_data.at(i)));
            }
            else _time = _p.last().x()+QVariant(unit->sampleTime).toDouble()/unit->timeFactory;
            _p.append(QPointF(_time,_data.at(i)));
        }
    }
    spline->distance->replace(_p);
}

void ECarPractice::updateSplineSpeed(ECarDataUnit::ECAR_DataUnit *unit, ECAR_Splines *spline)
{
    auto _p = spline->speed->points();
    auto _data = unit->speedList;
    for(int i=0;i<_data.count();i++){
        qreal _timelap = (QVariant((_data.count()-i-1)*unit->speedSPT).toDouble()/unit->timeFactory);
        if(((this->timeLine()-_timelap)>=this->timeStart())&&((this->timeLine()-_timelap)<=(this->timeStop()+QVariant(unit->speedSPT).toDouble()/unit->timeFactory))){
            qreal _time = 0;
            if(_p.count()<1){
                _p.append(QPointF(unit->timeError/unit->timeFactory,_data.at(i)));
            }
            else _time = _p.last().x()+QVariant(unit->speedSPT).toDouble()/unit->timeFactory;
            _p.append(QPointF(_time,_data.at(i)));
        }
    }
    spline->speed->replace(_p);
}

void ECarPractice::updateSplineAcceleration(ECarDataUnit::ECAR_DataUnit *unit, ECAR_Splines *spline)
{
    auto _p = spline->acceleration->points();
    auto _data = unit->accelerationList;
    for(int i=0;i<_data.count();i++){
        qreal _timelap = (QVariant((_data.count()-i-1)*unit->speedSPT).toDouble()/unit->timeFactory);
        if(((this->timeLine()-_timelap)>=this->timeStart())&&((this->timeLine()-_timelap)<=(this->timeStop()+QVariant(unit->speedSPT).toDouble()/unit->timeFactory))){
            qreal _time = 0;
            if(_p.count()<1){
                _p.append(QPointF(unit->timeError/unit->timeFactory,_data.at(i)));
            }
            else _time = _p.last().x()+QVariant(unit->speedSPT).toDouble()/unit->timeFactory;
            _p.append(QPointF(_time,_data.at(i)));
        }
    }
    spline->acceleration->replace(_p);
}

void ECarPractice::updateSplineForce(ECarDataUnit::ECAR_DataUnit *unit, ECAR_Splines *spline)
{
    auto _p = spline->force->points();
    auto _data = unit->forceList;
    for(int i=0;i<_data.count();i++){
        qreal _timelap = (QVariant((_data.count()-i-1)*unit->forceSPT).toDouble()/unit->timeFactory);
        if(((this->timeLine()-_timelap)>=this->timeStart())&&((this->timeLine()-_timelap)<=(this->timeStop()+QVariant(unit->forceSPT).toDouble()/unit->timeFactory))){
            qreal _time = 0;
            if(_p.count()<1){
                _p.append(QPointF(unit->timeError/unit->timeFactory,_data.at(i)));
                unit->forceFilterOutput = _data.at(i);
            }
            else _time = _p.last().x()+QVariant(unit->forceSPT).toDouble()/unit->timeFactory;
            if(unit->forceIsFilter)this->lowPassFilter(&unit->forceFilterOutput,_data.at(i),QVariant(unit->forceSPT).toDouble()/unit->timeFactory,0.001);
            else unit->forceFilterOutput = _data.at(i);
            _p.append(QPointF(_time,unit->forceFilterOutput));
        }
    }
    spline->force->replace(_p);
}

void ECarPractice::updateSplines(ECarDataUnit::ECAR_DataUnit *unit, ECAR_Splines *spline)
{
    if(!m_practiceUnit.isConditionStart){
        return;
        }
    this->setTime(this->timeLine()-this->timeStart());
    if(!m_practiceUnit.isConditionStop)m_practiceUnit.timeStop = this->timeLine()+1;
    //update distance
    this->updateSplineDistance(unit,spline);
    //update force
    this->updateSplineForce(unit,spline);
    //update speed
    this->updateSplineSpeed(unit,spline);
    //update acceleration
    this->updateSplineAcceleration(unit,spline);
    //update XYZ
    if((this->timeLine()>=this->timeStart())&&(this->timeLine()<=this->timeStop())){
        spline->axisX->append(QPointF(this->time(),unit->axisX));
        spline->axisY->append(QPointF(this->time(),unit->axisY));
        spline->axisZ->append(QPointF(this->time(),unit->axisZ));
    }
}


qreal ECarPractice::findTimePoint(ECarDataUnit *car,EConditionUnit::ConditionUnit_TypeDef condition,QString *str,EConditionUnit::ConditionData *cond)
{
    qreal _timePoint=this->timeLine()+1;
    auto _dataUnit= car->dataUnit();
    QString _str="";
    /*file time line
     * TimeLineLast:>>..................................................................................TimeLineNow()
     * Distance         ...........5mS(sample)............5mS(sample)............5mS(sample)............5mS(sample)
     * Force            ...........15mS(sample)...........15mS(sample)...........15mS(sample)...........15mS(sample)
       .............................................find condition at time on timeline................................................................
      */
    //check time
    if(this->checkCondition(this->timeLine(),condition.time)){
        if(condition.time.value<_timePoint){
            _timePoint = condition.time.value;
            _str = "Thời gian";
            *cond=condition.time;
        }
    }
    //check distance
    auto _list = _dataUnit.distanceList;
    for(int i=0;i<_list.count();i++){
        if(this->checkCondition(_list.at(i),condition.distance)){
            qreal _time = this->timeLine()-(QVariant((_list.count()-i-1)*_dataUnit.sampleTime).toDouble()/_dataUnit.timeFactory);
            if(_time<_timePoint){
                _timePoint = _time;
                _str = "Quãng đường";
                *cond=condition.distance;
            }
            break;
        }
    }
    //check force
    _list = _dataUnit.forceList;
    for(int i=0;i<_list.count();i++){
        if(this->checkCondition(_list.at(i),condition.force)){
            qreal _time = this->timeLine()-(QVariant((_list.count()-i-1)*_dataUnit.forceSPT).toDouble()/_dataUnit.timeFactory);
            if(_time<_timePoint){
                _timePoint = _time;
                _str = "Lực";
                *cond=condition.force;
            }
            break;
        }
    }
    //check speed
    _list = _dataUnit.speedList;
    for(int i=0;i<_list.count();i++){
        if(this->checkCondition(_list.at(i),condition.speed)){
            qreal _time = this->timeLine()-(QVariant((_list.count()-i-1)*_dataUnit.speedSPT).toDouble()/_dataUnit.timeFactory);
            if(_time<_timePoint){
                _timePoint = _time;
                _str = "Vận tốc";
                *cond=condition.speed;
            }
            break;
        }
    }
    //check acceleration
    _list = _dataUnit.accelerationList;
    for(int i=0;i<_list.count();i++){
        if(this->checkCondition(_list.at(i),condition.acceleration)){
            qreal _time = this->timeLine()-(QVariant((_list.count()-i-1)*_dataUnit.speedSPT).toDouble()/_dataUnit.timeFactory);
            if(_time<_timePoint){
                _timePoint = _time;
                _str = "Gia tốc";
                *cond=condition.acceleration;
            }
            break;
        }
    }
    //check axisX
    if(this->checkCondition(_dataUnit.axisX,condition.axisX)){
        if(this->timeLine()<_timePoint){
            _timePoint = this->timeLine();
            _str = "Trục X";
            *cond=condition.axisX;
        }
    }
    //check axisY
    if(this->checkCondition(_dataUnit.axisY,condition.axisY)){
        if(this->timeLine()<_timePoint){
            _timePoint = this->timeLine();
            _str = "Trục Y";
            *cond=condition.axisY;
        }
    }
    //check axisZ
    if(this->checkCondition(_dataUnit.axisZ,condition.axisZ)){
        if(this->timeLine()<_timePoint){
            _timePoint = this->timeLine();
            _str = "Trục Z";
            *cond=condition.axisZ;
        }
    }
    *str = _str;
    //return
    return _timePoint;
}



bool ECarPractice::checkCondition(qreal val, EConditionUnit::ConditionData cond)
{
    return EConditionUnit::getCompare(val,cond);
}

void ECarPractice::lowPassFilter(double *output, double input, double dt, double rc)
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

void ECarPractice::clearSpline(ECAR_Splines *spline)
{
    //clear spline
    if(spline->distance)spline->distance->clear();
    if(spline->speed)spline->speed->clear();
    if(spline->acceleration)spline->acceleration->clear();
    if(spline->force)spline->force->clear();
    if(spline->axisX)spline->axisX->clear();
    if(spline->axisY)spline->axisY->clear();
    if(spline->axisZ)spline->axisZ->clear();
}


