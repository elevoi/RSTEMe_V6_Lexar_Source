#ifndef ECARDATAUNIT_H
#define ECARDATAUNIT_H
#include <QVariant>
#include <QPointF>
#include <QtCharts/QSplineSeries>
#include "device/module/ecar/econditionunit.h"
#include <QObject>

class ECarDataUnit : public QObject
{
    Q_OBJECT
public:
    explicit ECarDataUnit(QObject *parent = nullptr);
    ~ECarDataUnit();
#define FORCE_BUFFER_MAX	8
#define DISTANCE_BUFFER_MAX		20

    typedef struct{
        //header
        uint8_t control;
        uint8_t	add[4];			//address = 5 byte, byte 0 is car type (SALVE1=1, SLAVE2=2), 4 byte is ID
        uint8_t sampleTime;
        uint16_t pin;
        uint16_t countPerRound;
        uint32_t calibForce;
        uint32_t calibDistance;
        uint16_t timeShutdown;
        uint16_t timeShutdownCount;
        uint8_t counterFrame;
        uint16_t timeTick;
        uint8_t forceIndex;
        uint16_t forceBuffer[FORCE_BUFFER_MAX];
        uint8_t distanceIndex;
        uint16_t distanceBuffer[DISTANCE_BUFFER_MAX];
        uint16_t axisX;
        uint16_t axisY;
        uint16_t axisZ;
    }ECAR_Frame;

    enum CAR_NUMBER_TYPE{
        CAR_NUM_01,
        CAR_NUM_02
    };

    enum {
        CTRL_NONE,
        CTRL_ADDRESS,
        CTRL_SAMPLE_TIME,
        CTRL_COUNT_PER_ROUND,
        CTRL_CALIB_DISTANCE,
        CTRL_ZERO_DISTANCE,
        CTRL_CALIB_FORCE,
        CTRL_ZERO_FORCE,
        CTRL_TIME_SHUTDOWN,
        CTRL_SHUTDOWN_CAR,
        CTRL_ZERO_AXIS,
        CTRL_OFFSET_AXIS
    }ECAR_Control;

    struct UnitType{
        QString name="";
        QString symbol = "";
        double factor=1;
        double offset=0;
    };
    struct PrecisionType{
        QString name="";
        double factor=1;
    };
    typedef enum {
        PIN_DISCHARGE,
        PIN_CHARGING,
        PIN_FULL
    }PinCharge_TypeDef;

    typedef struct __ZERO_DATA_{
        bool distance=false;
        bool force=false;
        bool axis=false;
    }ZeroData_TypeDef;

    typedef struct _ECAR_DATAUNIT{
        CAR_NUMBER_TYPE carNum=CAR_NUM_01;
        bool isConnect=false;
        QString address="000000000";
        qreal timeFactory = 1000;       //1: milliSecond, 1000: second
        //sampleTime
        int sampleTime=5;
        int speedSPT=100;        //100mSecond
        int forceSPT=15;
        int timeTick=0;
        int timeTickLast=0;
        int timeError=0;
        uint16_t timeSystem=0;
        uint16_t timeSystemLast=0;
        uint16_t timeErrorLast=0;

        int pin=0;
        int pinCountTime=0;
        int pinCountCharge=0;
        PinCharge_TypeDef pinCharging=PIN_DISCHARGE;
        qreal calibForce=1;
        qreal calibDistance=1;
        qreal axisX=0;
        qreal axisY=0;
        qreal axisZ=0;
        int counterFrame=0;
        int lastFrame=0;
        int errorFrame=0;
        int counterConnect=0;
        int countPerRound=0;
        int timeShutdown=0;
        int timeShutdownCount=0;

        //add para
        bool isVector=true;
        bool isSign = false;

        qreal timeLine=0;
        UnitType timeUnit={"Giây","(s)",1,0};
        QList<UnitType> timeUnits;
        PrecisionType timePrecision = {"0.001",3};
        QList<PrecisionType> timePrecisions;

        qreal force=0;
        bool  forceIsFilter=true;
        qreal forceFilterOutput=0;
        UnitType forceUnit={"Newton","(N)",1,0};
        QList<UnitType> forceUnits;
        PrecisionType forcePrecision = {"0.001",3};
        QList<PrecisionType> forcePrecisions;

        qreal distance=0;
        bool distanceIsFilter=true;
        qreal distanceFilterOuput=0;
        qreal distanceLast=0;
        UnitType distanceUnit={"mm","(mm)",1,0};
        QList<UnitType> distanceUnits;
        PrecisionType distancePrecision = {"1",1};
        QList<PrecisionType> distancePrecisions;

        qreal speed=0;
        bool  speedIsFilter=true;
        qreal speedFilterOutput=0;
        qreal speedRaw=0;
        qreal speedLast=0;
        qreal speedSum=0;
        qreal speedSumLast=0;
        qreal speedTimeLast=0;
        UnitType speedUnit={"mm/s","(mm/s)",1,0};
        QList<UnitType> speedUnits;
        PrecisionType speedPrecision = {"1",1};
        QList<PrecisionType> speedPrecisions;

        qreal acceleration=0;
        bool  accelerationIsFilter=true;
        qreal accelerationFilterOutput=0;
        UnitType accelerationUnit={"mm/s2","(mm/s2)",1,0};
        QList<UnitType> accelerationUnits;
        PrecisionType accelerationPrecision = {"1",1};
        QList<PrecisionType> accelerationPrecisions;

        UnitType axisXUnit={"degree","(d)",1,0};
        PrecisionType axisXPrecision = {"1",1};
        QList<PrecisionType> axisXPrecisions;

        UnitType axisYUnit={"degree","(d)",1,0};
        PrecisionType axisYPrecision = {"1",1};
        QList<PrecisionType> axisYPrecisions;

        UnitType axisZUnit={"degree","(d)",1,0};
        PrecisionType axisZPrecision = {"1",1};
        QList<PrecisionType> axisZPrecisions;

        QList<qreal> forceList={0,};
        QList<qreal> distanceList={0,};
        QList<qreal> speedList={0,};
        QList<qreal> accelerationList={0,};

    }ECAR_DataUnit;

