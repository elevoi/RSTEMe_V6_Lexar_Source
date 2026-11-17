#include "emanagemodule.h"

EManageModule::EManageModule(QObject *parent)
    : QObject{parent}
{

}

EManageModule::~EManageModule()
{
this->close();
}

void EManageModule::setSelectDevice(EDevice *dev)
{
    m_device = dev;
    QObject::connect(m_device,&EDevice::finished,this,&EManageModule::on_finished);
    emit this->replySelectDevice(dev->deviceInfo(),m_device);
    this->selectDevice(dev);
}

void EManageModule::on_finished()
{
//this->close();
    if(m_frmModulePracticeCar->device()==m_device){m_frmModulePracticeCar->deleteLater();m_frmModulePracticeCar = nullptr;}
}

void EManageModule::on_replySelectDeviceInfo(EDeviceInfo dev)
{
emit this->replySelectDeviceInfo(dev);
}

void EManageModule::close()
{
    //practice car
    if(m_frmModulePracticeCar){m_frmModulePracticeCar->deleteLater();m_frmModulePracticeCar = nullptr;}
}

void EManageModule::selectDevice(EDevice *edev)
{
    //Group:Sensor 0xABC, A = group of sensor, BC = type of sensor
    switch(edev->deviceInfo().serial(EDeviceInfo::SERIAL_WINDOW)){
    //Display
    case 0x203:
        if(m_frmModulePracticeCar){m_frmModulePracticeCar->deleteLater();m_frmModulePracticeCar = nullptr;}
        m_frmModulePracticeCar = new FrmModulePracticeCar();
        m_frmModulePracticeCar->addDevice(edev);
        m_frmModulePracticeCar->setWindowTitle(edev->deviceInfo().name());
        m_frmModulePracticeCar->setWindowIcon(QIcon(edev->deviceInfo().icon()));
        m_frmModulePracticeCar->show();
        m_frmModulePracticeCar->activateWindow();
        break;
    }
}
