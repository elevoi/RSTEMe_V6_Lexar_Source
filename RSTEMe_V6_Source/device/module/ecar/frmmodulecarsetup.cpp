#include "frmmodulecarsetup.h"
#include "ui_frmmodulecarsetup.h"
#include "device/module/ecar/emod203parameter.h"
#include <QMessageBox>

FrmModuleCarSetup::FrmModuleCarSetup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrmModuleCarSetup)
{
    ui->setupUi(this);
    auto _move = this->geometry();
    auto _x = (1280-_move.size().width())/2;
    auto _y = (800-_move.size().height())/2;
    _move.setX(_x);
    _move.setY(_y);
    this->setGeometry(_move);
    this->updateUnits();
}

FrmModuleCarSetup::~FrmModuleCarSetup()
{
    delete ui;
}
void FrmModuleCarSetup::setModule(EModule *dev)
{
    m_emodule = dev;
}

void FrmModuleCarSetup::setCar(ECarDataUnit *var, ECarDataUnit::CAR_NUMBER_TYPE num)
{
    m_ecarUnit = var;
    m_ecarNum = num;
}
void FrmModuleCarSetup::updateUnits(QComboBox *cbx,QList<ECarDataUnit::UnitType> unit){
    cbx->clear();
    for(int i=0;i<unit.count();i++){
        cbx->addItem(unit.at(i).name+" "+unit.at(i).symbol);
    }
    QObject::connect(cbx,&QComboBox::currentTextChanged,this,[unit,cbx,this](){
        if(!m_ecarUnit)return;
        ECarDataUnit::UnitType _unit;
        this->setIndex(unit,&_unit,cbx->currentIndex());
        if (cbx->objectName()==ui->comboBox_unitDistance->objectName())m_ecarUnit->setDistanceUnit(_unit);
        if (cbx->objectName()==ui->comboBox_unitSpeed->objectName())m_ecarUnit->setSpeedUnit(_unit);
        if (cbx->objectName()==ui->comboBox_unitAcceleration->objectName())m_ecarUnit->setAccelerationUnit(_unit);
        if (cbx->objectName()==ui->comboBox_unitForce->objectName())m_ecarUnit->setForceUnit(_unit);
        });
}
void FrmModuleCarSetup::updatePrecistions(QComboBox *cbx,QList<ECarDataUnit::PrecisionType> res){
    cbx->clear();
    for(int i=0;i<res.count();i++){
        cbx->addItem(res.at(i).name);
    }
    QObject::connect(cbx,&QComboBox::currentTextChanged,this,[res,cbx,this](){
        if(!m_ecarUnit)return;
        ECarDataUnit::PrecisionType _res;
        this->setIndex(res,&_res,cbx->currentIndex());
        if (cbx->objectName()==ui->comboBox_resolutionDistance->objectName())m_ecarUnit->setDistancePrecision(_res);
        if (cbx->objectName()==ui->comboBox_resolutionSpeed->objectName())m_ecarUnit->setSpeedPrecision(_res);
        if (cbx->objectName()==ui->comboBox_resolutionAcceleration->objectName())m_ecarUnit->setAccelerationPrecision(_res);
        if (cbx->objectName()==ui->comboBox_resolutionForce->objectName())m_ecarUnit->setForcePrecision(_res);
        if (cbx->objectName()==ui->comboBox_resolutionAxisX->objectName())m_ecarUnit->setAxisXPrecision(_res);
        if (cbx->objectName()==ui->comboBox_resolutionAxisY->objectName())m_ecarUnit->setAxisXPrecision(_res);
        if (cbx->objectName()==ui->comboBox_resolutionAxisZ->objectName())m_ecarUnit->setAxisXPrecision(_res);
        });
}
void FrmModuleCarSetup::updateUnits()
{
    ECarDataUnit _ecar;
    //distance
    this->updateUnits(ui->comboBox_unitDistance,_ecar.distanceUnits());
    this->updatePrecistions(ui->comboBox_resolutionDistance,_ecar.distancePrecisions());
    //speed
    this->updateUnits(ui->comboBox_unitSpeed,_ecar.speedUnits());
    this->updatePrecistions(ui->comboBox_resolutionSpeed,_ecar.speedPrecisions());
    //Acc
    this->updateUnits(ui->comboBox_unitAcceleration,_ecar.accelerationUnits());
    this->updatePrecistions(ui->comboBox_resolutionAcceleration,_ecar.accelerationPrecisions());
    //force
    this->updateUnits(ui->comboBox_unitForce,_ecar.forceUnits());
    this->updatePrecistions(ui->comboBox_resolutionForce,_ecar.forcePrecisions());
    //Axis-X
    ui->comboBox_unitAxisX->clear();
    ui->comboBox_unitAxisX->addItem(_ecar.axisXUnit().name+" "+_ecar.axisXUnit().symbol);
    this->updatePrecistions(ui->comboBox_resolutionAxisX,_ecar.axisXPrecisions());
    //Axis-Y
    ui->comboBox_unitAxisY->clear();
    ui->comboBox_unitAxisY->addItem(_ecar.axisYUnit().name+" "+_ecar.axisYUnit().symbol);
    this->updatePrecistions(ui->comboBox_resolutionAxisY,_ecar.axisYPrecisions());
    //Axis-Z
    ui->comboBox_unitAxisZ->clear();
    ui->comboBox_unitAxisZ->addItem(_ecar.axisZUnit().name+" "+_ecar.axisZUnit().symbol);
    this->updatePrecistions(ui->comboBox_resolutionAxisZ,_ecar.axisZPrecisions());
}
void FrmModuleCarSetup::updateCar(ECarDataUnit *var,ECarDataUnit::CAR_NUMBER_TYPE num)
{

    if(!m_emodule)return;
    m_ecarUnit = var;
    m_ecarNum = num;
    //number of car
    if(num==ECarDataUnit::CAR_NUMBER_TYPE::CAR_NUM_01)ui->label_Name->setText("Cài đặt XE-01");
        else ui->label_Name->setText("Cài đặt XE-02");
    this->updateSetup();
    this->updateDisplay();
}
void FrmModuleCarSetup::updateSetup()
{
    if(m_updateSetupStatus)return;
    m_updateSetupStatus = true;
    //update unit
    this->setIndexCombobox(ui->comboBox_unitDistance,this->getIndex(m_ecarUnit->distanceUnits(),m_ecarUnit->distanceUnit()));
    this->setIndexCombobox(ui->comboBox_resolutionDistance,this->getIndex(m_ecarUnit->distancePrecisions(),m_ecarUnit->distancePrecision()));

    this->setIndexCombobox(ui->comboBox_unitSpeed,this->getIndex(m_ecarUnit->speedUnits(),m_ecarUnit->speedUnit()));
    this->setIndexCombobox(ui->comboBox_resolutionSpeed,this->getIndex(m_ecarUnit->speedPrecisions(),m_ecarUnit->speedPrecision()));

    this->setIndexCombobox(ui->comboBox_unitAcceleration,this->getIndex(m_ecarUnit->accelerationUnits(),m_ecarUnit->accelerationUnit()));
    this->setIndexCombobox(ui->comboBox_resolutionAcceleration,this->getIndex(m_ecarUnit->accelerationPrecisions(),m_ecarUnit->accelerationPrecision()));

    this->setIndexCombobox(ui->comboBox_unitForce,this->getIndex(m_ecarUnit->forceUnits(),m_ecarUnit->forceUnit()));
    this->setIndexCombobox(ui->comboBox_resolutionForce,this->getIndex(m_ecarUnit->forcePrecisions(),m_ecarUnit->forcePrecision()));

    this->setIndexCombobox(ui->comboBox_resolutionAxisX,this->getIndex(m_ecarUnit->axisXPrecisions(),m_ecarUnit->axisXPrecision()));
    this->setIndexCombobox(ui->comboBox_resolutionAxisY,this->getIndex(m_ecarUnit->axisYPrecisions(),m_ecarUnit->axisYPrecision()));
    this->setIndexCombobox(ui->comboBox_resolutionAxisZ,this->getIndex(m_ecarUnit->axisZPrecisions(),m_ecarUnit->axisZPrecision()));

    //update address
    uint8_t _add[4];
    memcpy(_add,m_ecarUnit->dataFrame().add,4);
    ui->spinBox_addressByte0->setValue(_add[0]);
    ui->spinBox_addressByte1->setValue(_add[1]);
    ui->spinBox_addressByte2->setValue(_add[2]);
    ui->spinBox_addressByte3->setValue(_add[3]);

    ui->spinBox_timeShutdown->setValue(m_ecarUnit->timeShutdown());
    ui->spinBox_countPerShutdown->setValue(m_ecarUnit->countPerRound());
    ui->spinBox_carSampleTime->setValue(m_ecarUnit->sampleTime());
}
void FrmModuleCarSetup::updateDisplay()
{
ui->label_calibDistance->setText(QString::number(m_ecarUnit->calibDistance()));
ui->label_calibDistanceUnit->setText(m_ecarUnit->distanceUnit().symbol);
ui->label_calibForce->setText(QString::number(m_ecarUnit->calibForce()));
ui->label_calibForceUnit->setText(m_ecarUnit->forceUnit().symbol);
ui->label_frameError->setText(QString::number(m_ecarUnit->errorFrame()));
}

