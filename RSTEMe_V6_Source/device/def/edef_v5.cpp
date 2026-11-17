#include "edef_v5.h"

EDef::EDef(EDeviceInfo dev)
{
m_edeviceInfo = dev;
this->init();
}

EDef::~EDef()
{

}

EDeviceParameter EDef::parameter()
{
    return m_para;
}
/*
EDeviceParameter EDef::parameter(EDeviceInfo dev)
{
    m_edeviceInfo = dev;
    return m_para;
}*/

void EDef::setParameter(EDeviceParameter para)
{
    m_para = para;
}

void EDef::setRequest(ERequestUnit request)
{
    m_requestUnit = request;
    for(quint16 i=0;i<request.data().valueCount();i++){
        switch(request.data().registerType()){
        case QModbusDataUnit::RegisterType::HoldingRegisters:
            m_para.updateDataHoldingSensor((request.data().startAddress()-40001)+i,request.data().value(i));
            break;
        case QModbusDataUnit::RegisterType::Coils:
            break;
        case QModbusDataUnit::RegisterType::DiscreteInputs:
            break;
        case QModbusDataUnit::RegisterType::InputRegisters:
            break;
        case QModbusDataUnit::RegisterType::Invalid:
            break;
        }
    }
    m_para.finishUpdateDataSensor();
}