    static quint32 encode_toUInt32(double f, int m);
    static double decryption_toDouble(quint32 val);
    static double decryption_toDouble(quint32 val,int m);

    //properties
    inline ECAR_Frame dataFrame(){return m_carData;}
    inline void setDataFrame(ECAR_Frame var){m_carData = var;}
    inline void setDataFrame(ECAR_Frame var,CAR_NUMBER_TYPE num){m_carData = var;m_dataUnit.carNum = num;}

    inline ECAR_DataUnit dataUnit(){return m_dataUnit;}
    inline void setDataUnit(ECAR_DataUnit var){m_dataUnit = var;}

    inline CAR_NUMBER_TYPE carNumber(){return m_dataUnit.carNum;}
    inline void setCarNumber(CAR_NUMBER_TYPE var){m_dataUnit.carNum = var;}

    inline bool connect(){return m_dataUnit.isConnect;}
    inline void setConnect(bool var){m_dataUnit.isConnect = var;}
    //void
    inline uint32_t make32(uint16_t hi,uint16_t lo){return ((uint32_t)hi<<16)|lo;}
    inline QString address(){return m_dataUnit.address;}
    inline void setAddress(QString var){m_dataUnit.address = var;}

    inline int sampleTime(){return m_dataUnit.sampleTime;}
    inline void setSampleTime(int var){m_dataUnit.sampleTime = var;}

    inline int speedSPT(){return m_dataUnit.speedSPT;}
    inline int forceSPT(){return m_dataUnit.forceSPT;}

    inline int timeTick(){return m_dataUnit.timeTick;}
    inline void setTimeTick(int var){m_dataUnit.timeTick = var;}

    inline int timeError(){return m_dataUnit.timeError;}
    inline void setTimeError(int var){m_dataUnit.timeError = var;}

    inline int timeSystem(){return m_dataUnit.timeSystem;}
    inline void setTimeSystem(int var){m_dataUnit.timeSystem = var;}


    inline qreal pin(){return m_dataUnit.pin;}
    inline void setPin(qreal var){m_dataUnit.pin=var;}
    inline PinCharge_TypeDef pinCharging(){return m_dataUnit.pinCharging;}
    inline void setPinCharging(PinCharge_TypeDef var){m_dataUnit.pinCharging=var;}

    inline qreal calibForce(){return m_dataUnit.calibForce;}
    inline void setCalibForce(qreal var){m_dataUnit.calibForce = var;}

    inline qreal calibDistance(){return m_dataUnit.calibDistance;}
    inline void setCalibDistance(qreal var){m_dataUnit.calibDistance=var;}

    inline int counterFrame(){return m_dataUnit.counterFrame;}
    inline void setCounterFrame(int var){m_dataUnit.counterFrame=var;}

    inline int errorFrame(){return m_dataUnit.errorFrame;}
    inline void setErrorFrame(int var){m_dataUnit.errorFrame=var;}

