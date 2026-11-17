#include "ecarfilecondition.h"
#include <QDateTime>

ECarFileCondition::ECarFileCondition()
{

}

bool ECarFileCondition::saveAsFile(FDataCondition_TypeDef cond)
{
    m_condition = cond;
return this->writeAsFile();
}

bool ECarFileCondition::saveFile(FDataCondition_TypeDef cond)
{
    m_condition = cond;
    if(m_condition.path=="")return this->writeAsFile();
    return this->writeFile();
}

bool ECarFileCondition::openFile()
{
return this->readFile();
}

ECarFileCondition::FDataCondition_TypeDef ECarFileCondition::openFile(bool *ok)
{
    *ok = this->readFile();
    return m_condition;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////condition file/////////////////////////////////////
QDataStream & operator<<(QDataStream & in, const EConditionUnit::ConditionData & cd)
{
    in<<cd.compare<<cd.value;
    return in;
}
QDataStream & operator<<(QDataStream & in, const EConditionUnit::ConditionUnit_TypeDef & pc)
{
    in<<pc.time<<pc.distance<<pc.speed<<pc.acceleration<<pc.axisX<<pc.axisY<<pc.axisZ;
    return in;
}
QDataStream & operator<<(QDataStream & in, const ECarFileCondition::FDataCondition_TypeDef & fd)
{
    in<<fd.name<<fd.path<<fd.crc<<fd.car1.conditionStart<<fd.car1.conditionStop<<fd.car2.conditionStart<<fd.car2.conditionStop;
    return in;
}

QDataStream & operator >> (QDataStream & out,  EConditionUnit::ConditionData & cd)
{
    out>>cd.compare>>cd.value;
    return out;
}
QDataStream & operator>>(QDataStream & out,  EConditionUnit::ConditionUnit_TypeDef & pc)
{
    out>>pc.time>>pc.distance>>pc.speed>>pc.acceleration>>pc.axisX>>pc.axisY>>pc.axisZ;
    return out;
}

QDataStream & operator>>(QDataStream & out,  ECarFileCondition::FDataCondition_TypeDef & fd)
{
    out>>fd.name>>fd.path>>fd.crc>>fd.car1.conditionStart>>fd.car1.conditionStop>>fd.car2.conditionStart>>fd.car2.conditionStop;
    return out;
}

bool ECarFileCondition::writeFile()
{
    //Show dialog file, get path of file
    QString m_fileName = m_condition.path;
    qDebug()<<m_fileName;
    if(m_fileName.isEmpty())return false;
    //Open file
    QFile fileDev(m_fileName);
    if(!fileDev.open(QIODevice::WriteOnly)){
        QMessageBox::information(nullptr,QObject::tr("Can't to open file!"),fileDev.errorString());
        return false;
    }
    QDataStream _in(&fileDev);
    _in<<m_condition;
    fileDev.close();
    return true;
}

bool ECarFileCondition::writeAsFile()
{
    QString _devName = "ecarCondition";
    //Show dialog file, get path of file
    QString m_fileName = QFileDialog::getSaveFileName(nullptr,QObject::tr("Save File"),QCoreApplication::applicationDirPath()+"/practice/CarCondition/"+_devName,QObject::tr("STEMe files (*.eccond)"));
    if(m_fileName.isEmpty())return false;
    //Open file
    if(!m_fileName.contains(".eccond",Qt::CaseSensitive))m_fileName += ".eccond";
    QFile fileDev(m_fileName);
    if(!fileDev.open(QIODevice::WriteOnly)){
        QMessageBox::information(nullptr,QObject::tr("Can't to open file!"),fileDev.errorString());
        return false;
    }
    QDataStream _in(&fileDev);
    _in<<m_condition;
    fileDev.close();
    return true;
}

bool ECarFileCondition::readFile()
{
    QString m_fileName = QFileDialog::getOpenFileName(nullptr,QObject::tr("Open File"),QCoreApplication::applicationDirPath()+"/practice/CarCondition/",QObject::tr("STEMe files (*.eccond)"));
    if(m_fileName.isEmpty())return false;

    //Open file
    QFile fileDev(m_fileName);
    if(!fileDev.open(QIODevice::ReadOnly | QIODevice::Text)){
        QMessageBox::information(nullptr,QObject::tr("Can't to open file!"),fileDev.errorString());
        return false;
    }
    QDataStream _out(&fileDev);
    _out>>m_condition;
    fileDev.close();
    if(m_condition.crc==1243568790){
        m_condition.path = m_fileName;
        return true;
    }
    return false;
}