void EDef::init()
{
    //////////////////////////////////////////////////////////////////default private
    //sensor
    m_para.setDigital(8,1);
    m_para.setClock(100,0);
    //unit
    //resolution
    //isTemp
    m_para.setIsZero(false);
    m_para.setZeroSetup(0);
    m_para.setIsTemp(false);
    m_para.setIsTempComp(false);
    //data buffer type
    m_para.setBufferType(EDeviceParameter::BUF_16_BIT);
    //tool
    m_para.setToolDisplay({0x14010000,0x14020000,0x14030000,0x14040000,0x14050000});
    m_para.setToolPractice({0x14610000});
    m_para.setToolControl({0x14510000,0x14520000,0x14530000,0x10090000});
    /////////////////////////////////////////////////////////////////////private config
    switch(m_edeviceInfo.serial(EDeviceInfo::SERIAL_DEVICE)){
        case 0x01://TEMPRATURE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(250,-50);
            //unit
            m_para.appendUnit("Độ C - Celsius","C",0.01,0);
            m_para.appendUnit("Độ F - Fahrenheit","F",0.01,273.15);
            m_para.appendUnit("Độ K - Kelvin","K",(9.0/0.5)*0.01,32.0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,-50,100,200);
            m_para.setDefaultAlarm(1,false,0,10,0,-50,100,200);
            break;
        case 0x02://HUMIDITY SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(100,0);
            //unit
            m_para.appendUnit("Độ ẩm tương đối","%RH",0.01,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,50,90);
            m_para.setDefaultAlarm(1,false,0,10,0,0,50,90);
            break;
        case 0x03://FORCE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(50,0);
            //unit
            m_para.appendUnit("Đo lực (Newton)","N",0.001,0);
            m_para.appendUnit("Đo khối lượng (Gram)","G",0.1,0);
            m_para.appendUnit("Đo khối lượng (Kilogram)","Kg",0.0001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(80);
            //isTemp
            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,30,50);
            m_para.setDefaultAlarm(1,false,0,10,0,0,30,50);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_32_BIT);
            break;
        case 0x04://PRESSURE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(250000,0);
            //unit
            m_para.appendUnit("Pascal","Pa",1,0);
            m_para.appendUnit("Kilopascal","kPa",0.001,0);
            m_para.appendUnit("Bar","bar",0.00001,0);
            m_para.appendUnit("psi","psi",0.0001450377,0);
            m_para.appendUnit("ksi","ksi",1.450377377E-7,0);
            m_para.appendUnit("Standard atmosphere","atm",0.0000098692,0);
            m_para.appendUnit("Torr","Torr",0.0075006168,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(100000);//air pressure is 100000
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,100,200);
            m_para.setDefaultAlarm(1,false,0,10,0,0,100,200);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_32_BIT);
            break;
        case 0x05://SOUND SENSOR
            //sensor
            m_para.setDigital(6,1);
            m_para.setClock(2.5,0);
            //unit
            m_para.appendUnit("Voltage","V",0.01,0);
            m_para.appendUnit("Decibel","dB",0.01,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //tool
            m_para.setToolDisplay({0x14010000,0x14020000,0x14030000});
            m_para.setToolPractice({0x14610000,0x14620000});
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,2,3);
            m_para.setDefaultAlarm(1,false,0,10,0,0,2,3);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_8_BIT_UINT);
            break;
        case 0x06://pH SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(14,0);
            //unit
            m_para.appendUnit("pH","pH",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(7000);//pH in pure water or distilled water
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,7,13);
            m_para.setDefaultAlarm(1,false,0,10,0,0,7,13);
            break;
        case 0x07://DO SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(20,0);
            //unit
            m_para.appendUnit("mg/L","mg",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(0);
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,10,19);
            m_para.setDefaultAlarm(1,false,0,10,0,0,10,19);
            break;
        case 0x08://DO SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(25,0);
            //unit
            m_para.appendUnit("%","%",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(0);
            //m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,12,24);
            m_para.setDefaultAlarm(1,false,0,10,0,0,12,24);
            break;
        case 0x09://SALINITY SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(50,0);
            //unit
            m_para.appendUnit("ppt","ppt",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(0);
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,25,45);
            m_para.setDefaultAlarm(1,false,0,10,0,0,25,45);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_32_BIT);
            break;
        case 0x10://CO2
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(50000,0);
            //unit
            m_para.appendUnit("ppm","ppm",1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(400);
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10000,0,0,25000,45000);
            m_para.setDefaultAlarm(1,false,0,10000,0,0,25000,45000);
            break;
        case 0x11://TURBIDITY SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(1000,0);
            //unit
            m_para.appendUnit("NTU","NTU",0.1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(0);
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,500,999);
            m_para.setDefaultAlarm(1,false,0,10,0,0,500,999);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_16_BIT);
            break;
        case 0x12://LIGHT SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(65000,0);
            //unit
            m_para.appendUnit("Độ rọi (Lux)","lx",1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,30000,60000);
            m_para.setDefaultAlarm(1,false,0,10,0,0,30000,60000);
            break;
        case 0x15://Conductivity SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(100000,0);
            //unit
            m_para.appendUnit("uS/cm","uS",1,0);
            m_para.appendUnit("mS/cm","mS",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(3));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,25000,40000);
            m_para.setDefaultAlarm(1,false,0,10,0,0,25000,40000);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_32_BIT);
            //tool
            break;
        case 0x17://SoundLevel SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(130,0);
            //unit
            m_para.appendUnit("Decibel","dB",0.1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(2));
            //freq
            m_para.setFreqMax(10);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,80,120);
            m_para.setDefaultAlarm(1,false,0,10,0,0,80,120);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_16_BIT);
            //tool
            break;
        case 0x21://DISTANCE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(1200,0);
            //unit
            m_para.appendUnit("Meters (m)","m",0.001,0);
            m_para.appendUnit("Decimeters (dm)","m",0.01,0);
            m_para.appendUnit("Centimeters (cm)","m",0.1,0);
            m_para.appendUnit("Millimeters (mm)","mm",1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(50);
            //isTemp
            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,600,1100);
            m_para.setDefaultAlarm(1,false,0,10,0,0,600,1100);
            break;
        case 0x23://MOTION SENSOR
            //sensor
            m_para.setDigital(6,1);
            m_para.setClock(3300,0);
            //unit
            m_para.appendUnit("Voltage","V",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //tool
            m_para.setToolPractice({0x14610000,0x14620000});
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,2,3);
            m_para.setDefaultAlarm(1,false,0,10,0,0,2,3);
            break;

        case 0x30://HUMIDITY SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(110000,300);
            //unit
            m_para.appendUnit("Pascal","Pa",1,0);
            m_para.appendUnit("Hectopascal","hPa",0.01,0);
            m_para.appendUnit("Kilopascal","kPa",0.001,0);
            m_para.appendUnit("Bar","bar",0.00001,0);
            m_para.appendUnit("psi","psi",0.0001450377,0);
            m_para.appendUnit("ksi","ksi",1.450377377E-7,0);
            m_para.appendUnit("Standard atmosphere","atm",0.0000098692,0);
            m_para.appendUnit("Torr","Torr",0.0075006168,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,300,50000,109000);
            m_para.setDefaultAlarm(1,false,0,10,0,300,50000,109000);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_32_BIT);
            break;
        case 0x32://Wind speed SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(60,0);
            //unit
            m_para.appendUnit("Metre/second","m/s",0.001,0);
            m_para.appendUnit("Kilometre/hour","km/h",0.0036,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //tool
            m_para.setToolPractice({0x14610000,0x14620000});
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,30,60);
            m_para.setDefaultAlarm(1,false,0,10,0,0,30,60);
            break;
        case 0x33://Wind Direction SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(360,0);
            //unit
            m_para.appendUnit("Degree","deg",0.1,0);
            m_para.appendUnit("Radian","rad",0.0017453293,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //tool
            m_para.setToolPractice({0x14610000,0x14620000});

            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,180,360);
            m_para.setDefaultAlarm(1,false,0,10,0,0,180,360);
            break;
        case 0x34://MOTION SENSOR
            //sensor
            m_para.setDigital(6,1);
            m_para.setClock(100,0);
            //unit
            m_para.appendUnit("Millimeter/hour","mm/h",0.001,0);
            m_para.appendUnit("Millimeter/day","mm/day",0.024,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);

            //tool
            m_para.setToolPractice({0x14610000,0x14620000});

            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,50,100);
            m_para.setDefaultAlarm(1,false,0,10,0,0,50,100);
            break;



        case 0x50://VOLTAGE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(12000,-12000);
            //unit
            m_para.appendUnit("Volts (V)","V",0.001,0);
            m_para.appendUnit("Millivolts (mV)","mV",1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(1000);
            //isTemp
            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,6,11);
            m_para.setDefaultAlarm(1,false,0,10,0,0,6,11);
            break;
        case 0x51://AMPE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(3000,-3000);
            //unit
            m_para.appendUnit("Ampere (A)","A",0.001,0);
            m_para.appendUnit("Milliampere (mA)","mA",1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //freq
            m_para.setFreqMax(1000);
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //isTemp
            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,2,3);
            m_para.setDefaultAlarm(1,false,0,10,0,0,2,3);
            break;
        case 0x52://AMPE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(1200,-1200);
            //unit
            m_para.appendUnit("Gauss (G)","G",1,0);
            m_para.appendUnit("Tesla (T)","T",0.0001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //freq
            m_para.setFreqMax(1000);
            //resolution
            m_para.appendResolution("0.0001",4);
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(4));
            //isTemp
            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,500,1000);
            m_para.setDefaultAlarm(1,false,0,10,0,0,500,1000);
            break;
        }
}
/*
void EDef::init()
{
    //////////////////////////////////////////////////////////////////default private
    //sensor
    m_para.setDigital(8,1);
    m_para.setClock(100,0);
    //unit
    //resolution
    //isTemp
    m_para.setIsZero(false);
    m_para.setZeroSetup(0);
    m_para.setIsTemp(false);
    m_para.setIsTempComp(false);
    //data buffer type
    m_para.setBufferType(EDeviceParameter::BUF_16_BIT);
    //tool
    m_para.setToolDisplay({0x14010000,0x14020000,0x14030000,0x14040000,0x14050000});
    m_para.setToolPractice({0x14610000});
    m_para.setToolControl({0x14510000,0x14520000,0x14530000,0x10090000});
    /////////////////////////////////////////////////////////////////////private config
    switch(m_edeviceInfo.serial(EDeviceInfo::SERIAL_DEVICE)){
        case 0x01://TEMPRATURE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(250,-50);
            //unit
            m_para.appendUnit("Độ C - Celsius","C",0.01,0);
            m_para.appendUnit("Độ F - Fahrenheit","F",0.01,273.15);
            m_para.appendUnit("Độ K - Kelvin","K",(9.0/0.5)*0.01,32.0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,-50,100,200);
            m_para.setDefaultAlarm(1,false,0,10,0,-50,100,200);
            break;
        case 0x02://HUMIDITY SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(100,0);
            //unit
            m_para.appendUnit("Độ ẩm tương đối","%RH",0.01,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,50,90);
            m_para.setDefaultAlarm(1,false,0,10,0,0,50,90);
            break;
        case 0x03://FORCE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(50,0);
            //unit
            m_para.appendUnit("Đo lực (Newton)","N",0.001,0);
            m_para.appendUnit("Đo khối lượng (Gram)","G",0.1,0);
            m_para.appendUnit("Đo khối lượng (Kilogram)","Kg",0.0001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(80);
            //isTemp
            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,30,50);
            m_para.setDefaultAlarm(1,false,0,10,0,0,30,50);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_32_BIT);
            break;
        case 0x04://PRESSURE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(250000,0);
            //unit
            m_para.appendUnit("Pascal","Pa",1,0);
            m_para.appendUnit("Kilopascal","kPa",0.001,0);
            m_para.appendUnit("Bar","bar",0.00001,0);
            m_para.appendUnit("psi","psi",0.0001450377,0);
            m_para.appendUnit("ksi","ksi",1.450377377E-7,0);
            m_para.appendUnit("Standard atmosphere","atm",0.0000098692,0);
            m_para.appendUnit("Torr","Torr",0.0075006168,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(100000);//air pressure is 100000
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,100,200);
            m_para.setDefaultAlarm(1,false,0,10,0,0,100,200);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_32_BIT);
            break;
        case 0x05://SOUND SENSOR
            //sensor
            m_para.setDigital(6,1);
            m_para.setClock(2.5,0);
            //unit
            m_para.appendUnit("Voltage","V",0.01,0);
            //m_para.appendUnit("Decibel","dB",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //tool
            m_para.setToolDisplay({0x14010000,0x14020000,0x14030000});
            m_para.setToolPractice({0x14610000,0x14620000});
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,2,3);
            m_para.setDefaultAlarm(1,false,0,10,0,0,2,3);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_8_BIT_UINT);
            break;
        case 0x06://pH SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(14,0);
            //unit
            m_para.appendUnit("pH","pH",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(7000);//pH in pure water or distilled water
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,7,13);
            m_para.setDefaultAlarm(1,false,0,10,0,0,7,13);
            break;
        case 0x07://DO SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(20,0);
            //unit
            m_para.appendUnit("mg/L","mg",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(0);
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,10,19);
            m_para.setDefaultAlarm(1,false,0,10,0,0,10,19);
            break;
        case 0x08://DO SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(25,0);
            //unit
            m_para.appendUnit("%","%",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(0);
            //m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,12,24);
            m_para.setDefaultAlarm(1,false,0,10,0,0,12,24);
            break;
        case 0x09://SALINITY SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(50,0);
            //unit
            m_para.appendUnit("ppt","ppt",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(0);
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,25,45);
            m_para.setDefaultAlarm(1,false,0,10,0,0,25,45);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_32_BIT);
            break;
        case 0x10://CO2
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(50000,0);
            //unit
            m_para.appendUnit("ppm","ppm",1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setZeroSetup(400);
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10000,0,0,25000,45000);
            m_para.setDefaultAlarm(1,false,0,10000,0,0,25000,45000);
            break;
        case 0x12://LIGHT SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(65000,0);
            //unit
            m_para.appendUnit("Độ rọi (Lux)","lx",1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,30000,60000);
            m_para.setDefaultAlarm(1,false,0,10,0,0,30000,60000);
            break;
        case 0x15://Conductivity SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(100000,0);
            //unit
            m_para.appendUnit("uS/cm","uS",1,0);
            m_para.appendUnit("mS/cm","mS",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(3));
            //freq
            m_para.setFreqMax(10);
            //isTemp
            m_para.setIsZero(true);
            m_para.setIsTemp(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,25000,40000);
            m_para.setDefaultAlarm(1,false,0,10,0,0,25000,40000);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_32_BIT);
            //tool
            break;
        case 0x17://SoundLevel SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(130,0);
            //unit
            m_para.appendUnit("Decibel","dB",0.1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(2));
            //freq
            m_para.setFreqMax(10);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,80,120);
            m_para.setDefaultAlarm(1,false,0,10,0,0,80,120);
            //data buffer type
            m_para.setBufferType(EDeviceParameter::BUF_16_BIT);
            //tool
            break;
        case 0x21://DISTANCE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(1200,0);
            //unit
            m_para.appendUnit("Meters (m)","m",0.001,0);
            m_para.appendUnit("Millimeters (mm)","mm",1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(50);
            //isTemp
            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,600,1100);
            m_para.setDefaultAlarm(1,false,0,10,0,0,600,1100);
            break;
        case 0x23://MOTION SENSOR
            //sensor
            m_para.setDigital(6,1);
            m_para.setClock(3300,0);
            //unit
            m_para.appendUnit("Voltage","V",0.001,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(10);
            //tool
            m_para.setToolPractice({0x14610000,0x14620000});
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,2,3);
            m_para.setDefaultAlarm(1,false,0,10,0,0,2,3);
            break;
        case 0x50://VOLTAGE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(12000,-12000);
            //unit
            m_para.appendUnit("Volts (V)","V",0.001,0);
            m_para.appendUnit("Millivolts (mV)","mV",1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //freq
            m_para.setFreqMax(1000);
            //isTemp
            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,6,11);
            m_para.setDefaultAlarm(1,false,0,10,0,0,6,11);
            break;
        case 0x51://AMPE SENSOR
            //sensor
            m_para.setDigital(8,1);
            m_para.setClock(3000,-3000);
            //unit
            m_para.appendUnit("Ampere (A)","A",0.001,0);
            m_para.appendUnit("Milliampere (mA)","mA",1,0);
            m_para.setCurrentUnit(m_para.unit().at(0));
            //freq
            m_para.setFreqMax(1000);
            //resolution
            m_para.appendResolution("0.001",3);
            m_para.appendResolution("0.01",2);
            m_para.appendResolution("0.1",1);
            m_para.appendResolution("1",0);
            m_para.setCurrentResolution(m_para.resolution().at(0));
            //isTemp
            m_para.setIsZero(true);
            //Alarm
            m_para.setDefaultAlarm(0,false,0,10,0,0,2,3);
            m_para.setDefaultAlarm(1,false,0,10,0,0,2,3);
            break;
        }
}
*/
