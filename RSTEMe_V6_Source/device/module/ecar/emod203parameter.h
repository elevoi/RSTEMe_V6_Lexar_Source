#ifndef EMOD203PARAMETER_H
#define EMOD203PARAMETER_H

#include "device/edeviceinfo.h"
#include "comm/erequestunit.h"
#include "device/module/ecar/ecardataunit.h"

class EMod203Parameter
{
public:
    EMod203Parameter();
    ~EMod203Parameter();
    enum REG_HOLDING_INDEX{
        DEVICE_SN1,				//40001
        DEVICE_SN2,
        DEVICE_ID,
        SAMPLETIME,
        MODULE_CONTROL,
        GPIO_HI,
        GPIO_LO,
        CAR_TIME_SYSTEM,
        CAR_TIME_Error,     //time = timeOfQueryCar2-timeOfQueryCar1
        CONTROL_HI_1,		//data of control car1
        CONTROL_LO_1,
        CONTROL_HI_2,		//data of control car2
        CONTROL_LO_2,
        CAR_CONTROL,	//0xABCD, AB = control of car1, CD = control of car2
        CAR01_DATA = 15,
        CAR02_DATA = CAR01_DATA+55,

        HOLDING_REG_OFFSET=40001
    };
    enum BUFFER_TYPE{
        BUF_8_BIT,
        BUF_16_BIT,
        BUF_32_BIT
    };

    struct DataType{
        int serial=0;
        int id = 0;
    }m_dataType;

    //DataType
    inline int serial() const {return m_dataType.serial;}
    inline void setSerial(int var) {m_dataType.serial = var;}
    inline int id() const {return m_dataType.id;}
    inline void setId(int var) {m_dataType.id = var;}

    ECarDataUnit* car(ECarDataUnit::CAR_NUMBER_TYPE num);
    void setCar(ECarDataUnit *var,ECarDataUnit::CAR_NUMBER_TYPE num);

    void setRequest(ERequestUnit request);
private:
    EDeviceInfo m_edeviceInfo;
    ERequestUnit m_requestUnit;

    ECarDataUnit *m_car_01=nullptr,*m_car_02=nullptr;

    void init();
    void updateDataHoldingSensor(quint16 add, quint16 value);
    void finishUpdateDataSensor();
};

#endif // EMOD203PARAMETER_H
