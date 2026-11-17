#ifndef ECARFILECONDITION_H
#define ECARFILECONDITION_H
#include <QList>
#include <QFile>
#include <QSettings>
#include <QFileDialog>
#include <QCoreApplication>
#include <QMessageBox>
#include <QDebug>
#include <device/module/ecar/ecardataunit.h>
#include <QDataStream>

class ECarFileCondition
{
public:
    ECarFileCondition();

    typedef struct __FCAR_CONDITION_{
        EConditionUnit::ConditionUnit_TypeDef conditionStart;
        EConditionUnit::ConditionUnit_TypeDef conditionStop;
    }FCarCondition_TypeDef;
    typedef struct __FDATA_CONDITION_{
        QString name="";
        ECarDataUnit::ZeroData_TypeDef zero;
        FCarCondition_TypeDef car1;
        FCarCondition_TypeDef car2;
        QString path="";
        uint32_t crc = 1243568790;
    }FDataCondition_TypeDef;

    //properties
    inline FDataCondition_TypeDef fileCondition(){return m_condition;}
    inline void setFileCondition(FDataCondition_TypeDef  var){m_condition = var;}

    bool saveAsFile(FDataCondition_TypeDef cond);
    bool saveFile(FDataCondition_TypeDef cond);
    bool saveFile();
    bool openFile();
    FDataCondition_TypeDef openFile(bool *ok);
private:

    FDataCondition_TypeDef m_condition;
    bool writeFile();
    bool writeAsFile();
    bool readFile();
};

#endif // ECARFILECONDITION_H
