#include "emodule.h"
#include "QDebug"



EModule::EModule(EDevice *dev):m_edevice(dev)
{
this->setDevice(dev);
}
EModule::EModule(QObject *parent, EDevice *dev):QObject(parent)
{
    this->setDevice(dev);
}
EModule::~EModule()
{

}

void EModule::setDevice(EDevice *dev)
{
this->destroy();
m_edevice = dev;
this->init();
}

void EModule::start()
{
    if(!m_edevice)return;
    this->measureStart();
}

void EModule::start(uint32_t tick)
{
    if(!m_edevice)return;
    this->measureStart(tick);
}

void EModule::setRequestWrite(uint16_t reg, QVector<uint16_t> values)
{
    auto _request = ERequestUnit::getRequestWrite();
    auto _data = _request.data();
    _data.setRegisterType(QModbusDataUnit::HoldingRegisters);
    _data.setStartAddress(EDeviceParameter::HOLDING_REG_OFFSET+reg);
    _data.setValueCount(values.count());
    _data.setValues(values);
    _request.setData(_data);

    _request.setPriority(1);
    _request.setRetries(1);
    _request.setTimeout(30);

    m_edevice->MeasureRequest(_request);
}




void EModule::init()
{
    if(!m_edevice)return;
    m_edeviceInfo = m_edevice->deviceInfo();
    //request
    m_requestUnit.setPriority(m_edeviceInfo.priority());
    m_requestUnit.setRetries(m_edeviceInfo.retries());
    m_requestUnit.setTimeout(m_edeviceInfo.timeOut());
    //device
    QObject::connect(m_edevice,&EDevice::result,this,&EModule::on_result);
    QObject::connect(m_edevice,&EDevice::error,this,&EModule::on_error);
}

void EModule::on_result(ERequestUnit request)
{
if(request.slaveAddress()!=m_edevice->deviceInfo().address())return;
if(request.error()!=QModbusDevice::NoError)return;
if(request.type()==ERequestUnit::Write)return;
m_requestUnit = request;
emit this->newData(m_requestUnit.id());
emit this->newDataDevice(m_edevice);
}

void EModule::on_error(EDevice::Error error)
{
    ELog::log(error);
    emit this->error(error);
}

void EModule::destroy()
{
    if(m_edevice){
        QObject::disconnect(m_edevice,&EDevice::result,this,&EModule::on_result);
        QObject::disconnect(m_edevice,&EDevice::error,this,&EModule::on_error);
    }
}
void EModule::measureStart()
{
    if(m_edevice->isStart()==EDevice::StIdle){
        m_edevice->start();
        //this->setSampleTime(m_edeviceInfo.sampleTime());
        this->setMeasurePeriodic();
    }
}
void EModule::measureStart(uint32_t)
{
    if(m_edevice->isStart()==EDevice::StIdle){
        m_edevice->start();
        this->setMeasurePeriodic();
        }
}

void EModule::setMeasurePeriodic()
{
    auto _request = ERequestUnit::getRequestRead();
    auto _data = _request.data();
    if(m_edevice->deviceInfo().regStart()>=40000)_data.setRegisterType(QModbusDataUnit::HoldingRegisters);
        else _data.setRegisterType(QModbusDataUnit::InputRegisters);
    _data.setStartAddress(m_edevice->deviceInfo().regStart());
    _data.setValueCount(m_edevice->deviceInfo().regNumber());
    _request.setData(_data);

    _request.setPriority(m_requestUnit.priority());
    _request.setRetries(m_requestUnit.retries());
    _request.setTimeout(m_requestUnit.timeout());

    m_edevice->MeasurePeriodic(_request);
}

