/********************************************************************************
** Form generated from reading UI file 'frmdevicealarm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMDEVICEALARM_H
#define UI_FRMDEVICEALARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmDeviceAlarm
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label_Name;
    QLabel *label_25;
    QFrame *line;
    QLabel *label_sensorUnit;
    QLabel *label_sensorValue;
    QGroupBox *groupBox_1;
    QCheckBox *checkBox_port01_enable;
    QFrame *frame_port01_setup;
    QLabel *label_13;
    QComboBox *comboBox_port01_mode;
    QComboBox *comboBox_port01_cmptype;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QSpinBox *spinBox_port01_time;
    QLineEdit *lineEdit_port01_threLow;
    QLabel *label_port01_low;
    QLabel *label_port01_medium;
    QLineEdit *lineEdit_port01_threMedium;
    QLabel *label_port01_high;
    QLineEdit *lineEdit_port01_threHigh;
    QToolButton *toolButton_port01_update;
    QFrame *frame_port01_onOff;
    QToolButton *toolButton_port01_off;
    QToolButton *toolButton_port01_on;
    QLabel *label_14;
    QToolButton *toolButton_port01_led;
    QLabel *label_port01;
    QFrame *frame_port01_pwm;
    QLabel *label_18;
    QToolButton *toolButton_port01_pwm;
    QLabel *label_24;
    QSpinBox *spinBox_port01_duty;
    QPushButton *pushButton_cancel;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox_port02_enable;
    QFrame *frame_port02_setup;
    QLabel *label_19;
    QComboBox *comboBox_port02_mode;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QSpinBox *spinBox_port02_time;
    QLineEdit *lineEdit_port02_threLow;
    QLabel *label_port02_low;
    QLabel *label_port02_medium;
    QLineEdit *lineEdit_port02_threMedium;
    QLabel *label_port02_high;
    QLineEdit *lineEdit_port02_threHigh;
    QToolButton *toolButton_port02_update;
    QComboBox *comboBox_port02_cmptype;
    QFrame *frame_port02_onOff;
    QToolButton *toolButton_port02_off;
    QToolButton *toolButton_port02_on;
    QLabel *label_23;
    QToolButton *toolButton_port02_led;
    QLabel *label_port02;
    QFrame *frame_port02_pwm;
    QLabel *label_26;
    QLabel *label_27;
    QSpinBox *spinBox_port02_duty;
    QToolButton *toolButton_port02_pwm;

    void setupUi(QMainWindow *FrmDeviceAlarm)
    {
        if (FrmDeviceAlarm->objectName().isEmpty())
            FrmDeviceAlarm->setObjectName(QString::fromUtf8("FrmDeviceAlarm"));
        FrmDeviceAlarm->resize(1009, 450);
        FrmDeviceAlarm->setMinimumSize(QSize(1009, 450));
        FrmDeviceAlarm->setMaximumSize(QSize(1009, 450));
        centralwidget = new QWidget(FrmDeviceAlarm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1011, 41));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(2,87, 122);"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        label_Name = new QLabel(frame);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setGeometry(QRect(10, 6, 491, 28));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        label_Name->setFont(font);
        label_Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_25 = new QLabel(frame);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(520, 6, 91, 28));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_25->setFont(font1);
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(504, 0, 3, 41));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_sensorUnit = new QLabel(frame);
        label_sensorUnit->setObjectName(QString::fromUtf8("label_sensorUnit"));
        label_sensorUnit->setGeometry(QRect(750, 6, 81, 28));
        label_sensorUnit->setFont(font1);
        label_sensorUnit->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);"));
        label_sensorValue = new QLabel(frame);
        label_sensorValue->setObjectName(QString::fromUtf8("label_sensorValue"));
        label_sensorValue->setGeometry(QRect(630, 6, 111, 28));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        label_sensorValue->setFont(font2);
        label_sensorValue->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);"));
        label_sensorValue->setAlignment(Qt::AlignCenter);
        groupBox_1 = new QGroupBox(centralwidget);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        groupBox_1->setGeometry(QRect(10, 50, 491, 361));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        groupBox_1->setFont(font3);
        groupBox_1->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border: none;\n"
"border-color: rgb(200, 200, 200);\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}"));
        groupBox_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_1->setFlat(false);
        checkBox_port01_enable = new QCheckBox(groupBox_1);
        checkBox_port01_enable->setObjectName(QString::fromUtf8("checkBox_port01_enable"));
        checkBox_port01_enable->setGeometry(QRect(10, 140, 281, 20));
        checkBox_port01_enable->setFont(font3);
        checkBox_port01_enable->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        checkBox_port01_enable->setChecked(false);
        frame_port01_setup = new QFrame(groupBox_1);
        frame_port01_setup->setObjectName(QString::fromUtf8("frame_port01_setup"));
        frame_port01_setup->setGeometry(QRect(10, 160, 471, 191));
        frame_port01_setup->setFrameShape(QFrame::Box);
        frame_port01_setup->setFrameShadow(QFrame::Sunken);
        label_13 = new QLabel(frame_port01_setup);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 16, 81, 20));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        comboBox_port01_mode = new QComboBox(frame_port01_setup);
        comboBox_port01_mode->addItem(QString());
        comboBox_port01_mode->addItem(QString());
        comboBox_port01_mode->setObjectName(QString::fromUtf8("comboBox_port01_mode"));
        comboBox_port01_mode->setGeometry(QRect(100, 10, 161, 32));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(true);
        comboBox_port01_mode->setFont(font4);
        comboBox_port01_mode->setLayoutDirection(Qt::LeftToRight);
        comboBox_port01_mode->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-top-left-radius: 15px;\n"
"border-bottom-left-radius: 15px;\n"
"}\n"
"\n"
"QComboBox::drop-down{\n"
"width: 20;\n"
"}\n"
"QComboBox:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        comboBox_port01_mode->setEditable(true);
        comboBox_port01_cmptype = new QComboBox(frame_port01_setup);
        comboBox_port01_cmptype->addItem(QString());
        comboBox_port01_cmptype->addItem(QString());
        comboBox_port01_cmptype->setObjectName(QString::fromUtf8("comboBox_port01_cmptype"));
        comboBox_port01_cmptype->setGeometry(QRect(100, 50, 361, 32));
        comboBox_port01_cmptype->setFont(font4);
        comboBox_port01_cmptype->setLayoutDirection(Qt::LeftToRight);
        comboBox_port01_cmptype->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-top-left-radius: 15px;\n"
"border-bottom-left-radius: 15px;\n"
"}\n"
"\n"
"QComboBox::drop-down{\n"
"width: 20;\n"
"}\n"
"QComboBox:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        comboBox_port01_cmptype->setEditable(true);
        label_15 = new QLabel(frame_port01_setup);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 56, 81, 20));
        label_15->setFont(font3);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_16 = new QLabel(frame_port01_setup);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 95, 111, 20));
        label_16->setFont(font3);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_17 = new QLabel(frame_port01_setup);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(280, 16, 91, 20));
        label_17->setFont(font3);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        spinBox_port01_time = new QSpinBox(frame_port01_setup);
        spinBox_port01_time->setObjectName(QString::fromUtf8("spinBox_port01_time"));
        spinBox_port01_time->setGeometry(QRect(370, 10, 91, 30));
        spinBox_port01_time->setFont(font3);
        spinBox_port01_time->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_port01_time->setAlignment(Qt::AlignCenter);
        spinBox_port01_time->setMinimum(0);
        spinBox_port01_time->setMaximum(255);
        spinBox_port01_time->setValue(10);
        lineEdit_port01_threLow = new QLineEdit(frame_port01_setup);
        lineEdit_port01_threLow->setObjectName(QString::fromUtf8("lineEdit_port01_threLow"));
        lineEdit_port01_threLow->setGeometry(QRect(140, 90, 71, 30));
        lineEdit_port01_threLow->setFont(font3);
        lineEdit_port01_threLow->setMaxLength(8);
        lineEdit_port01_threLow->setAlignment(Qt::AlignCenter);
        label_port01_low = new QLabel(frame_port01_setup);
        label_port01_low->setObjectName(QString::fromUtf8("label_port01_low"));
        label_port01_low->setGeometry(QRect(140, 120, 71, 20));
        label_port01_low->setFont(font4);
        label_port01_low->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_port01_low->setAlignment(Qt::AlignCenter);
        label_port01_medium = new QLabel(frame_port01_setup);
        label_port01_medium->setObjectName(QString::fromUtf8("label_port01_medium"));
        label_port01_medium->setGeometry(QRect(250, 120, 91, 20));
        label_port01_medium->setFont(font4);
        label_port01_medium->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_port01_medium->setAlignment(Qt::AlignCenter);
        lineEdit_port01_threMedium = new QLineEdit(frame_port01_setup);
        lineEdit_port01_threMedium->setObjectName(QString::fromUtf8("lineEdit_port01_threMedium"));
        lineEdit_port01_threMedium->setGeometry(QRect(260, 90, 71, 30));
        lineEdit_port01_threMedium->setFont(font3);
        lineEdit_port01_threMedium->setMaxLength(8);
        lineEdit_port01_threMedium->setAlignment(Qt::AlignCenter);
        label_port01_high = new QLabel(frame_port01_setup);
        label_port01_high->setObjectName(QString::fromUtf8("label_port01_high"));
        label_port01_high->setGeometry(QRect(390, 120, 71, 20));
        label_port01_high->setFont(font4);
        label_port01_high->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_port01_high->setAlignment(Qt::AlignCenter);
        lineEdit_port01_threHigh = new QLineEdit(frame_port01_setup);
        lineEdit_port01_threHigh->setObjectName(QString::fromUtf8("lineEdit_port01_threHigh"));
        lineEdit_port01_threHigh->setGeometry(QRect(390, 90, 71, 30));
        lineEdit_port01_threHigh->setFont(font3);
        lineEdit_port01_threHigh->setMaxLength(8);
        lineEdit_port01_threHigh->setAlignment(Qt::AlignCenter);
        toolButton_port01_update = new QToolButton(frame_port01_setup);
        toolButton_port01_update->setObjectName(QString::fromUtf8("toolButton_port01_update"));
        toolButton_port01_update->setGeometry(QRect(300, 150, 161, 30));
        toolButton_port01_update->setFont(font3);
        toolButton_port01_update->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 150, 200);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 6px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(120, 210, 240);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_port01_update->setIconSize(QSize(50, 50));
        toolButton_port01_update->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_port01_update->setAutoRaise(true);
        frame_port01_onOff = new QFrame(groupBox_1);
        frame_port01_onOff->setObjectName(QString::fromUtf8("frame_port01_onOff"));
        frame_port01_onOff->setGeometry(QRect(10, 40, 471, 41));
        frame_port01_onOff->setFrameShape(QFrame::Box);
        frame_port01_onOff->setFrameShadow(QFrame::Sunken);
        toolButton_port01_off = new QToolButton(frame_port01_onOff);
        toolButton_port01_off->setObjectName(QString::fromUtf8("toolButton_port01_off"));
        toolButton_port01_off->setGeometry(QRect(320, 6, 101, 30));
        toolButton_port01_off->setFont(font3);
        toolButton_port01_off->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 127);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 6px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(120, 210, 240);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_port01_off->setIconSize(QSize(50, 50));
        toolButton_port01_off->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_port01_off->setAutoRaise(true);
        toolButton_port01_on = new QToolButton(frame_port01_onOff);
        toolButton_port01_on->setObjectName(QString::fromUtf8("toolButton_port01_on"));
        toolButton_port01_on->setGeometry(QRect(210, 5, 101, 30));
        toolButton_port01_on->setFont(font3);
        toolButton_port01_on->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(0, 170, 127);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 6px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(120, 210, 240);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_port01_on->setIconSize(QSize(50, 50));
        toolButton_port01_on->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_port01_on->setAutoRaise(true);
        label_14 = new QLabel(frame_port01_onOff);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 10, 191, 20));
        label_14->setFont(font3);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);"));
        toolButton_port01_led = new QToolButton(frame_port01_onOff);
        toolButton_port01_led->setObjectName(QString::fromUtf8("toolButton_port01_led"));
        toolButton_port01_led->setGeometry(QRect(430, 5, 30, 30));
        toolButton_port01_led->setFont(font3);
        toolButton_port01_led->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"background-color: rgb(0, 255, 0);\n"
"	background-color: rgb(120, 120, 120);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 15px;\n"
"}\n"
""));
        toolButton_port01_led->setIconSize(QSize(50, 50));
        toolButton_port01_led->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_port01_led->setAutoRaise(true);
        label_port01 = new QLabel(groupBox_1);
        label_port01->setObjectName(QString::fromUtf8("label_port01"));
        label_port01->setGeometry(QRect(0, 0, 491, 31));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        label_port01->setFont(font5);
        label_port01->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgba(200, 200, 200, 200);\n"
"color: rgb(170, 0, 0);\n"
"}"));
        label_port01->setAlignment(Qt::AlignCenter);
        frame_port01_pwm = new QFrame(groupBox_1);
        frame_port01_pwm->setObjectName(QString::fromUtf8("frame_port01_pwm"));
        frame_port01_pwm->setGeometry(QRect(10, 79, 471, 41));
        frame_port01_pwm->setFrameShape(QFrame::Box);
        frame_port01_pwm->setFrameShadow(QFrame::Sunken);
        label_18 = new QLabel(frame_port01_pwm);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 10, 191, 20));
        label_18->setFont(font3);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 127);\n"
"color: rgb(148, 148, 110);"));
        toolButton_port01_pwm = new QToolButton(frame_port01_pwm);
        toolButton_port01_pwm->setObjectName(QString::fromUtf8("toolButton_port01_pwm"));
        toolButton_port01_pwm->setGeometry(QRect(210, 5, 101, 30));
        toolButton_port01_pwm->setFont(font3);
        toolButton_port01_pwm->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 127);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 6px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(230, 230, 170);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_port01_pwm->setIconSize(QSize(50, 50));
        toolButton_port01_pwm->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_port01_pwm->setAutoRaise(true);
        label_24 = new QLabel(frame_port01_pwm);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(320, 10, 71, 20));
        label_24->setFont(font3);
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        spinBox_port01_duty = new QSpinBox(frame_port01_pwm);
        spinBox_port01_duty->setObjectName(QString::fromUtf8("spinBox_port01_duty"));
        spinBox_port01_duty->setGeometry(QRect(392, 5, 71, 30));
        spinBox_port01_duty->setFont(font3);
        spinBox_port01_duty->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_port01_duty->setAlignment(Qt::AlignCenter);
        spinBox_port01_duty->setMinimum(0);
        spinBox_port01_duty->setMaximum(100);
        spinBox_port01_duty->setValue(50);
        pushButton_cancel = new QPushButton(centralwidget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(860, 415, 141, 30));
        pushButton_cancel->setFont(font3);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(510, 50, 491, 361));
        groupBox_2->setFont(font3);
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: rgb(220, 220, 220);\n"
"border: none;\n"
"border-color: rgb(180, 180, 180);\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}"));
        groupBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_2->setFlat(false);
        checkBox_port02_enable = new QCheckBox(groupBox_2);
        checkBox_port02_enable->setObjectName(QString::fromUtf8("checkBox_port02_enable"));
        checkBox_port02_enable->setGeometry(QRect(10, 140, 281, 20));
        checkBox_port02_enable->setFont(font3);
        checkBox_port02_enable->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 255);"));
        checkBox_port02_enable->setChecked(false);
        frame_port02_setup = new QFrame(groupBox_2);
        frame_port02_setup->setObjectName(QString::fromUtf8("frame_port02_setup"));
        frame_port02_setup->setGeometry(QRect(10, 160, 471, 191));
        frame_port02_setup->setFrameShape(QFrame::Box);
        frame_port02_setup->setFrameShadow(QFrame::Sunken);
        label_19 = new QLabel(frame_port02_setup);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 16, 81, 20));
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        comboBox_port02_mode = new QComboBox(frame_port02_setup);
        comboBox_port02_mode->addItem(QString());
        comboBox_port02_mode->addItem(QString());
        comboBox_port02_mode->setObjectName(QString::fromUtf8("comboBox_port02_mode"));
        comboBox_port02_mode->setGeometry(QRect(100, 10, 161, 32));
        comboBox_port02_mode->setFont(font4);
        comboBox_port02_mode->setLayoutDirection(Qt::LeftToRight);
        comboBox_port02_mode->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-top-left-radius: 15px;\n"
"border-bottom-left-radius: 15px;\n"
"}\n"
"\n"
"QComboBox::drop-down{\n"
"width: 20;\n"
"}\n"
"QComboBox:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        comboBox_port02_mode->setEditable(true);
        label_20 = new QLabel(frame_port02_setup);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 56, 81, 20));
        label_20->setFont(font3);
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_21 = new QLabel(frame_port02_setup);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 96, 111, 20));
        label_21->setFont(font3);
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_22 = new QLabel(frame_port02_setup);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(280, 16, 91, 20));
        label_22->setFont(font3);
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        spinBox_port02_time = new QSpinBox(frame_port02_setup);
        spinBox_port02_time->setObjectName(QString::fromUtf8("spinBox_port02_time"));
        spinBox_port02_time->setGeometry(QRect(370, 10, 91, 30));
        spinBox_port02_time->setFont(font3);
        spinBox_port02_time->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_port02_time->setAlignment(Qt::AlignCenter);
        spinBox_port02_time->setMinimum(0);
        spinBox_port02_time->setMaximum(255);
        spinBox_port02_time->setValue(10);
        lineEdit_port02_threLow = new QLineEdit(frame_port02_setup);
        lineEdit_port02_threLow->setObjectName(QString::fromUtf8("lineEdit_port02_threLow"));
        lineEdit_port02_threLow->setGeometry(QRect(140, 90, 71, 30));
        lineEdit_port02_threLow->setFont(font3);
        lineEdit_port02_threLow->setMaxLength(8);
        lineEdit_port02_threLow->setAlignment(Qt::AlignCenter);
        label_port02_low = new QLabel(frame_port02_setup);
        label_port02_low->setObjectName(QString::fromUtf8("label_port02_low"));
        label_port02_low->setGeometry(QRect(140, 120, 71, 20));
        label_port02_low->setFont(font4);
        label_port02_low->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_port02_low->setAlignment(Qt::AlignCenter);
        label_port02_medium = new QLabel(frame_port02_setup);
        label_port02_medium->setObjectName(QString::fromUtf8("label_port02_medium"));
        label_port02_medium->setGeometry(QRect(250, 120, 91, 20));
        label_port02_medium->setFont(font4);
        label_port02_medium->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_port02_medium->setAlignment(Qt::AlignCenter);
        lineEdit_port02_threMedium = new QLineEdit(frame_port02_setup);
        lineEdit_port02_threMedium->setObjectName(QString::fromUtf8("lineEdit_port02_threMedium"));
        lineEdit_port02_threMedium->setGeometry(QRect(260, 90, 71, 30));
        lineEdit_port02_threMedium->setFont(font3);
        lineEdit_port02_threMedium->setMaxLength(8);
        lineEdit_port02_threMedium->setAlignment(Qt::AlignCenter);
        label_port02_high = new QLabel(frame_port02_setup);
        label_port02_high->setObjectName(QString::fromUtf8("label_port02_high"));
        label_port02_high->setGeometry(QRect(390, 120, 71, 20));
        label_port02_high->setFont(font4);
        label_port02_high->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_port02_high->setAlignment(Qt::AlignCenter);
        lineEdit_port02_threHigh = new QLineEdit(frame_port02_setup);
        lineEdit_port02_threHigh->setObjectName(QString::fromUtf8("lineEdit_port02_threHigh"));
        lineEdit_port02_threHigh->setGeometry(QRect(390, 90, 71, 30));
        lineEdit_port02_threHigh->setFont(font3);
        lineEdit_port02_threHigh->setMaxLength(8);
        lineEdit_port02_threHigh->setAlignment(Qt::AlignCenter);
        toolButton_port02_update = new QToolButton(frame_port02_setup);
        toolButton_port02_update->setObjectName(QString::fromUtf8("toolButton_port02_update"));
        toolButton_port02_update->setGeometry(QRect(300, 150, 161, 30));
        toolButton_port02_update->setFont(font3);
        toolButton_port02_update->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 150, 200);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 6px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(120, 210, 240);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_port02_update->setIconSize(QSize(50, 50));
        toolButton_port02_update->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_port02_update->setAutoRaise(true);
        comboBox_port02_cmptype = new QComboBox(frame_port02_setup);
        comboBox_port02_cmptype->addItem(QString());
        comboBox_port02_cmptype->addItem(QString());
        comboBox_port02_cmptype->setObjectName(QString::fromUtf8("comboBox_port02_cmptype"));
        comboBox_port02_cmptype->setGeometry(QRect(100, 50, 361, 32));
        comboBox_port02_cmptype->setFont(font4);
        comboBox_port02_cmptype->setLayoutDirection(Qt::LeftToRight);
        comboBox_port02_cmptype->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-top-left-radius: 15px;\n"
"border-bottom-left-radius: 15px;\n"
"}\n"
"\n"
"QComboBox::drop-down{\n"
"width: 20;\n"
"}\n"
"QComboBox:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        comboBox_port02_cmptype->setEditable(true);
        frame_port02_onOff = new QFrame(groupBox_2);
        frame_port02_onOff->setObjectName(QString::fromUtf8("frame_port02_onOff"));
        frame_port02_onOff->setGeometry(QRect(10, 40, 471, 41));
        frame_port02_onOff->setFrameShape(QFrame::Box);
        frame_port02_onOff->setFrameShadow(QFrame::Sunken);
        toolButton_port02_off = new QToolButton(frame_port02_onOff);
        toolButton_port02_off->setObjectName(QString::fromUtf8("toolButton_port02_off"));
        toolButton_port02_off->setGeometry(QRect(320, 6, 101, 30));
        toolButton_port02_off->setFont(font3);
        toolButton_port02_off->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 127);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 6px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(120, 210, 240);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_port02_off->setIconSize(QSize(50, 50));
        toolButton_port02_off->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_port02_off->setAutoRaise(true);
        toolButton_port02_on = new QToolButton(frame_port02_onOff);
        toolButton_port02_on->setObjectName(QString::fromUtf8("toolButton_port02_on"));
        toolButton_port02_on->setGeometry(QRect(210, 5, 101, 30));
        toolButton_port02_on->setFont(font3);
        toolButton_port02_on->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 127);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 6px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(120, 210, 240);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_port02_on->setIconSize(QSize(50, 50));
        toolButton_port02_on->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_port02_on->setAutoRaise(true);
        label_23 = new QLabel(frame_port02_onOff);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 10, 191, 20));
        label_23->setFont(font3);
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);"));
        toolButton_port02_led = new QToolButton(frame_port02_onOff);
        toolButton_port02_led->setObjectName(QString::fromUtf8("toolButton_port02_led"));
        toolButton_port02_led->setGeometry(QRect(430, 5, 30, 30));
        toolButton_port02_led->setFont(font3);
        toolButton_port02_led->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"background-color: rgb(0, 255, 0);\n"
"	background-color: rgb(120, 120, 120);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 15px;\n"
"}\n"
""));
        toolButton_port02_led->setIconSize(QSize(50, 50));
        toolButton_port02_led->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_port02_led->setAutoRaise(true);
        label_port02 = new QLabel(groupBox_2);
        label_port02->setObjectName(QString::fromUtf8("label_port02"));
        label_port02->setGeometry(QRect(0, 0, 491, 31));
        label_port02->setFont(font5);
        label_port02->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(170, 0, 255);"));
        label_port02->setAlignment(Qt::AlignCenter);
        frame_port02_pwm = new QFrame(groupBox_2);
        frame_port02_pwm->setObjectName(QString::fromUtf8("frame_port02_pwm"));
        frame_port02_pwm->setGeometry(QRect(10, 79, 471, 41));
        frame_port02_pwm->setFrameShape(QFrame::Box);
        frame_port02_pwm->setFrameShadow(QFrame::Sunken);
        label_26 = new QLabel(frame_port02_pwm);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 10, 191, 20));
        label_26->setFont(font3);
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 127);\n"
"color: rgb(148, 148, 110);"));
        label_27 = new QLabel(frame_port02_pwm);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(320, 10, 71, 20));
        label_27->setFont(font3);
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        spinBox_port02_duty = new QSpinBox(frame_port02_pwm);
        spinBox_port02_duty->setObjectName(QString::fromUtf8("spinBox_port02_duty"));
        spinBox_port02_duty->setGeometry(QRect(392, 5, 71, 30));
        spinBox_port02_duty->setFont(font3);
        spinBox_port02_duty->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_port02_duty->setAlignment(Qt::AlignCenter);
        spinBox_port02_duty->setMinimum(0);
        spinBox_port02_duty->setMaximum(100);
        spinBox_port02_duty->setValue(50);
        toolButton_port02_pwm = new QToolButton(frame_port02_pwm);
        toolButton_port02_pwm->setObjectName(QString::fromUtf8("toolButton_port02_pwm"));
        toolButton_port02_pwm->setGeometry(QRect(210, 5, 101, 30));
        toolButton_port02_pwm->setFont(font3);
        toolButton_port02_pwm->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 127);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 6px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(230, 230, 170);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_port02_pwm->setIconSize(QSize(50, 50));
        toolButton_port02_pwm->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_port02_pwm->setAutoRaise(true);
        FrmDeviceAlarm->setCentralWidget(centralwidget);

        retranslateUi(FrmDeviceAlarm);

        QMetaObject::connectSlotsByName(FrmDeviceAlarm);
    } // setupUi

    void retranslateUi(QMainWindow *FrmDeviceAlarm)
    {
        FrmDeviceAlarm->setWindowTitle(QCoreApplication::translate("FrmDeviceAlarm", "MainWindow", nullptr));
        label_Name->setText(QCoreApplication::translate("FrmDeviceAlarm", "C\341\272\243m bi\341\272\277n", nullptr));
        label_25->setText(QCoreApplication::translate("FrmDeviceAlarm", "Gi\303\241 tr\341\273\213 \304\221o", nullptr));
        label_sensorUnit->setText(QCoreApplication::translate("FrmDeviceAlarm", "( )", nullptr));
        label_sensorValue->setText(QCoreApplication::translate("FrmDeviceAlarm", "0", nullptr));
        groupBox_1->setTitle(QString());
        checkBox_port01_enable->setText(QCoreApplication::translate("FrmDeviceAlarm", "Cho ph\303\251p \304\221i\341\273\201u khi\341\273\203n c\341\272\243nh b\303\241o c\341\273\225ng s\341\273\221 1", nullptr));
        label_13->setText(QCoreApplication::translate("FrmDeviceAlarm", "Ch\341\273\215n ch\341\272\277 \304\221\341\273\231", nullptr));
        comboBox_port01_mode->setItemText(0, QCoreApplication::translate("FrmDeviceAlarm", "\304\220\341\272\247u ra ki\341\273\203u B\341\272\255t/T\341\272\257t", nullptr));
        comboBox_port01_mode->setItemText(1, QCoreApplication::translate("FrmDeviceAlarm", "\304\220\341\272\247u ra theo c\341\272\245p \304\221\341\273\231", nullptr));

        comboBox_port01_cmptype->setItemText(0, QCoreApplication::translate("FrmDeviceAlarm", "Hai bi\303\252n (Gi\303\241 tr\341\273\213 \304\221o d\306\260\341\273\233i Ng\306\260\341\273\241ng th\341\272\245p, tr\303\252n Ng\306\260\341\273\241ng cao)", nullptr));
        comboBox_port01_cmptype->setItemText(1, QCoreApplication::translate("FrmDeviceAlarm", "N\341\272\261m gi\341\273\257a (Gi\303\241 tr\341\273\213 \304\221o \341\273\237 gi\341\273\257a Ng\306\260\341\273\241ng th\341\272\245p v\303\240 Ng\306\260\341\273\241ng cao)", nullptr));

        label_15->setText(QCoreApplication::translate("FrmDeviceAlarm", "Ki\341\273\203u so s\303\241nh", nullptr));
        label_16->setText(QCoreApplication::translate("FrmDeviceAlarm", "Ng\306\260\341\273\241ng c\341\272\243nh b\303\241o", nullptr));
        label_17->setText(QCoreApplication::translate("FrmDeviceAlarm", "Th\341\273\235i gian B\341\272\255t", nullptr));
        lineEdit_port01_threLow->setText(QCoreApplication::translate("FrmDeviceAlarm", "0", nullptr));
        label_port01_low->setText(QCoreApplication::translate("FrmDeviceAlarm", "Th\341\272\245p", nullptr));
        label_port01_medium->setText(QCoreApplication::translate("FrmDeviceAlarm", "Trung b\303\254nh", nullptr));
        lineEdit_port01_threMedium->setText(QCoreApplication::translate("FrmDeviceAlarm", "1", nullptr));
        label_port01_high->setText(QCoreApplication::translate("FrmDeviceAlarm", "Cao", nullptr));
        lineEdit_port01_threHigh->setText(QCoreApplication::translate("FrmDeviceAlarm", "2", nullptr));
        toolButton_port01_update->setText(QCoreApplication::translate("FrmDeviceAlarm", "C\341\272\255p nh\341\272\255t tham s\341\273\221", nullptr));
        toolButton_port01_off->setText(QCoreApplication::translate("FrmDeviceAlarm", "T\341\272\257t", nullptr));
        toolButton_port01_on->setText(QCoreApplication::translate("FrmDeviceAlarm", "B\341\272\255t", nullptr));
        label_14->setText(QCoreApplication::translate("FrmDeviceAlarm", "\304\220i\341\273\201u khi\341\273\203n c\341\272\243nh b\303\241o b\341\272\261ng tay", nullptr));
        toolButton_port01_led->setText(QString());
        label_port01->setText(QCoreApplication::translate("FrmDeviceAlarm", "C\341\273\225ng s\341\273\221 1", nullptr));
        label_18->setText(QCoreApplication::translate("FrmDeviceAlarm", "\304\220i\341\273\201u khi\341\273\203n b\341\272\261ng t\303\255n hi\341\273\207u PWM", nullptr));
        toolButton_port01_pwm->setText(QCoreApplication::translate("FrmDeviceAlarm", "PWM", nullptr));
        label_24->setText(QCoreApplication::translate("FrmDeviceAlarm", "Chu k\341\273\263 (%)", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("FrmDeviceAlarm", "Tho\303\241t", nullptr));
        groupBox_2->setTitle(QString());
        checkBox_port02_enable->setText(QCoreApplication::translate("FrmDeviceAlarm", "Cho ph\303\251p \304\221i\341\273\201u khi\341\273\203n c\341\272\243nh b\303\241o c\341\273\225ng s\341\273\221 2", nullptr));
        label_19->setText(QCoreApplication::translate("FrmDeviceAlarm", "Ch\341\273\215n ch\341\272\277 \304\221\341\273\231", nullptr));
        comboBox_port02_mode->setItemText(0, QCoreApplication::translate("FrmDeviceAlarm", "\304\220\341\272\247u ra ki\341\273\203u B\341\272\255t/T\341\272\257t", nullptr));
        comboBox_port02_mode->setItemText(1, QCoreApplication::translate("FrmDeviceAlarm", "\304\220\341\272\247u ra theo c\341\272\245p \304\221\341\273\231", nullptr));

        label_20->setText(QCoreApplication::translate("FrmDeviceAlarm", "Ki\341\273\203u so s\303\241nh", nullptr));
        label_21->setText(QCoreApplication::translate("FrmDeviceAlarm", "Ng\306\260\341\273\241ng c\341\272\243nh b\303\241o", nullptr));
        label_22->setText(QCoreApplication::translate("FrmDeviceAlarm", "Th\341\273\235i gian B\341\272\255t", nullptr));
        lineEdit_port02_threLow->setText(QCoreApplication::translate("FrmDeviceAlarm", "0", nullptr));
        label_port02_low->setText(QCoreApplication::translate("FrmDeviceAlarm", "Th\341\272\245p", nullptr));
        label_port02_medium->setText(QCoreApplication::translate("FrmDeviceAlarm", "Trung b\303\254nh", nullptr));
        lineEdit_port02_threMedium->setText(QCoreApplication::translate("FrmDeviceAlarm", "1", nullptr));
        label_port02_high->setText(QCoreApplication::translate("FrmDeviceAlarm", "Cao", nullptr));
        lineEdit_port02_threHigh->setText(QCoreApplication::translate("FrmDeviceAlarm", "2", nullptr));
        toolButton_port02_update->setText(QCoreApplication::translate("FrmDeviceAlarm", "C\341\272\255p nh\341\272\255t tham s\341\273\221", nullptr));
        comboBox_port02_cmptype->setItemText(0, QCoreApplication::translate("FrmDeviceAlarm", "Hai bi\303\252n (Gi\303\241 tr\341\273\213 \304\221o d\306\260\341\273\233i Ng\306\260\341\273\241ng th\341\272\245p, tr\303\252n Ng\306\260\341\273\241ng cao)", nullptr));
        comboBox_port02_cmptype->setItemText(1, QCoreApplication::translate("FrmDeviceAlarm", "N\341\272\261m gi\341\273\257a (Gi\303\241 tr\341\273\213 \304\221o \341\273\237 gi\341\273\257a Ng\306\260\341\273\241ng th\341\272\245p v\303\240 Ng\306\260\341\273\241ng cao)", nullptr));

        toolButton_port02_off->setText(QCoreApplication::translate("FrmDeviceAlarm", "T\341\272\257t", nullptr));
        toolButton_port02_on->setText(QCoreApplication::translate("FrmDeviceAlarm", "B\341\272\255t", nullptr));
        label_23->setText(QCoreApplication::translate("FrmDeviceAlarm", "\304\220i\341\273\201u khi\341\273\203n c\341\272\243nh b\303\241o b\341\272\261ng tay", nullptr));
        toolButton_port02_led->setText(QString());
        label_port02->setText(QCoreApplication::translate("FrmDeviceAlarm", "C\341\273\225ng s\341\273\221 2", nullptr));
        label_26->setText(QCoreApplication::translate("FrmDeviceAlarm", "\304\220i\341\273\201u khi\341\273\203n b\341\272\261ng t\303\255n hi\341\273\207u PWM", nullptr));
        label_27->setText(QCoreApplication::translate("FrmDeviceAlarm", "Chu k\341\273\263 (%)", nullptr));
        toolButton_port02_pwm->setText(QCoreApplication::translate("FrmDeviceAlarm", "PWM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmDeviceAlarm: public Ui_FrmDeviceAlarm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMDEVICEALARM_H
