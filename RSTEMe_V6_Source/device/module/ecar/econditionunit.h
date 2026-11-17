#ifndef ECONDITIONUNIT_H
#define ECONDITIONUNIT_H

#include <QVariant>

class EConditionUnit
{
public:
    EConditionUnit();

    typedef enum {
        COND_None,
        COND_Equally,
        COND_Higher,
        COND_Lower
    }CompareTypeDef;
    typedef struct __CONDITION_TYPE_{
        qreal value=0;
        CompareTypeDef compare= COND_None;
    }ConditionData;
    typedef enum{
        CDT_START,
        CDT_STOP
    }ConditionType;

    typedef struct {
        ConditionData time;
        ConditionData distance;
        ConditionData speed;
        ConditionData acceleration;
        ConditionData force;
        ConditionData axisX;
        ConditionData axisY;
        ConditionData axisZ;
    }ConditionUnit_TypeDef;


    //static function
    static QString getCompareText(CompareTypeDef cmp);
    static bool getCompare(qreal val, ConditionData cond);
private:

};

#endif // ECONDITIONUNIT_H