void FrmModuleCarSetup::setControl(uint8_t cmd_car1,uint8_t cmd_car2, uint32_t value_car1, uint32_t value_car2)
{
QVector<uint16_t> _values;
_values.append((value_car1>>16)&0xFFFF);
_values.append(value_car1&0xFFFF);
_values.append((value_car2>>16)&0xFFFF);
_values.append(value_car2&0xFFFF);
_values.append(((uint16_t)cmd_car1<<8)|cmd_car2);
m_emodule->setRequestWrite(EMod203Parameter::CONTROL_HI_1,_values);
}

bool FrmModuleCarSetup::setCar(uint8_t cmd, uint32_t value)
{
if(!m_emodule)return false;
if(!m_ecarUnit)return false;
if(!m_ecarUnit->connect()){
    this->msgCarDisconnect();
    return false;
}
if(m_ecarNum==ECarDataUnit::CAR_NUMBER_TYPE::CAR_NUM_01)this->setControl(cmd,0,value,0);
    else this->setControl(0,cmd,0,value);
return true;
}

int FrmModuleCarSetup::getIndex(QList<ECarDataUnit::UnitType> list, ECarDataUnit::UnitType var)
{
for(int i=0;i<list.count();i++){
    if((var.symbol==list.at(i).symbol)&&(var.name==list.at(i).name))return i;
}
return -1;
}

