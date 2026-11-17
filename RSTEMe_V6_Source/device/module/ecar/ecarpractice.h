#ifndef ECARPRACTICE_H
#define ECARPRACTICE_H

#include <QObject>
#include "device/module/ecar/ecardataunit.h"
#include "device/module/ecar/econditionunit.h"

class ECarPractice : public QObject
{
    Q_OBJECT
public:
    explicit ECarPractice(QObject *parent = nullptr);
    typedef struct __ECAR_SPLINES{
        //line
        QtCharts::QLineSeries *distance = nullptr;
        QtCharts::QLineSeries *speed = nullptr;
        QtCharts::QLineSeries *acceleration = nullptr;
        QtCharts::QLineSeries *force = nullptr;
        QtCharts::QLineSeries *axisX = nullptr;
        QtCharts::QLineSeries *axisY = nullptr;
        QtCharts::QLineSeries *axisZ = nullptr;
    }ECAR_Splines;

    typedef struct __ECAR_DATA{
        bool first = false;     //first update
        bool updateTimeLine=false;
        bool isConditionStart=false;
        bool isConditionStop=false;
        qreal time=0;
        qreal timeStart=0;
        qreal timeStop=0;
        qreal timeLine=0;
        qreal timeConditionStart=0;

        ECAR_Splines car01_splines;
        ECAR_Splines car02_splines;
    }ECAR_PracticeUnit;

    //properties
    inline ECAR_PracticeUnit practiceUnit(){return m_practiceUnit;}
    inline void setPracticeUnit(ECAR_PracticeUnit var){m_practiceUnit=var;}
    //updateTimeLine
    inline bool updateTimeLine(){return m_practiceUnit.updateTimeLine;}
    void setUpdateTimeLine(bool var);
    //Time start/stop
    inline qreal time(){return m_practiceUnit.time;}
    inline void setTime(qreal var){m_practiceUnit.time = var;}

    inline qreal timeStart(){return m_practiceUnit.timeStart;}
    inline void setTimeStart(qreal var){m_practiceUnit.timeStart = var;}

    inline qreal timeStop(){return m_practiceUnit.timeStop;}
    inline void setTimeStop(qreal var){m_practiceUnit.timeStop = var;}

    inline qreal timeLine(){return m_practiceUnit.timeLine;}
    inline void setTimeLine(qreal var){m_practiceUnit.timeLine=var;}

    void updateCar(ECarDataUnit *car1,ECarDataUnit *car2);
    void clear();
    void setPen(int width);
    void setNoCondition(qreal time);

signals:
    void replySetPlay(bool play,EConditionUnit::ConditionData cond,QString error);
private:
    ECAR_PracticeUnit m_practiceUnit;
    ECarDataUnit *m_ecarUnit1=nullptr;
    ECarDataUnit *m_ecarUnit2=nullptr;

    uint16_t elapsed(uint16_t now,uint16_t last);

    void clearSpline(ECAR_Splines *spline);

    void setPen(QtCharts::QLineSeries *line,int width);
    void setPen(ECAR_Splines *spline,int width);
    void initSpline(ECAR_Splines *spline);
    void updateSplineDistance(ECarDataUnit::ECAR_DataUnit *unit,ECAR_Splines *spline);
    void updateSplineSpeed(ECarDataUnit::ECAR_DataUnit *unit,ECAR_Splines *spline);
    void updateSplineAcceleration(ECarDataUnit::ECAR_DataUnit *unit,ECAR_Splines *spline);
    void updateSplineForce(ECarDataUnit::ECAR_DataUnit *unit,ECAR_Splines *spline);
    void updateSplines(ECarDataUnit::ECAR_DataUnit *unit,ECAR_Splines *spline);

    void calTimeLine(ECarDataUnit *car01);
    void findCondition(ECarDataUnit *car01,ECarDataUnit *car02);
    void findConditionStart(ECarDataUnit *car01,ECarDataUnit *car02);
    void findConditionStop(ECarDataUnit *car01,ECarDataUnit *car02);
    qreal findTimePoint(ECarDataUnit *car,EConditionUnit::ConditionUnit_TypeDef  condition,QString *str,EConditionUnit::ConditionData *cond);
    //file
    //Condition practice
    qreal checkErrorTimeLine(qreal time,qreal timeLast,qreal sampleTime);
    bool checkCondition(qreal val,EConditionUnit::ConditionData cond);

    //filter
    void lowPassFilter(double *output,double input, double dt, double rc);
};

#endif // ECARPRACTICE_H
