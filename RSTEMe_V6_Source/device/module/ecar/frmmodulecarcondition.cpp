#include "frmmodulecarcondition.h"
#include "ui_frmmodulecarcondition.h"
#include <QStringList>
#include <QDebug>
#include <QComboBox>
#include <QMessageBox>

FrmModuleCarCondition::FrmModuleCarCondition(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrmModuleCarCondition)
{
    ui->setupUi(this);
    auto _move = this->geometry();
    auto _x = (1280-_move.size().width())/2;
    auto _y = (800-_move.size().height())/2;
    _move.setX(_x);
    _move.setY(_y);
    this->setGeometry(_move);
    this->initDisplay();
}

FrmModuleCarCondition::~FrmModuleCarCondition()
{
    delete ui;
}

void FrmModuleCarCondition::setCar(ECarDataUnit *car01, ECarDataUnit *car02,EConditionUnit::ConditionType type)
{
m_ecar_01 = car01;
m_ecar_02 = car02;
m_conditionType = type;
if(m_conditionType==EConditionUnit::CDT_START)ui->label_Name->setText("Điều kiện bắt đầu");
    else ui->label_Name->setText("Điều kiện kết thúc");
if(ui->radioButton_Car01_compare->isChecked())m_ecar = m_ecar_01;
   else m_ecar = m_ecar_02;
this->updateDisplay();
}

void FrmModuleCarCondition::initDisplay()
{
ECarDataUnit _car;
QStringList _list;
_list.append(EConditionUnit::getCompareText(EConditionUnit::COND_None));
_list.append(EConditionUnit::getCompareText(EConditionUnit::COND_Equally));
_list.append(EConditionUnit::getCompareText(EConditionUnit::COND_Higher));
_list.append(EConditionUnit::getCompareText(EConditionUnit::COND_Lower));
ui->comboBox_timeCompare->addItems(_list);
ui->comboBox_distanceCompare->addItems(_list);
ui->comboBox_speedCompare->addItems(_list);
ui->comboBox_accelerationCompare->addItems(_list);
ui->comboBox_forceCompare->addItems(_list);
ui->comboBox_axisXCompare->addItems(_list);
ui->comboBox_axisYCompare->addItems(_list);
ui->comboBox_axisZCompare->addItems(_list);

//connect
QObject::connect(ui->comboBox_timeCompare,&QComboBox::currentTextChanged,this,[this](){
    this->m_practiceCondition.time.compare = ((EConditionUnit::CompareTypeDef)ui->comboBox_timeCompare->currentIndex());
});
QObject::connect(ui->comboBox_distanceCompare,&QComboBox::currentTextChanged,this,[this](){
    this->m_practiceCondition.distance.compare = ((EConditionUnit::CompareTypeDef)ui->comboBox_distanceCompare->currentIndex());
});
QObject::connect(ui->comboBox_speedCompare,&QComboBox::currentTextChanged,this,[this](){
    this->m_practiceCondition.speed.compare = ((EConditionUnit::CompareTypeDef)ui->comboBox_speedCompare->currentIndex());
});
QObject::connect(ui->comboBox_accelerationCompare,&QComboBox::currentTextChanged,this,[this](){
    this->m_practiceCondition.acceleration.compare = ((EConditionUnit::CompareTypeDef)ui->comboBox_accelerationCompare->currentIndex());
});
QObject::connect(ui->comboBox_forceCompare,&QComboBox::currentTextChanged,this,[this](){
    this->m_practiceCondition.force.compare = ((EConditionUnit::CompareTypeDef)ui->comboBox_forceCompare->currentIndex());
});
QObject::connect(ui->comboBox_axisXCompare,&QComboBox::currentTextChanged,this,[this](){
    this->m_practiceCondition.axisX.compare = ((EConditionUnit::CompareTypeDef)ui->comboBox_axisXCompare->currentIndex());
});
QObject::connect(ui->comboBox_axisYCompare,&QComboBox::currentTextChanged,this,[this](){
    this->m_practiceCondition.axisY.compare = ((EConditionUnit::CompareTypeDef)ui->comboBox_axisYCompare->currentIndex());
});
QObject::connect(ui->comboBox_axisZCompare,&QComboBox::currentTextChanged,this,[this](){
    this->m_practiceCondition.axisZ.compare = ((EConditionUnit::CompareTypeDef)ui->comboBox_axisZCompare->currentIndex());
});

}