    inline int countPerRound(){return m_dataUnit.countPerRound;}
    inline void setCountPerRound(int var){m_dataUnit.countPerRound=var;}

    inline int timeShutdown(){return m_dataUnit.timeShutdown;}
    inline void setTimeShutdown(int var){m_dataUnit.timeShutdown=var;}
    inline int timeShutdownCount(){return m_dataUnit.timeShutdownCount;}
    inline void setTimeShutdownCount(int var){m_dataUnit.timeShutdownCount=var;}

    inline qreal axisX(){return m_dataUnit.axisX;}
    inline void setAxisX(qreal var){m_dataUnit.axisX=var;}
    inline UnitType axisXUnit(){return m_dataUnit.axisXUnit;}
    inline PrecisionType axisXPrecision(){return m_dataUnit.axisXPrecision;}
    inline void setAxisXPrecision(PrecisionType var){m_dataUnit.axisXPrecision=var;}
    inline QList<PrecisionType> axisXPrecisions(){return m_dataUnit.axisXPrecisions;}
    inline void setAxisXPrecisions(QList<PrecisionType> var){m_dataUnit.axisXPrecisions=var;}


    inline qreal axisY(){return m_dataUnit.axisY;}
    inline void setAxisY(qreal var){m_dataUnit.axisY=var;}
    inline UnitType axisYUnit(){return m_dataUnit.axisYUnit;}
    inline PrecisionType axisYPrecision(){return m_dataUnit.axisYPrecision;}
    inline void setAxisYPrecision(PrecisionType var){m_dataUnit.axisYPrecision=var;}
    inline QList<PrecisionType> axisYPrecisions(){return m_dataUnit.axisYPrecisions;}
    inline void setAxisYPrecisions(QList<PrecisionType> var){m_dataUnit.axisYPrecisions=var;}

    inline qreal axisZ(){return m_dataUnit.axisZ;}
    inline void setAxisZ(qreal var){m_dataUnit.axisZ=var;}
    inline UnitType axisZUnit(){return m_dataUnit.axisZUnit;}
    inline PrecisionType axisZPrecision(){return m_dataUnit.axisZPrecision;}
    inline void setAxisZPrecision(PrecisionType var){m_dataUnit.axisZPrecision=var;}
    inline QList<PrecisionType> axisZPrecisions(){return m_dataUnit.axisZPrecisions;}
    inline void setAxisZPrecisions(QList<PrecisionType> var){m_dataUnit.axisZPrecisions=var;}

    inline qreal timeLine(){return m_dataUnit.timeLine;}
    inline void setTimeLine(qreal var){m_dataUnit.timeLine = var;}


    inline UnitType timeUnit(){return m_dataUnit.timeUnit;}
    inline void setTimeUnit(UnitType var){m_dataUnit.timeUnit=var;}
    inline QList<UnitType> timeUnits(){return m_dataUnit.timeUnits;}
    inline void setTimeUnits(QList<UnitType> var){m_dataUnit.timeUnits=var;}
    inline PrecisionType timePrecision(){return m_dataUnit.timePrecision;}
    inline void setTimePrecision(PrecisionType var){m_dataUnit.timePrecision=var;}
    inline QList<PrecisionType> timePrecisions(){return m_dataUnit.timePrecisions;}
    inline void setTimePrecisions(QList<PrecisionType> var){m_dataUnit.timePrecisions=var;}

    inline qreal force(){return m_dataUnit.force;}
    inline void setForce(qreal var){m_dataUnit.force = var;}
    inline UnitType forceUnit(){return m_dataUnit.forceUnit;}
    inline void setForceUnit(UnitType var){m_dataUnit.forceUnit=var;}
    inline QList<UnitType> forceUnits(){return m_dataUnit.forceUnits;}
    inline void setForceUnits(QList<UnitType> var){m_dataUnit.forceUnits=var;}
    inline PrecisionType forcePrecision(){return m_dataUnit.forcePrecision;}
    inline void setForcePrecision(PrecisionType var){m_dataUnit.forcePrecision=var;}
    inline QList<PrecisionType> forcePrecisions(){return m_dataUnit.forcePrecisions;}
    inline void setForcePrecisions(QList<PrecisionType> var){m_dataUnit.forcePrecisions=var;}

    //UnitType
    //ResolutionType

