#include "frmdevicealarm.h"
#include "ui_frmdevicealarm.h"
#include <QMessageBox>
#define EGPIO_COMMAN_UART	0b01000000
#define EGPIO_COMMAN_PWM2	0b00100000
#define EGPIO_COMMAN_PWM1	0b00010000
#define EGPIO_COMMAN_IN2	0b00001000
#define EGPIO_COMMAN_IN1	0b00000100
#define EGPIO_COMMAN_OUT2	0b00000010
#define EGPIO_COMMAN_OUT1	0b00000001
FrmDeviceAlarm::FrmDeviceAlarm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrmDeviceAlarm)
{
    ui->setupUi(this);
    auto _move = this->geometry();
    auto _x = (1280-_move.size().width())/2;
    auto _y = (770-_move.size().height())/2;
    _move.setX(_x);
    _move.setY(_y);
    this->setGeometry(_move);
    //port 01
    QLineEdit *_lde = ui->comboBox_port01_cmptype->lineEdit();
    _lde->setObjectName("LineEdit");
    QString _style = ("QLineEdit{\
                        color: rgb(2, 87, 122);\
                        background-color: rgb(255, 255 ,255);\
                        border: none;\
                        border-style: outset;\
                        border-top-left-radius: 15px;\
                        border-bottom-left-radius: 15px;\
                        }\
                        QLineEdit:hover{\
                        background-color: rgb(25, 149, 173);\
                        color: rgb(255, 255, 255);\
                        }");
    _lde->setAlignment(Qt::AlignHCenter);
    _lde->setFont(QFont("Segoe UI",9,QFont::Bold));
    _lde->setStyleSheet(_style);
    _lde->setReadOnly(true);
    ui->comboBox_port01_cmptype->setLineEdit(_lde);

    _lde = ui->comboBox_port01_mode->lineEdit();
    _lde->setFont(QFont("Segoe UI",10,QFont::Bold));
    _lde->setAlignment(Qt::AlignHCenter);
    _lde->setStyleSheet(_style);
    _lde->setReadOnly(true);
    ui->comboBox_port01_mode->setLineEdit(_lde);
    //port 02
    _lde = ui->comboBox_port02_cmptype->lineEdit();
    _lde->setFont(QFont("Segoe UI",9,QFont::Bold));
    _lde->setAlignment(Qt::AlignHCenter);
    _lde->setStyleSheet(_style);
    _lde->setReadOnly(true);
    ui->comboBox_port02_cmptype->setLineEdit(_lde);

    _lde = ui->comboBox_port02_mode->lineEdit();
    _lde->setFont(QFont("Segoe UI",10,QFont::Bold));
    _lde->setAlignment(Qt::AlignHCenter);
    _lde->setStyleSheet(_style);
    _lde->setReadOnly(true);
    ui->comboBox_port02_mode->setLineEdit(_lde);
    //time
    if(m_timerPoll)m_timerPoll->deleteLater();
    m_timerPoll = new QTimer(this);
    QObject::connect(m_timerPoll,&QTimer::timeout,this,&FrmDeviceAlarm::on_timerPoll);
}

FrmDeviceAlarm::~FrmDeviceAlarm()
{
    delete ui;
}

void FrmDeviceAlarm::setDevice(EDevice *dev)
{
    m_edevice = dev;
    this->setWindowTitle(dev->deviceInfo().name() + "(@" + dev->deviceInfo().serialHex() + ")");
    m_esensor = new ESensor(this,m_edevice);
    m_esensor->start();
    //init Display
    this->init();
    QObject::connect(m_esensor,&ESensor::newData,this,&FrmDeviceAlarm::on_newData);
}

void FrmDeviceAlarm::setSensor(ESensor *sen)
{
    if(m_esensor){
        QObject::disconnect(m_esensor,&ESensor::newData,this,&FrmDeviceAlarm::on_newData);
        m_esensor->deleteLater();
        m_esensor = nullptr;
    }
    m_esensor = sen;
    m_edevice = sen->device();
    this->setWindowTitle(m_edevice->deviceInfo().name() + "(@" + m_edevice->deviceInfo().serialHex() + ")");
    //init Display
    this->init();
    QObject::connect(m_esensor,&ESensor::newData,this,&FrmDeviceAlarm::on_newData);
}