void FrmModuleCarCondition::updateDisplay()
{
    if(m_conditionType==EConditionUnit::CDT_START)m_practiceCondition= m_ecar->conditionStart();
        else m_practiceCondition= m_ecar->conditionStop();
    //compare type
    ui->comboBox_timeCompare->setCurrentIndex((int)m_practiceCondition.time.compare);
    ui->lineEdit_timeCompareValue->setText(QString::number(m_practiceCondition.time.value));
    ui->label_timeCompareUnit->setText(m_ecar->timeUnit().symbol);

    ui->comboBox_distanceCompare->setCurrentIndex((int)m_practiceCondition.distance.compare);
    ui->lineEdit_distanceCompareValue->setText(QString::number(m_practiceCondition.distance.value));
    ui->label_distanceCompareUnit->setText(m_ecar->distanceUnit().symbol);

    ui->comboBox_speedCompare->setCurrentIndex((int)m_practiceCondition.speed.compare);
    ui->lineEdit_speedCompareValue->setText(QString::number(m_practiceCondition.speed.value));
    ui->label_speedCompareUnit->setText(m_ecar->speedUnit().symbol);

    ui->comboBox_accelerationCompare->setCurrentIndex((int)m_practiceCondition.acceleration.compare);
    ui->lineEdit_accelerationCompareValue->setText(QString::number(m_practiceCondition.acceleration.value));
    ui->label_accelerationCompareUnit->setText(m_ecar->accelerationUnit().symbol);

    ui->comboBox_forceCompare->setCurrentIndex((int)m_practiceCondition.force.compare);
    ui->lineEdit_forceCompareValue->setText(QString::number(m_practiceCondition.force.value));
    ui->label_forceCompareUnit->setText(m_ecar->forceUnit().symbol);

    ui->comboBox_axisXCompare->setCurrentIndex((int)m_practiceCondition.axisX.compare);
    ui->lineEdit_axisXCompareValue->setText(QString::number(m_practiceCondition.axisX.value));
    ui->label_axisXCompareUnit->setText(m_ecar->axisXUnit().symbol);

    ui->comboBox_axisYCompare->setCurrentIndex((int)m_practiceCondition.axisY.compare);
    ui->lineEdit_axisYCompareValue->setText(QString::number(m_practiceCondition.axisY.value));
    ui->label_axisYCompareUnit->setText(m_ecar->axisYUnit().symbol);

    ui->comboBox_axisZCompare->setCurrentIndex((int)m_practiceCondition.axisZ.compare);
    ui->lineEdit_axisZCompareValue->setText(QString::number(m_practiceCondition.axisZ.value));
    ui->label_axisZCompareUnit->setText(m_ecar->axisZUnit().symbol);
}

void FrmModuleCarCondition::on_pushButton_cancel_clicked()
{
    this->close();
}


void FrmModuleCarCondition::on_radioButton_Car01_compare_toggled(bool checked)
{
    if(!m_ecar_01||!m_ecar_02)return;
    QString _str = "";
    if(checked){
        m_ecar = m_ecar_01;
        _str = ui->radioButton_Car01_compare->styleSheet();
    }
        else {
        m_ecar = m_ecar_02;
        _str = ui->radioButton_Car02_compare->styleSheet();
    }

    ui->label_time->setStyleSheet(_str);
    ui->label_distance->setStyleSheet(_str);
    ui->label_speed->setStyleSheet(_str);
    ui->label_acceleration->setStyleSheet(_str);
    ui->label_force->setStyleSheet(_str);
    ui->label_axisX->setStyleSheet(_str);
    ui->label_axisY->setStyleSheet(_str);
    ui->label_axisZ->setStyleSheet(_str);
    ui->label_compareType->setStyleSheet(_str);
    ui->label_compareValue->setStyleSheet(_str);


    this->updateDisplay();
}

void FrmModuleCarCondition::showMsgError(QString str)
{
    QMessageBox  msg;
    msg.setStandardButtons(QMessageBox::Ok);
    msg.setWindowTitle(this->windowTitle());
    msg.setParent(nullptr);
    msg.setWindowIcon(this->windowIcon());
    msg.setIcon(QMessageBox::Warning);
    msg.setText(str);
    msg.exec();
}