int FrmModuleCarSetup::getIndex(QList<ECarDataUnit::PrecisionType> list, ECarDataUnit::PrecisionType var)
{
    for(int i=0;i<list.count();i++){
        if((var.factor==list.at(i).factor)&&(var.name==list.at(i).name))return i;
    }
    return -1;
}

void FrmModuleCarSetup::setIndex(QList<ECarDataUnit::UnitType> list, ECarDataUnit::UnitType *var, int index)
{
if(index>=list.count())return;
*var = list.at(index);
}

void FrmModuleCarSetup::setIndex(QList<ECarDataUnit::PrecisionType> list, ECarDataUnit::PrecisionType *var, int index)
{
    if(index>=list.count())return;
    *var = list.at(index);
}

void FrmModuleCarSetup::setIndexCombobox(QComboBox *cbx, int index)
{
    if(index<0)return;
    if(index>=cbx->count())return;
    cbx->setCurrentIndex(index);
}

void FrmModuleCarSetup::on_pushButton_cancel_clicked()
{
    this->close();
}


void FrmModuleCarSetup::on_toolButton_setZeroDistance_clicked()
{
this->setCar(ECarDataUnit::CTRL_ZERO_DISTANCE,0);
}


void FrmModuleCarSetup::on_toolButton_setZeroForce_clicked()
{
    this->setCar(ECarDataUnit::CTRL_ZERO_FORCE,0);
}


void FrmModuleCarSetup::on_toolButton_setTimeShutdown_clicked()
{
    this->setCar(ECarDataUnit::CTRL_TIME_SHUTDOWN,ui->spinBox_timeShutdown->value());
}

