#include "widmodulecar.h"
#include "ui_widmodulecar.h"
#include "device/module/ecar/emod203parameter.h"

WidModuleCar::WidModuleCar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidModuleCar)
{
    ui->setupUi(this);
}

WidModuleCar::~WidModuleCar()
{
    delete ui;
}

void WidModuleCar::setModule(EModule *dev)
{
    m_emodule = dev;
}

void WidModuleCar::updateCar(ECarDataUnit *var,ECarDataUnit::CAR_NUMBER_TYPE num)
{
    if(var==nullptr)return;
    m_ecarUnit = var;
    //number of car
    m_ecarNum = num;
    if(num==ECarDataUnit::CAR_NUMBER_TYPE::CAR_NUM_01){
        ui->toolButton_number->setText("01");
        ui->label_CarName->setText("XE-01");
    }
    else {
        ui->toolButton_number->setText("02");
        ui->label_CarName->setText("XE-02");
    }
    this->updateSetup();
    this->updateDisplay();
    if(m_ecarSetup)m_ecarSetup->updateCar(m_ecarUnit,num);
}


void WidModuleCar::updateSetup()
{
if(m_updateSetupStatus)return;
m_updateSetupStatus=true;
//isVector
ui->checkBox_vector->setChecked((Qt::CheckState) m_ecarUnit->vector());
ui->checkBox_sign->setChecked((Qt::CheckState) m_ecarUnit->sign());
}

void WidModuleCar::updateDisplay()
{
if(!m_ecarUnit->connect()){
    ui->toolButton_seOffCar->setStyleSheet("QToolButton{\
                                           color: rgb(170, 0, 0);\
                                           background-color: rgb(200, 200, 200);\
                                           border: none;\
                                           border-style: outset;\
                                           border-width: 0px;\
                                           border-radius: 6px;\
                                           }\
                                           QToolButton:hover{\
                                           background-color: rgb(120, 210, 240);\
                                           color: rgb(255, 255, 255);\
                                           }");
    ui->toolButton_seOffCar->setText("Xe không kết nối!");
    ui->toolButton_seOffCar->setEnabled(false);
    return;
}else{
    ui->toolButton_seOffCar->setStyleSheet("QToolButton{\
                                           color: rgb(255, 255, 255);\
                                           background-color: rgb(50, 150, 200);\
                                           border: none;\
                                           border-style: outset;\
                                           border-width: 0px;\
                                           border-radius: 6px;\
                                           }\
                                           QToolButton:hover{\
                                           background-color: rgb(120, 210, 240);\
                                           color: rgb(255, 255, 255);\
                                           }");
    ui->toolButton_seOffCar->setText("Tắt xe");
    ui->toolButton_seOffCar->setEnabled(true);
}
//force
ui->label_force->setText(QString::number(m_ecarUnit->force()));
ui->label_forceUnit->setText(m_ecarUnit->forceUnit().symbol);
//distance
ui->label_distance->setText(QString::number(m_ecarUnit->distance()));
ui->label_distanceUnit->setText(m_ecarUnit->distanceUnit().symbol);
//speed
ui->label_speed->setText(QString::number(m_ecarUnit->speed()));
ui->label_speedUnit->setText(m_ecarUnit->speedUnit().symbol);
//acceleration
ui->label_acceleration->setText(QString::number(m_ecarUnit->acceleration()));
ui->label_accelerationUnit->setText(m_ecarUnit->accelerationUnit().symbol);

//degree
ui->label_axisX_degree->setText(QString::number(m_ecarUnit->axisX()));
ui->label_axisY_degree->setText(QString::number(m_ecarUnit->axisY()));
ui->label_axisZ_degree->setText(QString::number(m_ecarUnit->axisZ()));
//timeShutdownCount
ui->label_timeShutdownCount->setText(QString::number(m_ecarUnit->timeShutdownCount()));
//pin
static int _pin_blink=0;
switch(m_ecarUnit->pinCharging()){
    case ECarDataUnit::PIN_DISCHARGE:ui->label_pin->setText(QString::number(m_ecarUnit->pin()));
        break;
    case ECarDataUnit::PIN_CHARGING:
        if(_pin_blink==0)ui->label_pin->setText("đang sạc.  ");
        if(_pin_blink==1)ui->label_pin->setText("đang sạc.. ");
        if(_pin_blink==2)ui->label_pin->setText("đang sạc...");
        if(++_pin_blink>2)_pin_blink=0;
        break;
    case ECarDataUnit::PIN_FULL:
        if(_pin_blink==0)ui->label_pin->setText("đầy pin ");
        if(_pin_blink==1)ui->label_pin->setText("đầy pin!");
        if(++_pin_blink>1)_pin_blink=0;
        break;

}
//address
ui->label_CarAddress->setText(m_ecarUnit->address());
}

void WidModuleCar::on_toolButton_setup_clicked()
{
    if(m_ecarSetup){
        m_ecarSetup->deleteLater();
        m_ecarSetup = nullptr;
    }
    m_ecarSetup = new FrmModuleCarSetup(this);
    m_ecarSetup->setWindowTitle(this->windowTitle());
    m_ecarSetup->setWindowIcon(this->windowIcon());
    if(m_emodule)m_ecarSetup->setModule(m_emodule);
    m_ecarSetup->updateCar(m_ecarUnit,m_ecarNum);
    m_ecarSetup->show();
}

void WidModuleCar::setControl(uint8_t cmd_car1,uint8_t cmd_car2, uint32_t value_car1, uint32_t value_car2)
{
if(!m_emodule)return;
QVector<uint16_t> _values;
_values.append((value_car1>>16)&0xFFFF);
_values.append(value_car1&0xFFFF);
_values.append((value_car2>>16)&0xFFFF);
_values.append(value_car2&0xFFFF);
_values.append(((uint16_t)cmd_car1<<8)|cmd_car2);
m_emodule->setRequestWrite(EMod203Parameter::CONTROL_HI_1,_values);
}

void WidModuleCar::setCar(uint8_t cmd, uint32_t value)
{
if(m_ecarNum==ECarDataUnit::CAR_NUMBER_TYPE::CAR_NUM_01)this->setControl(cmd,0,value,0);
    else this->setControl(0,cmd,0,value);
}

void WidModuleCar::on_toolButton_seOffCar_clicked()
{
    this->setCar(ECarDataUnit::CTRL_SHUTDOWN_CAR,0);
}




void WidModuleCar::on_checkBox_vector_toggled(bool checked)
{
    if(!m_ecarUnit)return;
    m_ecarUnit->setVector(checked);
}


void WidModuleCar::on_checkBox_sign_toggled(bool checked)
{
    if(!m_ecarUnit)return;
    m_ecarUnit->setSign(checked);
}