void FrmDeviceAlarm::closeEvent(QCloseEvent *)
{
    if(m_timerPoll){
        m_timerPoll->deleteLater();
        m_timerPoll=nullptr;
    }
}

void FrmDeviceAlarm::on_newData(int)
{
    m_updateValue = true;
}

void FrmDeviceAlarm::on_timerPoll()
{
    //check Alarm
    if(m_updateValue){
        this->setValue();
        m_updateValue = false;
    }
}


void FrmDeviceAlarm::init()
{
    if(!m_esensor)return;
    m_para = m_esensor->parameter();
    //name
    ui->label_Name->setText(m_esensor->device()->deviceInfo().name());
    //initAlarm
    m_port01 = m_para.alarm().port1;
    m_port02 = m_para.alarm().port2;
    this->setAlarmPort1();
    this->setAlarmPort2();
    m_timerPoll->start(10);
    m_initStatus = true;
}

void FrmDeviceAlarm::setValue()
{
if(!m_esensor)return;
m_para = m_esensor->parameter();


//display Value
QString _unit =  "(" + m_para.currentUnit().symbol + ")";
ui->label_sensorValue->setText(QString::number(m_para.value()));
ui->label_sensorUnit->setText(_unit);
//check OnOff
this->checkOnOffPort1();
this->checkOnOffPort2();
//check Alarm
if(m_port01.enable)this->checkAlarmPort1();
if(m_port02.enable)this->checkAlarmPort2();
}

void FrmDeviceAlarm::checkOnOffPort1()
{
QString _on = "QToolButton{                  \
            background-color: rgb(0, 255, 0);\
            border: none;\
            border-style: outset;\
            border-width: 0px;\
            border-radius: 15px;\
            }";
QString _off = "QToolButton{                  \
                background-color: rgb(120, 120, 120);\
            border: none;\
            border-style: outset;\
            border-width: 0px;\
            border-radius: 15px;\
            }";
quint8 _res = m_para.gpio()&0xFF;
//display Led
if((_res&EGPIO_COMMAN_PWM1)||(_res&EGPIO_COMMAN_IN1)||(_res&EGPIO_COMMAN_OUT1)){
    ui->toolButton_port01_led->setStyleSheet(_on);
    if(!m_port01.enable){
        this->setToolPushOnOff(ui->toolButton_port01_off,true);
        this->setToolPushOnOff(ui->toolButton_port01_on,false);
        }
    }
    else {
    ui->toolButton_port01_led->setStyleSheet(_off);
    if(!m_port01.enable){
        this->setToolPushOnOff(ui->toolButton_port01_off,false);
        this->setToolPushOnOff(ui->toolButton_port01_on,true);
        }
    }
    //check On/Off
        if(m_port01.Off){
            if((_res&EGPIO_COMMAN_OUT1)||(_res&EGPIO_COMMAN_PWM1)){
            m_esensor->setGpio(((quint16)EGPIO_COMMAN_OUT1<<8));//qDebug()<<"port1 Off";
            }
            m_port01.Off = false;
        }
        if(m_port01.On){
            if((_res&EGPIO_COMMAN_OUT1)==0){
            m_esensor->setGpio(((quint16)EGPIO_COMMAN_OUT1<<8)|0xFF);//qDebug()<<"port1 On";
            }
            m_port01.On = false;
        }
}