void FrmModuleCarSetup::on_toolButton_setZerAxis_clicked()
{
this->setCar(ECarDataUnit::CTRL_ZERO_AXIS,0);
}


void FrmModuleCarSetup::on_toolButton_setOffsetAxis_clicked()
{
this->setCar(ECarDataUnit::CTRL_OFFSET_AXIS,0);
}

void FrmModuleCarSetup::on_toolButton_setAddress_clicked()
{
uint8_t _add[4];
_add[0] = (uint8_t)ui->spinBox_addressByte0->value();
_add[1] = (uint8_t)ui->spinBox_addressByte1->value();
_add[2] = (uint8_t)ui->spinBox_addressByte2->value();
_add[3] = (uint8_t)ui->spinBox_addressByte3->value();
uint32_t _value;
memcpy(&_value,_add,4);
this->setCar(ECarDataUnit::CTRL_ADDRESS,_value);
}


void FrmModuleCarSetup::on_toolButton_setCalibDistance_clicked()
{
    if(!m_emodule)return;
    bool ok=false;
    QMessageBox  msg;
    msg.setStandardButtons(QMessageBox::Ok);
    msg.setWindowTitle(this->windowTitle());
    msg.setParent(nullptr);
    msg.setWindowIcon(this->windowIcon());
    qreal val = QVariant(ui->lineEdit_calibDistance->text()).toDouble(&ok);
    if(!ok||(val==0)){
        msg.setIcon(QMessageBox::Warning);
        msg.setText("Giá trị nhập vào không hợp lệ!\n Giá trị cần phải là một số thực khác 0.");
        msg.exec();
        return;
        }
    uint32_t _calib = ECarDataUnit::encode_toUInt32(val,5);
    if(this->setCar(ECarDataUnit::CTRL_CALIB_DISTANCE,_calib)){
        msg.setIcon(QMessageBox::Information);
        msg.setText("Đã thực hiện hiệu chuẩn cảm biến quãng đường.");
        msg.exec();
        }
}


void FrmModuleCarSetup::on_toolButton_setCalibForce_clicked()
{
    if(!m_emodule)return;
    bool ok=false;
    QMessageBox  msg;
    msg.setStandardButtons(QMessageBox::Ok);
    msg.setWindowTitle(this->windowTitle());
    msg.setParent(nullptr);
    msg.setWindowIcon(this->windowIcon());
    qreal val = QVariant(ui->lineEdit_calibForce->text()).toDouble(&ok);
    if(!ok||(val==0)){
        msg.setIcon(QMessageBox::Warning);
        msg.setText("Giá trị nhập vào không hợp lệ!\n Giá trị cần phải là một số thực khác 0.");
        msg.exec();
        return;
        }
    uint32_t _calib = ECarDataUnit::encode_toUInt32(val,5);
    if(this->setCar(ECarDataUnit::CTRL_CALIB_FORCE,_calib)){
        msg.setIcon(QMessageBox::Information);
        msg.setText("Đã thực hiện hiệu chuẩn cảm biến lực.");
        msg.exec();
        }
}


void FrmModuleCarSetup::on_toolButton_setCountPerShutdown_clicked()
{
    this->setCar(ECarDataUnit::CTRL_COUNT_PER_ROUND,ui->spinBox_countPerShutdown->value());
}

void FrmModuleCarSetup::msgCarDisconnect()
{
    QMessageBox  msg;
    msg.setStandardButtons(QMessageBox::Ok);
    msg.setWindowTitle(this->windowTitle());
    msg.setParent(nullptr);
    msg.setWindowIcon(this->windowIcon());
    msg.setIcon(QMessageBox::Warning);
    msg.setText("Xe không kết nối!");
    msg.exec();
}


void FrmModuleCarSetup::on_toolButton_clearFrameError_clicked()
{
if(!m_ecarUnit)return;
m_ecarUnit->setErrorFrame(0);
}


void FrmModuleCarSetup::on_toolButton_setCarSampleTime_clicked()
{
    this->setCar(ECarDataUnit::CTRL_SAMPLE_TIME,ui->spinBox_carSampleTime->value());
}

