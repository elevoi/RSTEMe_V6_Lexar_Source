#include "emod203parameter.h"
#include <string.h>

EMod203Parameter::EMod203Parameter()
{
m_car_01=new ECarDataUnit();
m_car_02=new ECarDataUnit();;
}

EMod203Parameter::~EMod203Parameter()
{

}

ECarDataUnit* EMod203Parameter::car(ECarDataUnit::CAR_NUMBER_TYPE num)
{
    return (num==ECarDataUnit::CAR_NUM_01)?m_car_01:m_car_02;
}

void EMod203Parameter::setCar(ECarDataUnit *var, ECarDataUnit::CAR_NUMBER_TYPE num)
{
if(num==ECarDataUnit::CAR_NUM_01)m_car_01=var;
    else m_car_02 = var;
}

void EMod203Parameter::init()
{

}

void EMod203Parameter::setRequest(ERequestUnit request)
{
    //update car data
    uint16_t _holdingReg[128]={0,};
    m_requestUnit = request;
    for(quint16 i=0;i<request.data().valueCount();i++){
        this->updateDataHoldingSensor((request.data().startAddress()-HOLDING_REG_OFFSET)+i,request.data().value(i));
        if(i<128) _holdingReg[(request.data().startAddress()-HOLDING_REG_OFFSET)+i] = request.data().value(i);
    }
    ECarDataUnit::ECAR_Frame _unit_1,_unit_2;
    memcpy((uint8_t*)&_unit_1,(uint8_t*)(_holdingReg+CAR01_DATA),sizeof(ECarDataUnit::ECAR_Frame));
    memcpy((uint8_t*)&_unit_2,(uint8_t*)(_holdingReg+CAR02_DATA),sizeof(ECarDataUnit::ECAR_Frame));
    if(m_car_01){
        m_car_01->setDataFrame(_unit_1,ECarDataUnit::CAR_NUM_01);
        m_car_01->setTimeSystem(_holdingReg[CAR_TIME_SYSTEM]);
        m_car_01->setTimeError(0);
    }
    if(m_car_02){
        m_car_02->setDataFrame(_unit_2,ECarDataUnit::CAR_NUM_02);
        m_car_02->setTimeSystem(_holdingReg[CAR_TIME_SYSTEM]);
        //m_car_02->setTimeError(_holdingReg[CAR_TIME_Error]);
        m_car_02->setTimeError(0);
    }
    this->finishUpdateDataSensor();
}

void EMod203Parameter::updateDataHoldingSensor(quint16 add, quint16 value)
{
    switch(add){
        case DEVICE_SN1:this->setSerial(value);
            break;
        case DEVICE_SN2:this->setSerial((this->serial()*65535)+value);
            break;
        case DEVICE_ID:this->setId(value);
            break;
        case MODULE_CONTROL:
            break;
    }
}

void EMod203Parameter::finishUpdateDataSensor()
{
if(m_car_01)m_car_01->updateFinish();
if(m_car_02)m_car_02->updateFinish();
}