void FrmDeviceAlarm::checkOnOffPort2()
{
    QString _on = "QToolButton{                  \
                background-color: rgb(0, 255, 0);\
                border: none;\
                border-style: outset;\
                border-width: 0px;\
                border-radius: 15px;\
                }";
    QString _off = "QToolButton{                  \
                    background-color: rgb(120, 120, 120);\
                border: none;\
                border-style: outset;\
                border-width: 0px;\
                border-radius: 15px;\
                }";
    quint8 _res = m_para.gpio()&0xFF;
    //display Led
    if((_res&EGPIO_COMMAN_PWM2)||(_res&EGPIO_COMMAN_IN2)||(_res&EGPIO_COMMAN_OUT2)){
        ui->toolButton_port02_led->setStyleSheet(_on);
        if(!m_port02.enable){
            this->setToolPushOnOff(ui->toolButton_port02_off,true);
            this->setToolPushOnOff(ui->toolButton_port02_on,false);
            }
        }
        else {
        ui->toolButton_port02_led->setStyleSheet(_off);
        if(!m_port02.enable){
            this->setToolPushOnOff(ui->toolButton_port02_off,false);
            this->setToolPushOnOff(ui->toolButton_port02_on,true);
            }
        }
//check On/Off
        if(m_port02.Off){
            if((_res&EGPIO_COMMAN_OUT2)||(_res&EGPIO_COMMAN_PWM2)){
            m_esensor->setGpio(((quint16)EGPIO_COMMAN_OUT2<<8));//qDebug()<<"port2 Off";
            }
            m_port02.Off = false;
        }
        if(m_port02.On){
            if((_res&EGPIO_COMMAN_OUT2)==0){
            m_esensor->setGpio(((quint16)EGPIO_COMMAN_OUT2<<8)|0xFF);//qDebug()<<"port2 On";
            }
            m_port02.On = false;
        }

}

void FrmDeviceAlarm::checkAlarmPort1()
{
if(m_port01.mode==0)this->modeOnOffPort1();
else this->modeLevelPort1();
}

void FrmDeviceAlarm::checkAlarmPort2()
{
    if(m_port02.mode==0)this->modeOnOffPort2();
    else this->modeLevelPort2();
}

void FrmDeviceAlarm::modeOnOffPort1()
{
    //display LED
    /*#define EGPIO_COMMAN_UART	0b01000000
    #define EGPIO_COMMAN_PWM2	0b00100000
    #define EGPIO_COMMAN_PWM1	0b00010000
    #define EGPIO_COMMAN_IN2	0b00001000
    #define EGPIO_COMMAN_IN1	0b00000100
    #define EGPIO_COMMAN_OUT2	0b00000010
    #define EGPIO_COMMAN_OUT1	0b00000001
    */
    auto _low = m_port01.low;
    auto _high = m_port01.medium;
    bool _set = true;
    switch(m_port01.cmpType){
    case 0:
        if((m_para.value()>=_low)&&(m_para.value()<=_high))_set = false;//Hai biên (Giá trị đo < Ngưỡng thấp || Ngưỡng cao < Giá trị đo)
        break;
    case 1:
        if((m_para.value()<=_low)||(m_para.value()>=_high))_set = false;//Nằm giữa (Ngưỡng thấp < Giá trị đo < Ngưỡng cao)
        break;
    }
    quint8 _res = m_para.gpio()&0xFF;
    if(!_set){
        m_port01.isSet = false;
        if(_res&EGPIO_COMMAN_OUT1){
        m_esensor->setGpio(((quint16)EGPIO_COMMAN_OUT1<<8));//qDebug()<<"port1 Off";
        }
    }
    else{
        if(((_res&EGPIO_COMMAN_OUT1)==0)&&!m_port01.isSet){
        m_esensor->setGpio(((quint16)EGPIO_COMMAN_OUT1<<8)|m_port01.time);//qDebug()<<"port1 On :"<<m_port01.time;
        m_port01.isSet = true;
        }
    }
}
void FrmDeviceAlarm::modeOnOffPort2()
{
    //display LED
    /*#define EGPIO_COMMAN_UART	0b01000000
    #define EGPIO_COMMAN_PWM2	0b00100000
    #define EGPIO_COMMAN_PWM1	0b00010000
    #define EGPIO_COMMAN_IN2	0b00001000
    #define EGPIO_COMMAN_IN1	0b00000100
    #define EGPIO_COMMAN_OUT2	0b00000010
    #define EGPIO_COMMAN_OUT1	0b00000001
    */
    auto _low = m_port02.low;
    auto _high = m_port02.medium;
    bool _set = true;
    switch(m_port02.cmpType){
    case 0:
        if((m_para.value()>=_low)&&(m_para.value()<=_high))_set = false;//Hai biên (Giá trị đo < Ngưỡng thấp || Ngưỡng cao < Giá trị đo)
        break;
    case 1:
        if((m_para.value()<=_low)||(m_para.value()>=_high))_set = false;//Nằm giữa (Ngưỡng thấp < Giá trị đo < Ngưỡng cao)
        break;
    }
    quint8 _res = m_para.gpio()&0xFF;
    if(!_set){
        m_port02.isSet = false;
        if(_res&EGPIO_COMMAN_OUT2){
        m_esensor->setGpio(((quint16)EGPIO_COMMAN_OUT2<<8));//qDebug()<<"port2 Off";
        }
    }
    else{
        if(((_res&EGPIO_COMMAN_OUT2)==0)&&!m_port02.isSet){
        m_esensor->setGpio(((quint16)EGPIO_COMMAN_OUT2<<8)|m_port02.time);//qDebug()<<"port2 On :"<<m_port02.time;
        m_port02.isSet = true;
        }
    }
}