bool FrmModuleCarCondition::getValue()
{
bool _ok=false;
qreal _value=0;
QMessageBox  msg;
msg.setStandardButtons(QMessageBox::Ok);
msg.setWindowTitle(this->windowTitle());
msg.setParent(nullptr);
msg.setWindowIcon(this->windowIcon());
//distance
_value = QString(ui->lineEdit_timeCompareValue->text()).toDouble(&_ok);
if(!_ok){
    this->showMsgError("Giá trị so sánh thời gian nhập vào không hợp lệ!\n Giá trị cần phải là một số thực.");
    return false;
    }
m_practiceCondition.time.value = _value;
//distance
_value = QString(ui->lineEdit_distanceCompareValue->text()).toDouble(&_ok);
if(!_ok){
    this->showMsgError("Giá trị so sánh quãng đường nhập vào không hợp lệ!\n Giá trị cần phải là một số thực.");
    return false;
    }
m_practiceCondition.distance.value = _value;
//speed
_value = QString(ui->lineEdit_speedCompareValue->text()).toDouble(&_ok);
if(!_ok){
    this->showMsgError("Giá trị so sánh vận tốc nhập vào không hợp lệ!\n Giá trị cần phải là một số thực.");
    return false;
    }
m_practiceCondition.speed.value = _value;
//acceleration
_value = QString(ui->lineEdit_accelerationCompareValue->text()).toDouble(&_ok);
if(!_ok){
    this->showMsgError("Giá trị so sánh gia tốc nhập vào không hợp lệ!\n Giá trị cần phải là một số thực.");
    return false;
    }
m_practiceCondition.acceleration.value = _value;
//force
_value = QString(ui->lineEdit_forceCompareValue->text()).toDouble(&_ok);
if(!_ok){
    this->showMsgError("Giá trị so sánh lực tác động nhập vào không hợp lệ!\n Giá trị cần phải là một số thực.");
    return false;
    }
m_practiceCondition.force.value = _value;
//axisX
_value = QString(ui->lineEdit_axisXCompareValue->text()).toDouble(&_ok);
if(!_ok){
    this->showMsgError("Giá trị so sánh độ nghiên trục X nhập vào không hợp lệ!\n Giá trị cần phải là một số thực.");
    return false;
    }
m_practiceCondition.axisX.value = _value;
//axisY
_value = QString(ui->lineEdit_axisYCompareValue->text()).toDouble(&_ok);
if(!_ok){
    this->showMsgError("Giá trị so sánh độ nghiên trục Y nhập vào không hợp lệ!\n Giá trị cần phải là một số thực.");
    return false;
    }
m_practiceCondition.axisY.value = _value;
//axisZ
_value = QString(ui->lineEdit_axisZCompareValue->text()).toDouble(&_ok);
if(!_ok){
    this->showMsgError("Giá trị so sánh độ nghiên trục Z nhập vào không hợp lệ!\n Giá trị cần phải là một số thực.");
    return false;
    }
m_practiceCondition.axisZ.value = _value;
 return true;
}


void FrmModuleCarCondition::on_pushButton_ok_clicked()
{
    if(this->getValue()){
        if(m_conditionType==EConditionUnit::CDT_START)m_ecar->setConditionStart(m_practiceCondition);
            else m_ecar->setConditionStop(m_practiceCondition);
        emit this->replySetCondition(m_conditionType);
        QMessageBox  msg;
        msg.setStandardButtons(QMessageBox::Ok);
        msg.setWindowTitle(this->windowTitle());
        msg.setParent(nullptr);
        msg.setWindowIcon(this->windowIcon());
        msg.setIcon(QMessageBox::Information);
        QString _str;
        if(ui->radioButton_Car01_compare->isChecked())_str = "Đã cập nhật "+ui->label_Name->text()+" cho XE-01.";
            else _str = "Đã cập nhật "+ui->label_Name->text()+" cho XE-02.";
        msg.setText(_str);
        msg.exec();
    }
}


void FrmModuleCarCondition::on_pushButton_removeCondition_clicked()
{
    ui->comboBox_timeCompare->setCurrentIndex(0);
    ui->comboBox_distanceCompare->setCurrentIndex(0);
    ui->comboBox_speedCompare->setCurrentIndex(0);
    ui->comboBox_accelerationCompare->setCurrentIndex(0);
    ui->comboBox_forceCompare->setCurrentIndex(0);
    ui->comboBox_axisXCompare->setCurrentIndex(0);
    ui->comboBox_axisYCompare->setCurrentIndex(0);
    ui->comboBox_axisZCompare->setCurrentIndex(0);

    ui->lineEdit_timeCompareValue->setText("0");
    ui->lineEdit_distanceCompareValue->setText("0");
    ui->lineEdit_speedCompareValue->setText("0");
    ui->lineEdit_accelerationCompareValue->setText("0");
    ui->lineEdit_forceCompareValue->setText("0");
    ui->lineEdit_axisXCompareValue->setText("0");
    ui->lineEdit_axisYCompareValue->setText("0");
    ui->lineEdit_axisZCompareValue->setText("0");

    if(this->getValue()){
        if(m_conditionType==EConditionUnit::CDT_START)m_ecar->setConditionStart(m_practiceCondition);
            else m_ecar->setConditionStop(m_practiceCondition);
        emit this->replySetCondition(m_conditionType);
        QMessageBox  msg;
        msg.setStandardButtons(QMessageBox::Ok);
        msg.setWindowTitle(this->windowTitle());
        msg.setParent(nullptr);
        msg.setWindowIcon(this->windowIcon());
        msg.setIcon(QMessageBox::Information);
        QString _str;
        if(ui->radioButton_Car01_compare->isChecked())_str = "Đã xóa "+ui->label_Name->text()+" cho XE-01.";
            else _str = "Đã xóa "+ui->label_Name->text()+" cho XE-02.";
        msg.setText(_str);
        msg.exec();
    }
}

