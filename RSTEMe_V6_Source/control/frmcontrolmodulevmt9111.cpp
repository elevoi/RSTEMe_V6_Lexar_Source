#include "frmcontrolmodulevmt9111.h"
#include "ui_frmcontrolmodulevmt9111.h"

FrmControlModuleVMT9111::FrmControlModuleVMT9111(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrmControlModuleVMT9111)
{
    ui->setupUi(this);
    auto _move = this->geometry();
    auto _x = (1280-_move.size().width())/2;
    auto _y = (770-_move.size().height())/2;
    _move.setX(_x);
    _move.setY(_y);
    this->setGeometry(_move);
}

FrmControlModuleVMT9111::~FrmControlModuleVMT9111()
{
    delete ui;
}


void FrmControlModuleVMT9111::setDevice(EDevice *dev)
{
    m_edevice = dev;
    this->setWindowTitle(dev->deviceInfo().name() + "(@" + dev->deviceInfo().serialHex() + ")");
    m_esensor = new ESensor(this,m_edevice);
    m_esensor->start();
    //init Display
    this->init();
    QObject::connect(m_esensor,&ESensor::newData,this,&FrmControlModuleVMT9111::on_newData);
}

void FrmControlModuleVMT9111::setSensor(ESensor *sen)
{
    if(m_esensor){
        QObject::disconnect(m_esensor,&ESensor::newData,this,&FrmControlModuleVMT9111::on_newData);
        m_esensor->deleteLater();
        m_esensor = nullptr;
    }
    m_esensor = sen;
    m_edevice = sen->device();
    this->setWindowTitle(m_edevice->deviceInfo().name() + "(@" + m_edevice->deviceInfo().serialHex() + ")");
    //init Display
    this->init();
    QObject::connect(m_esensor,&ESensor::newData,this,&FrmControlModuleVMT9111::on_newData);
}

void FrmControlModuleVMT9111::on_newData(int)
{
    this->setValue();
}


void FrmControlModuleVMT9111::init()
{
    if(!m_esensor)return;
    m_para = m_esensor->parameter();
    //name
    ui->label_Name->setText(m_esensor->device()->deviceInfo().name());

    m_initStatus = true;
}

void FrmControlModuleVMT9111::setValue()
{
    if(!m_esensor)return;
    //value
    m_para = m_esensor->parameter();
}

void FrmControlModuleVMT9111::on_toolButton_keyBack_clicked()
{
    if(!m_esensor)return;
    m_esensor->setGpio(MCC_BACK,0);
}


void FrmControlModuleVMT9111::on_toolButton_keyStop_clicked()
{
    if(!m_esensor)return;
    m_esensor->setGpio(MCC_STOP,0);
}


void FrmControlModuleVMT9111::on_toolButton_keyForward_clicked()
{
    if(!m_esensor)return;
    m_esensor->setGpio(MCC_NEXT,0);
}


void FrmControlModuleVMT9111::on_pushButton_cancel_clicked()
{
    this->close();
}