void FrmDeviceAlarm::modeLevelPort1()
{
    if(!m_esensor)return;
    auto _val = m_para.value();
    quint8 _data=0;
    if(_val>m_port01.low)_data = 80;
    if(_val>m_port01.medium)_data = 160;
    if(_val>m_port01.high)_data = 250;
    m_esensor->setGpio(EGPIO_COMMAN_PWM1,_data);
}
void FrmDeviceAlarm::modeLevelPort2()
{
    if(!m_esensor)return;
    auto _val = m_para.value();
    quint8 _data=0;
    if(_val>m_port02.low)_data = 80;
    if(_val>m_port02.medium)_data = 160;
    if(_val>m_port02.high)_data = 250;
    m_esensor->setGpio(EGPIO_COMMAN_PWM2,_data);
}

void FrmDeviceAlarm::setToolPushOnOff(QToolButton *bt,bool st)
{
 QString _on = "QToolButton{\
    color: rgb(255, 255, 255);\
    background-color:rgb(0, 170, 127);\
    border: none;\
    border-style: outset;\
    border-width: 0px;\
    border-radius: 6px;\
    }\
    QToolButton:hover{\
    background-color: rgb(120, 210, 240);\
    color: rgb(255, 255, 255);\
    }";
QString _off = "QToolButton{\
   color: rgb(255, 255, 255);\
   background-color:rgb(200, 200, 200);\
   border: none;\
   border-style: outset;\
   border-width: 0px;\
   border-radius: 6px;\
   }";
   bt->setEnabled(st);
   if(st)bt->setStyleSheet(_on);
   else bt->setStyleSheet(_off);
}


void FrmDeviceAlarm::on_toolButton_port01_on_clicked()
{
    m_port01.On=true;
}


void FrmDeviceAlarm::on_toolButton_port01_off_clicked()
{
    m_port01.Off=true;
}


void FrmDeviceAlarm::on_toolButton_port02_on_clicked()
{
    m_port02.On=true;
}


void FrmDeviceAlarm::on_toolButton_port02_off_clicked()
{
    m_port02.Off=true;
}


void FrmDeviceAlarm::on_comboBox_port01_mode_currentIndexChanged(int index)
{
    switch(index){
    case 0:
        ui->label_port01_medium->setText("Cao");
        ui->label_port01_high->hide();
        ui->lineEdit_port01_threHigh->hide();
        ui->comboBox_port01_cmptype->setEnabled(true);
        break;
    case 1:
        ui->label_port01_medium->setText("Trung bình");
        ui->label_port01_high->show();
        ui->lineEdit_port01_threHigh->show();
        ui->comboBox_port01_cmptype->setEnabled(false);
        break;
    }
}


void FrmDeviceAlarm::on_comboBox_port02_mode_currentIndexChanged(int index)
{
    switch(index){
    case 0:
        ui->label_port02_medium->setText("Cao");
        ui->label_port02_high->hide();
        ui->lineEdit_port02_threHigh->hide();
        ui->comboBox_port02_cmptype->setEnabled(true);
        break;
    case 1:
        ui->label_port02_medium->setText("Trung bình");
        ui->label_port02_high->show();
        ui->lineEdit_port02_threHigh->show();
        ui->comboBox_port02_cmptype->setEnabled(false);
        break;
    }
}