    inline qreal distance(){return m_dataUnit.distance;}
    inline void setDistance(qreal var){m_dataUnit.distance=var;}
    inline UnitType distanceUnit(){return m_dataUnit.distanceUnit;}
    inline void setDistanceUnit(UnitType var){m_dataUnit.distanceUnit=var;}
    inline QList<UnitType> distanceUnits(){return m_dataUnit.distanceUnits;}
    inline void setDistanceUnits(QList<UnitType> var){m_dataUnit.distanceUnits=var;}
    inline PrecisionType distancePrecision(){return m_dataUnit.distancePrecision;}
    inline void setDistancePrecision(PrecisionType var){m_dataUnit.distancePrecision=var;}
    inline QList<PrecisionType> distancePrecisions(){return m_dataUnit.distancePrecisions;}
    inline void setDistancePrecisions(QList<PrecisionType> var){m_dataUnit.distancePrecisions=var;}

    inline qreal speedSampleTime(){return m_dataUnit.speedSPT;}
    inline void setSpeedSampleTime(qreal var){m_dataUnit.speedSPT=var;}
    inline qreal speed(){return m_dataUnit.speed;}
    inline void setSpeed(qreal var){m_dataUnit.speed=var;}
    inline UnitType speedUnit(){return m_dataUnit.speedUnit;}
    inline void setSpeedUnit(UnitType var){m_dataUnit.speedUnit=var;}
    inline QList<UnitType> speedUnits(){return m_dataUnit.speedUnits;}
    inline void setSpeedUnits(QList<UnitType> var){m_dataUnit.speedUnits=var;}
    inline PrecisionType speedPrecision(){return m_dataUnit.speedPrecision;}
    inline void setSpeedPrecision(PrecisionType var){m_dataUnit.speedPrecision=var;}
    inline QList<PrecisionType> speedPrecisions(){return m_dataUnit.speedPrecisions;}
    inline void setSpeedPrecisions(QList<PrecisionType> var){m_dataUnit.speedPrecisions=var;}

    inline qreal acceleration(){return m_dataUnit.acceleration;}
    inline void setAcceleration(qreal var){m_dataUnit.acceleration=var;}
    inline UnitType accelerationUnit(){return m_dataUnit.accelerationUnit;}
    inline void setAccelerationUnit(UnitType var){m_dataUnit.accelerationUnit=var;}
    inline QList<UnitType> accelerationUnits(){return m_dataUnit.accelerationUnits;}
    inline void setAccelerationUnits(QList<UnitType> var){m_dataUnit.accelerationUnits=var;}
    inline PrecisionType accelerationPrecision(){return m_dataUnit.accelerationPrecision;}
    inline void setAccelerationPrecision(PrecisionType var){m_dataUnit.accelerationPrecision=var;}
    inline QList<PrecisionType> accelerationPrecisions(){return m_dataUnit.accelerationPrecisions;}
    inline void setAccelerationPrecisions(QList<PrecisionType> var){m_dataUnit.accelerationPrecisions=var;}

    inline bool vector(){return m_dataUnit.isVector;}
    inline void setVector(bool var){m_dataUnit.isVector=var;}

    inline bool sign(){return m_dataUnit.isSign;}
    inline void setSign(bool var){m_dataUnit.isSign=var;}

    //pracetice
    inline EConditionUnit::ConditionUnit_TypeDef conditionStart(){return m_conditionStart;}
    inline void setConditionStart(EConditionUnit::ConditionUnit_TypeDef var){m_conditionStart=var;}
    inline EConditionUnit::ConditionUnit_TypeDef conditionStop(){return m_conditionStop;}
    inline void setConditionStop(EConditionUnit::ConditionUnit_TypeDef var){m_conditionStop=var;}

    //function
    void updateFinish();
signals:

private:
    ECAR_Frame m_carData;
    ECAR_DataUnit m_dataUnit;
    EConditionUnit::ConditionUnit_TypeDef m_conditionStart;
    EConditionUnit::ConditionUnit_TypeDef m_conditionStop;

    uint16_t elapsed(uint16_t now,uint16_t last);
    uint8_t elapsed8(uint8_t now,uint8_t last);
    UnitType getUnit(QString name, QString symbol, double factor,double offset);
    PrecisionType getPrecision(QString name, double factor);
    qreal convertUnit(qreal value,UnitType unit);
    qreal getPrecision(qreal value,PrecisionType pre);

    void initUnit();

    void checkErrorFrame();
    qreal getTimeError();
    void calForce();
    void calDistance();
    void calSpeed(qreal s0,qreal s1);
    void calAcceleration(qreal v0,qreal v1,qreal time);
    void calAxisX();
    void calAxisY();
    void calAxisZ();
    void calPin();

    //filter
    void lowPassFilter(double *output,double input, double dt, double rc);

};

#endif // ECARDATAUNIT_H
