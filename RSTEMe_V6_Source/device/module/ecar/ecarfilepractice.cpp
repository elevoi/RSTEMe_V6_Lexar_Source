#include "ecarfilepractice.h"

ECarFilePractice::ECarFilePractice()
{

}

bool ECarFilePractice::saveFile(FDataPractice_TypeDef prc)
{
    return this->writeFile(prc);
}

ECarFilePractice::FDataPractice_TypeDef ECarFilePractice::openFile(bool *ok)
{
ECarFilePractice::FDataPractice_TypeDef fdata;
*ok = this->readFile(&fdata);
return fdata;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////DataStream file/////////////////////////////////////

/////////////splines
QDataStream & operator<<(QDataStream & in, const ECarFilePractice::FSpline_TypeDef & dt)
{
    auto _size = dt.points.count();
    in<<dt.enable<<QString::number(dt.axis_max,'f',6).toDouble()<<QString::number(dt.axis_min,'f',6).toDouble()<<_size;
    for(int i=0;i<_size;i++){
        in<<QString::number(dt.points.at(i).x(),'f',6).toDouble()<<QString::number(dt.points.at(i).y(),'f',6).toDouble();
    }
    return in;
}
QDataStream & operator >> (QDataStream & out,  ECarFilePractice::FSpline_TypeDef & dt)
{
    dt.points.clear();
    out>>dt.enable>>dt.axis_max>>dt.axis_min>>dt.size;
    for(int i=0;i<dt.size;i++){
        double _x,_y;
        out>>_x>>_y;
        dt.points.append(QPointF(_x,_y));
    }
    return out;
}

///////////DataPractice
QDataStream & operator<<(QDataStream & in, const ECarFilePractice::FDataPractice_TypeDef & dt)
{
    int _size = dt.splines.count();
    in<<dt.axisType<<dt.axisX_min<<dt.axisX_max<<dt.axisY_min<<dt.axisY_max<<dt.timeOut<<dt.crc<<_size;
    for(int i=0;i<_size;i++){
        in<<dt.splines.at(i);
    }
    return in;
}
QDataStream & operator>>(QDataStream & out,  ECarFilePractice::FDataPractice_TypeDef & dt)
{
    int _size = 0;
    dt.splines.clear();
    out>>dt.axisType>>dt.axisX_min>>dt.axisX_max>>dt.axisY_min>>dt.axisY_max>>dt.timeOut>>dt.crc>>_size;
    for(int i=0;i<_size;i++){
        ECarFilePractice::FSpline_TypeDef _sp;
        out>>_sp;
        dt.splines.append(_sp);
    }
    return out;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////Read/Write file/////////////////////////////////////
bool ECarFilePractice::writeFile(const ECarFilePractice::FDataPractice_TypeDef fdata)
{
    QString _devName = "ecarPractice";
    //Show dialog file, get path of file
    QString m_fileName = QFileDialog::getSaveFileName(nullptr,QObject::tr("Save File"),QCoreApplication::applicationDirPath()+"/practice/CarPractice/"+_devName,QObject::tr("STEMe files (*.ecprc)"));
    if(m_fileName.isEmpty())return false;
    //Open file
    if(!m_fileName.contains(".ecprc",Qt::CaseSensitive))m_fileName += ".ecprc";
    QFile fileDev(m_fileName);
    if(!fileDev.open(QIODevice::WriteOnly)){
        QMessageBox::information(nullptr,QObject::tr("Can't to open file!"),fileDev.errorString());
        return false;
    }
    QDataStream _in(&fileDev);
    _in<<fdata;
    fileDev.close();
    return true;
}

bool ECarFilePractice::readFile(ECarFilePractice::FDataPractice_TypeDef *fdata)
{
    QString m_fileName = QFileDialog::getOpenFileName(nullptr,QObject::tr("Open File"),QCoreApplication::applicationDirPath()+"/practice/CarPractice/",QObject::tr("STEMe files (*.ecprc)"));
    if(m_fileName.isEmpty())return false;

    //Open file
    QFile fileDev(m_fileName);
    if(!fileDev.open(QIODevice::ReadOnly | QIODevice::Text)){
        QMessageBox::information(nullptr,QObject::tr("Can't to open file!"),fileDev.errorString());
        return false;
    }
    QDataStream _out(&fileDev);
    _out>>*fdata;
    fileDev.close();
    if(fdata->crc==1243568790)return true;
    return false;
}