void FrmDeviceAlarm::on_pushButton_cancel_clicked()
{
    this->close();
}


void FrmDeviceAlarm::on_toolButton_port01_update_clicked()
{
m_port01.mode = ui->comboBox_port01_mode->currentIndex();
m_port01.cmpType = ui->comboBox_port01_cmptype->currentIndex();
m_port01.time = ui->spinBox_port01_time->value();
if(m_port01.time==0)m_port01.time=255;
m_port01.isSet = false;
//
QMessageBox  msg;
msg.setStandardButtons(QMessageBox::Ok);
msg.setWindowTitle(this->windowTitle());
msg.setParent(nullptr);
msg.setIcon(QMessageBox::Warning);
msg.setWindowIcon(this->windowIcon());
bool _ok=false;
double _val = 0;
//Low
_val = QString(ui->lineEdit_port01_threLow->text()).toDouble(&_ok);
if(!_ok){
    msg.setText("Đã có lỗi! Ngưỡng cảnh báo " + ui->label_port01_low->text() + " không phải là một số thực.\n");
    msg.exec();
    ui->lineEdit_port01_threLow->setText(QString::number(m_port01.low));
    return;
}
m_port01.low = _val;
//Medium
_val = QString(ui->lineEdit_port01_threMedium->text()).toDouble(&_ok);
if(!_ok){
    msg.setText("Đã có lỗi! Ngưỡng cảnh báo " + ui->label_port01_medium->text() + " không phải là một số thực.\n");
    msg.exec();
    ui->lineEdit_port01_threMedium->setText(QString::number(m_port01.medium));
    return;
}
m_port01.medium = _val;
//High
_val = QString(ui->lineEdit_port01_threHigh->text()).toDouble(&_ok);
if(!_ok){
    msg.setText("Đã có lỗi! Ngưỡng cảnh báo " + ui->label_port01_high->text() + " không phải là một số thực.\n");
    msg.exec();
    ui->lineEdit_port01_threHigh->setText(QString::number(m_port01.high));
    return;
}
m_port01.high = _val;
//
msg.setIcon(QMessageBox::Information);
msg.setText("Đã cập nhật dữ liệu cảnh báo cổng số 1.\n");
msg.exec();

//update
if(m_esensor){
    auto _p = m_para.alarm();
    _p.port1 = m_port01;
    m_para.setAlarm(_p);
}
}


void FrmDeviceAlarm::on_toolButton_port02_update_clicked()
{
    m_port02.mode = ui->comboBox_port02_mode->currentIndex();
    m_port02.cmpType = ui->comboBox_port02_cmptype->currentIndex();
    m_port02.time = ui->spinBox_port02_time->value();
    if(m_port02.time==0)m_port02.time=255;
    m_port02.isSet = false;
    //
    QMessageBox  msg;
    msg.setStandardButtons(QMessageBox::Ok);
    msg.setWindowTitle(this->windowTitle());
    msg.setParent(nullptr);
    msg.setIcon(QMessageBox::Warning);
    msg.setWindowIcon(this->windowIcon());
    bool _ok=false;
    double _val = 0;
    //Low
    _val = QString(ui->lineEdit_port02_threLow->text()).toDouble(&_ok);
    if(!_ok){
        msg.setText("Đã có lỗi! Ngưỡng cảnh báo " + ui->label_port02_low->text() + " không phải là một số thực.\n");
        msg.exec();
        ui->lineEdit_port02_threLow->setText(QString::number(m_port02.low));
        return;
    }
    m_port02.low = _val;
    //Medium
    _val = QString(ui->lineEdit_port02_threMedium->text()).toDouble(&_ok);
    if(!_ok){
        msg.setText("Đã có lỗi! Ngưỡng cảnh báo " + ui->label_port02_medium->text() + " không phải là một số thực.\n");
        msg.exec();
        ui->lineEdit_port02_threMedium->setText(QString::number(m_port02.medium));
        return;
    }
    m_port02.medium = _val;
    //High
    _val = QString(ui->lineEdit_port02_threHigh->text()).toDouble(&_ok);
    if(!_ok){
        msg.setText("Đã có lỗi! Ngưỡng cảnh báo " + ui->label_port02_high->text() + " không phải là một số thực.\n");
        msg.exec();
        ui->lineEdit_port02_threHigh->setText(QString::number(m_port02.high));
        return;
    }
    m_port02.high = _val;
    //
    msg.setIcon(QMessageBox::Information);
    msg.setText("Đã cập nhật dữ liệu cảnh báo cổng số 2.\n");
    msg.exec();

    //update
    if(m_esensor){
        auto _p = m_para.alarm();
        _p.port2 = m_port02;
        m_para.setAlarm(_p);
    }
}

