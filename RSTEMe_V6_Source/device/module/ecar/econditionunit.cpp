#include "econditionunit.h"

EConditionUnit::EConditionUnit()
{

}
QString EConditionUnit::getCompareText(CompareTypeDef cmp)
{
switch(cmp){
case COND_None:return "Không có điều kiện";
case COND_Equally:return "bằng";
case COND_Higher:return "lớn hơn";
case COND_Lower:return "nhỏ hơn";
}
return "";
}

bool EConditionUnit::getCompare(qreal val, ConditionData cond)
{
auto _cmp = cond.compare;
switch(_cmp){
case COND_None:
    break;
case COND_Equally:return (val==cond.value)?true:false;
case COND_Higher:return (val>cond.value)?true:false;
case COND_Lower:return (val<cond.value)?true:false;
}
return false;
}