void FrmDeviceAlarm::setAlarmPort1()
{
    auto para = m_port01;
ui->checkBox_port01_enable->setChecked(para.enable);
this->setToolPushOnOff(ui->toolButton_port01_off,!para.enable);
this->setToolPushOnOff(ui->toolButton_port01_on,!para.enable);
ui->frame_port01_setup->setEnabled(para.enable);
ui->frame_port01_pwm->setEnabled(!para.enable);
ui->spinBox_port01_time->setValue(para.time);
if(para.mode<ui->comboBox_port01_mode->count()) {
    ui->comboBox_port01_mode->setCurrentIndex(para.mode);
    this->on_comboBox_port01_mode_currentIndexChanged(para.mode);
}
if(para.cmpType<ui->comboBox_port01_cmptype->count())ui->comboBox_port01_cmptype->setCurrentIndex(para.cmpType);
ui->lineEdit_port01_threLow->setText(QString::number(para.low));
ui->lineEdit_port01_threMedium->setText(QString::number(para.medium));
ui->lineEdit_port01_threHigh->setText(QString::number(para.high));
}
void FrmDeviceAlarm::setAlarmPort2()
{
    auto para = m_port02;
ui->checkBox_port02_enable->setChecked(para.enable);
this->setToolPushOnOff(ui->toolButton_port02_off,!para.enable);
this->setToolPushOnOff(ui->toolButton_port02_on,!para.enable);
ui->frame_port02_setup->setEnabled(para.enable);
ui->frame_port02_pwm->setEnabled(!para.enable);
ui->spinBox_port02_time->setValue(para.time);
if(para.mode<ui->comboBox_port02_mode->count()) {
    ui->comboBox_port02_mode->setCurrentIndex(para.mode);
    this->on_comboBox_port02_mode_currentIndexChanged(para.mode);
}
if(para.cmpType<ui->comboBox_port02_cmptype->count())ui->comboBox_port02_cmptype->setCurrentIndex(para.cmpType);
ui->lineEdit_port02_threLow->setText(QString::number(para.low));
ui->lineEdit_port02_threMedium->setText(QString::number(para.medium));
ui->lineEdit_port02_threHigh->setText(QString::number(para.high));
}


void FrmDeviceAlarm::on_checkBox_port01_enable_clicked()
{
    auto checked = ui->checkBox_port01_enable->isChecked();
    ui->frame_port01_setup->setEnabled(checked);
    ui->frame_port01_pwm->setEnabled(!checked);
    this->setToolPushOnOff(ui->toolButton_port01_off,!checked);
    this->setToolPushOnOff(ui->toolButton_port01_on,!checked);
    m_port01.enable = checked;
}


void FrmDeviceAlarm::on_checkBox_port02_enable_clicked()
{
    auto checked = ui->checkBox_port02_enable->isChecked();
    ui->frame_port02_setup->setEnabled(checked);
    ui->frame_port02_pwm->setEnabled(!checked);
    this->setToolPushOnOff(ui->toolButton_port02_off,!checked);
    this->setToolPushOnOff(ui->toolButton_port02_on,!checked);
    m_port02.enable = checked;
}


void FrmDeviceAlarm::on_toolButton_port01_pwm_clicked()
{
    if(m_esensor){
        m_esensor->setGpio(EGPIO_COMMAN_PWM1,(quint8)((double)ui->spinBox_port01_duty->value()*2.5));
    }
}


void FrmDeviceAlarm::on_toolButton_port02_pwm_clicked()
{
    if(m_esensor){
        m_esensor->setGpio(EGPIO_COMMAN_PWM2,(quint8)((double)ui->spinBox_port02_duty->value()*2.5));
    }
}

