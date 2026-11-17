/********************************************************************************
** Form generated from reading UI file 'widmodulecar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDMODULECAR_H
#define UI_WIDMODULECAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidModuleCar
{
public:
    QFrame *frame;
    QFrame *frame_lcd;
    QLabel *lcd_Unit;
    QLCDNumber *lcdNumber_value;
    QGroupBox *groupBox;
    QRadioButton *radioButton_distance;
    QRadioButton *radioButton_speed;
    QRadioButton *radioButton_acceleration;
    QRadioButton *radioButton_force;
    QLabel *label_distance;
    QLabel *label_speed;
    QLabel *label_acceleration;
    QLabel *label_force;
    QLabel *label_distanceUnit;
    QLabel *label_speedUnit;
    QLabel *label_accelerationUnit;
    QLabel *label_forceUnit;
    QGroupBox *groupBox_2;
    QLabel *label_axisX_degree;
    QLabel *label_axisY_degree;
    QLabel *label_axisZ_degree;
    QLabel *label_distanceUnit_2;
    QLabel *label_distanceUnit_3;
    QLabel *label_distanceUnit_4;
    QLabel *label_distanceUnit_5;
    QLabel *label_distanceUnit_6;
    QGroupBox *groupBox_3;
    QLabel *label_speedUnit_2;
    QLabel *label_timeShutdownCount;
    QLabel *label_accelerationUnit_2;
    QLabel *label_accelerationUnit_3;
    QLabel *label_pin;
    QLabel *label_speedUnit_3;
    QToolButton *toolButton_seOffCar;
    QFrame *frame_2;
    QToolButton *toolButton_setup;
    QLabel *label_CarAddress;
    QLabel *label_CarName;
    QToolButton *toolButton_number;
    QFrame *frame_3;
    QCheckBox *checkBox_sign;
    QCheckBox *checkBox_vector;

    void setupUi(QWidget *WidModuleCar)
    {
        if (WidModuleCar->objectName().isEmpty())
            WidModuleCar->setObjectName(QString::fromUtf8("WidModuleCar"));
        WidModuleCar->resize(250, 432);
        WidModuleCar->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(WidModuleCar);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 250, 431));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame{\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"}\n"
"QFrame#frame:hover{\n"
"background-color: rgb(250, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_lcd = new QFrame(frame);
        frame_lcd->setObjectName(QString::fromUtf8("frame_lcd"));
        frame_lcd->setGeometry(QRect(1, 50, 248, 51));
        frame_lcd->setFrameShape(QFrame::StyledPanel);
        frame_lcd->setFrameShadow(QFrame::Plain);
        lcd_Unit = new QLabel(frame_lcd);
        lcd_Unit->setObjectName(QString::fromUtf8("lcd_Unit"));
        lcd_Unit->setGeometry(QRect(190, 15, 61, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        lcd_Unit->setFont(font);
        lcd_Unit->setStyleSheet(QString::fromUtf8(""));
        lcd_Unit->setAlignment(Qt::AlignCenter);
        lcdNumber_value = new QLCDNumber(frame_lcd);
        lcdNumber_value->setObjectName(QString::fromUtf8("lcdNumber_value"));
        lcdNumber_value->setGeometry(QRect(4, 5, 181, 41));
        lcdNumber_value->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_value->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lcdNumber_value->setFrameShape(QFrame::NoFrame);
        lcdNumber_value->setFrameShadow(QFrame::Plain);
        lcdNumber_value->setLineWidth(1);
        lcdNumber_value->setSmallDecimalPoint(false);
        lcdNumber_value->setDigitCount(6);
        lcdNumber_value->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_value->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_value->setProperty("intValue", QVariant(0));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(1, 130, 248, 125));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        radioButton_distance = new QRadioButton(groupBox);
        radioButton_distance->setObjectName(QString::fromUtf8("radioButton_distance"));
        radioButton_distance->setGeometry(QRect(10, 22, 111, 20));
        QFont font2;
        font2.setPointSize(10);
        radioButton_distance->setFont(font2);
        radioButton_distance->setChecked(true);
        radioButton_speed = new QRadioButton(groupBox);
        radioButton_speed->setObjectName(QString::fromUtf8("radioButton_speed"));
        radioButton_speed->setGeometry(QRect(10, 47, 99, 20));
        radioButton_speed->setFont(font2);
        radioButton_acceleration = new QRadioButton(groupBox);
        radioButton_acceleration->setObjectName(QString::fromUtf8("radioButton_acceleration"));
        radioButton_acceleration->setGeometry(QRect(10, 72, 99, 20));
        radioButton_acceleration->setFont(font2);
        radioButton_force = new QRadioButton(groupBox);
        radioButton_force->setObjectName(QString::fromUtf8("radioButton_force"));
        radioButton_force->setGeometry(QRect(10, 97, 111, 20));
        radioButton_force->setFont(font2);
        label_distance = new QLabel(groupBox);
        label_distance->setObjectName(QString::fromUtf8("label_distance"));
        label_distance->setGeometry(QRect(110, 21, 79, 23));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_distance->setFont(font3);
        label_distance->setStyleSheet(QString::fromUtf8(""));
        label_distance->setAlignment(Qt::AlignCenter);
        label_speed = new QLabel(groupBox);
        label_speed->setObjectName(QString::fromUtf8("label_speed"));
        label_speed->setGeometry(QRect(110, 46, 79, 23));
        label_speed->setFont(font3);
        label_speed->setStyleSheet(QString::fromUtf8(""));
        label_speed->setAlignment(Qt::AlignCenter);
        label_acceleration = new QLabel(groupBox);
        label_acceleration->setObjectName(QString::fromUtf8("label_acceleration"));
        label_acceleration->setGeometry(QRect(110, 71, 79, 23));
        label_acceleration->setFont(font3);
        label_acceleration->setStyleSheet(QString::fromUtf8(""));
        label_acceleration->setAlignment(Qt::AlignCenter);
        label_force = new QLabel(groupBox);
        label_force->setObjectName(QString::fromUtf8("label_force"));
        label_force->setGeometry(QRect(110, 96, 79, 23));
        label_force->setFont(font3);
        label_force->setStyleSheet(QString::fromUtf8(""));
        label_force->setAlignment(Qt::AlignCenter);
        label_distanceUnit = new QLabel(groupBox);
        label_distanceUnit->setObjectName(QString::fromUtf8("label_distanceUnit"));
        label_distanceUnit->setGeometry(QRect(190, 20, 55, 23));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(false);
        label_distanceUnit->setFont(font4);
        label_distanceUnit->setStyleSheet(QString::fromUtf8(""));
        label_distanceUnit->setAlignment(Qt::AlignCenter);
        label_speedUnit = new QLabel(groupBox);
        label_speedUnit->setObjectName(QString::fromUtf8("label_speedUnit"));
        label_speedUnit->setGeometry(QRect(190, 45, 55, 23));
        label_speedUnit->setFont(font4);
        label_speedUnit->setStyleSheet(QString::fromUtf8(""));
        label_speedUnit->setAlignment(Qt::AlignCenter);
        label_accelerationUnit = new QLabel(groupBox);
        label_accelerationUnit->setObjectName(QString::fromUtf8("label_accelerationUnit"));
        label_accelerationUnit->setGeometry(QRect(190, 70, 55, 23));
        label_accelerationUnit->setFont(font4);
        label_accelerationUnit->setStyleSheet(QString::fromUtf8(""));
        label_accelerationUnit->setAlignment(Qt::AlignCenter);
        label_forceUnit = new QLabel(groupBox);
        label_forceUnit->setObjectName(QString::fromUtf8("label_forceUnit"));
        label_forceUnit->setGeometry(QRect(190, 95, 55, 23));
        label_forceUnit->setFont(font4);
        label_forceUnit->setStyleSheet(QString::fromUtf8(""));
        label_forceUnit->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(1, 260, 248, 71));
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        label_axisX_degree = new QLabel(groupBox_2);
        label_axisX_degree->setObjectName(QString::fromUtf8("label_axisX_degree"));
        label_axisX_degree->setGeometry(QRect(5, 40, 61, 23));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        label_axisX_degree->setFont(font5);
        label_axisX_degree->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_axisX_degree->setAlignment(Qt::AlignCenter);
        label_axisY_degree = new QLabel(groupBox_2);
        label_axisY_degree->setObjectName(QString::fromUtf8("label_axisY_degree"));
        label_axisY_degree->setGeometry(QRect(70, 40, 61, 23));
        label_axisY_degree->setFont(font5);
        label_axisY_degree->setStyleSheet(QString::fromUtf8(""));
        label_axisY_degree->setAlignment(Qt::AlignCenter);
        label_axisZ_degree = new QLabel(groupBox_2);
        label_axisZ_degree->setObjectName(QString::fromUtf8("label_axisZ_degree"));
        label_axisZ_degree->setGeometry(QRect(135, 40, 61, 23));
        label_axisZ_degree->setFont(font5);
        label_axisZ_degree->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        label_axisZ_degree->setAlignment(Qt::AlignCenter);
        label_distanceUnit_2 = new QLabel(groupBox_2);
        label_distanceUnit_2->setObjectName(QString::fromUtf8("label_distanceUnit_2"));
        label_distanceUnit_2->setGeometry(QRect(204, 40, 41, 23));
        label_distanceUnit_2->setFont(font4);
        label_distanceUnit_2->setStyleSheet(QString::fromUtf8(""));
        label_distanceUnit_2->setAlignment(Qt::AlignCenter);
        label_distanceUnit_3 = new QLabel(groupBox_2);
        label_distanceUnit_3->setObjectName(QString::fromUtf8("label_distanceUnit_3"));
        label_distanceUnit_3->setGeometry(QRect(10, 20, 51, 23));
        label_distanceUnit_3->setFont(font4);
        label_distanceUnit_3->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_distanceUnit_3->setAlignment(Qt::AlignCenter);
        label_distanceUnit_4 = new QLabel(groupBox_2);
        label_distanceUnit_4->setObjectName(QString::fromUtf8("label_distanceUnit_4"));
        label_distanceUnit_4->setGeometry(QRect(75, 20, 51, 23));
        label_distanceUnit_4->setFont(font4);
        label_distanceUnit_4->setStyleSheet(QString::fromUtf8(""));
        label_distanceUnit_4->setAlignment(Qt::AlignCenter);
        label_distanceUnit_5 = new QLabel(groupBox_2);
        label_distanceUnit_5->setObjectName(QString::fromUtf8("label_distanceUnit_5"));
        label_distanceUnit_5->setGeometry(QRect(140, 20, 51, 23));
        label_distanceUnit_5->setFont(font4);
        label_distanceUnit_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        label_distanceUnit_5->setAlignment(Qt::AlignCenter);
        label_distanceUnit_6 = new QLabel(groupBox_2);
        label_distanceUnit_6->setObjectName(QString::fromUtf8("label_distanceUnit_6"));
        label_distanceUnit_6->setGeometry(QRect(204, 20, 41, 23));
        label_distanceUnit_6->setFont(font4);
        label_distanceUnit_6->setStyleSheet(QString::fromUtf8(""));
        label_distanceUnit_6->setAlignment(Qt::AlignCenter);
        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(1, 330, 248, 101));
        groupBox_3->setFont(font1);
        groupBox_3->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        label_speedUnit_2 = new QLabel(groupBox_3);
        label_speedUnit_2->setObjectName(QString::fromUtf8("label_speedUnit_2"));
        label_speedUnit_2->setGeometry(QRect(10, 45, 121, 23));
        label_speedUnit_2->setFont(font4);
        label_speedUnit_2->setStyleSheet(QString::fromUtf8(""));
        label_speedUnit_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_timeShutdownCount = new QLabel(groupBox_3);
        label_timeShutdownCount->setObjectName(QString::fromUtf8("label_timeShutdownCount"));
        label_timeShutdownCount->setGeometry(QRect(140, 44, 51, 23));
        QFont font6;
        font6.setPointSize(11);
        font6.setBold(false);
        label_timeShutdownCount->setFont(font6);
        label_timeShutdownCount->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_timeShutdownCount->setAlignment(Qt::AlignCenter);
        label_accelerationUnit_2 = new QLabel(groupBox_3);
        label_accelerationUnit_2->setObjectName(QString::fromUtf8("label_accelerationUnit_2"));
        label_accelerationUnit_2->setGeometry(QRect(200, 43, 41, 23));
        label_accelerationUnit_2->setFont(font4);
        label_accelerationUnit_2->setStyleSheet(QString::fromUtf8(""));
        label_accelerationUnit_2->setAlignment(Qt::AlignCenter);
        label_accelerationUnit_3 = new QLabel(groupBox_3);
        label_accelerationUnit_3->setObjectName(QString::fromUtf8("label_accelerationUnit_3"));
        label_accelerationUnit_3->setGeometry(QRect(200, 18, 41, 23));
        label_accelerationUnit_3->setFont(font4);
        label_accelerationUnit_3->setStyleSheet(QString::fromUtf8(""));
        label_accelerationUnit_3->setAlignment(Qt::AlignCenter);
        label_pin = new QLabel(groupBox_3);
        label_pin->setObjectName(QString::fromUtf8("label_pin"));
        label_pin->setGeometry(QRect(120, 20, 81, 23));
        label_pin->setFont(font4);
        label_pin->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_pin->setAlignment(Qt::AlignCenter);
        label_speedUnit_3 = new QLabel(groupBox_3);
        label_speedUnit_3->setObjectName(QString::fromUtf8("label_speedUnit_3"));
        label_speedUnit_3->setGeometry(QRect(10, 20, 101, 23));
        label_speedUnit_3->setFont(font4);
        label_speedUnit_3->setStyleSheet(QString::fromUtf8(""));
        label_speedUnit_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        toolButton_seOffCar = new QToolButton(groupBox_3);
        toolButton_seOffCar->setObjectName(QString::fromUtf8("toolButton_seOffCar"));
        toolButton_seOffCar->setGeometry(QRect(10, 70, 231, 25));
        toolButton_seOffCar->setFont(font4);
        toolButton_seOffCar->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_seOffCar->setIconSize(QSize(50, 50));
        toolButton_seOffCar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_seOffCar->setAutoRaise(true);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(1, 1, 251, 45));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Sunken);
        toolButton_setup = new QToolButton(frame_2);
        toolButton_setup->setObjectName(QString::fromUtf8("toolButton_setup"));
        toolButton_setup->setGeometry(QRect(217, 2, 31, 41));
        toolButton_setup->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_setup{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(25, 149, 173);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"}\n"
"QToolButton#toolButton_setup:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"background-color: rgb(25, 149, 190);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/group/iconSetup_On.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icon/group/iconSetup_On.jpg"), QSize(), QIcon::Disabled, QIcon::Off);
        toolButton_setup->setIcon(icon);
        toolButton_setup->setIconSize(QSize(20, 20));
        toolButton_setup->setAutoRaise(true);
        label_CarAddress = new QLabel(frame_2);
        label_CarAddress->setObjectName(QString::fromUtf8("label_CarAddress"));
        label_CarAddress->setGeometry(QRect(50, 20, 131, 21));
        label_CarAddress->setFont(font1);
        label_CarAddress->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        label_CarAddress->setAlignment(Qt::AlignCenter);
        label_CarName = new QLabel(frame_2);
        label_CarName->setObjectName(QString::fromUtf8("label_CarName"));
        label_CarName->setGeometry(QRect(50, 0, 131, 21));
        label_CarName->setFont(font1);
        label_CarName->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        label_CarName->setAlignment(Qt::AlignCenter);
        toolButton_number = new QToolButton(frame_2);
        toolButton_number->setObjectName(QString::fromUtf8("toolButton_number"));
        toolButton_number->setGeometry(QRect(2, 2, 41, 41));
        QFont font7;
        font7.setPointSize(18);
        font7.setBold(true);
        toolButton_number->setFont(font7);
        toolButton_number->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(25, 149, 173);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 8px;\n"
"border-radius: 8px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(25, 149, 190);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_number->setIconSize(QSize(55, 55));
        toolButton_number->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_number->setAutoRaise(true);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 100, 251, 31));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        checkBox_sign = new QCheckBox(frame_3);
        checkBox_sign->setObjectName(QString::fromUtf8("checkBox_sign"));
        checkBox_sign->setGeometry(QRect(160, 5, 81, 20));
        checkBox_sign->setFont(font4);
        checkBox_sign->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        checkBox_vector = new QCheckBox(frame_3);
        checkBox_vector->setObjectName(QString::fromUtf8("checkBox_vector"));
        checkBox_vector->setGeometry(QRect(10, 5, 121, 20));
        checkBox_vector->setFont(font4);
        checkBox_vector->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        checkBox_vector->setChecked(false);

        retranslateUi(WidModuleCar);

        QMetaObject::connectSlotsByName(WidModuleCar);
    } // setupUi

    void retranslateUi(QWidget *WidModuleCar)
    {
        WidModuleCar->setWindowTitle(QCoreApplication::translate("WidModuleCar", "Form", nullptr));
        lcd_Unit->setText(QCoreApplication::translate("WidModuleCar", "(m/s2)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WidModuleCar", "Chuy\341\273\203n \304\221\341\273\231ng", nullptr));
        radioButton_distance->setText(QCoreApplication::translate("WidModuleCar", "Qu\303\243ng \304\221\306\260\341\273\235ng", nullptr));
        radioButton_speed->setText(QCoreApplication::translate("WidModuleCar", "V\341\272\255n t\341\273\221c", nullptr));
        radioButton_acceleration->setText(QCoreApplication::translate("WidModuleCar", "Gia t\341\273\221c", nullptr));
        radioButton_force->setText(QCoreApplication::translate("WidModuleCar", "L\341\273\261c t\303\241c \304\221\341\273\231ng", nullptr));
        label_distance->setText(QCoreApplication::translate("WidModuleCar", "0", nullptr));
        label_speed->setText(QCoreApplication::translate("WidModuleCar", "0", nullptr));
        label_acceleration->setText(QCoreApplication::translate("WidModuleCar", "0", nullptr));
        label_force->setText(QCoreApplication::translate("WidModuleCar", "0", nullptr));
        label_distanceUnit->setText(QCoreApplication::translate("WidModuleCar", "(m/s2)", nullptr));
        label_speedUnit->setText(QCoreApplication::translate("WidModuleCar", "(mm/s2)", nullptr));
        label_accelerationUnit->setText(QCoreApplication::translate("WidModuleCar", "(m/s2)", nullptr));
        label_forceUnit->setText(QCoreApplication::translate("WidModuleCar", "(m/s2)", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("WidModuleCar", "\304\220\341\273\231 nghi\303\252ng", nullptr));
        label_axisX_degree->setText(QCoreApplication::translate("WidModuleCar", "0", nullptr));
        label_axisY_degree->setText(QCoreApplication::translate("WidModuleCar", "0", nullptr));
        label_axisZ_degree->setText(QCoreApplication::translate("WidModuleCar", "0", nullptr));
        label_distanceUnit_2->setText(QCoreApplication::translate("WidModuleCar", "(\304\221\341\273\231)", nullptr));
        label_distanceUnit_3->setText(QCoreApplication::translate("WidModuleCar", "Tr\341\273\245c X", nullptr));
        label_distanceUnit_4->setText(QCoreApplication::translate("WidModuleCar", "Tr\341\273\245c Y", nullptr));
        label_distanceUnit_5->setText(QCoreApplication::translate("WidModuleCar", "Tr\341\273\245c Z", nullptr));
        label_distanceUnit_6->setText(QCoreApplication::translate("WidModuleCar", "\304\220\306\241n v\341\273\213", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("WidModuleCar", "Xe \304\221o", nullptr));
        label_speedUnit_2->setText(QCoreApplication::translate("WidModuleCar", "T\341\273\261 \304\221\341\273\231ng t\341\272\257t ngu\341\273\223n:", nullptr));
        label_timeShutdownCount->setText(QCoreApplication::translate("WidModuleCar", "0", nullptr));
        label_accelerationUnit_2->setText(QCoreApplication::translate("WidModuleCar", "(gi\303\242y)", nullptr));
        label_accelerationUnit_3->setText(QCoreApplication::translate("WidModuleCar", "(%)", nullptr));
        label_pin->setText(QCoreApplication::translate("WidModuleCar", "0", nullptr));
        label_speedUnit_3->setText(QCoreApplication::translate("WidModuleCar", "Dung l\306\260\341\273\243ng PIN:", nullptr));
        toolButton_seOffCar->setText(QCoreApplication::translate("WidModuleCar", "T\341\272\257t xe", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_setup->setToolTip(QCoreApplication::translate("WidModuleCar", "C\303\240i \304\221\341\272\267t thi\341\272\277t b\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_setup->setText(QCoreApplication::translate("WidModuleCar", "...", nullptr));
        label_CarAddress->setText(QCoreApplication::translate("WidModuleCar", "000000001", nullptr));
        label_CarName->setText(QCoreApplication::translate("WidModuleCar", "XE-01", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_number->setToolTip(QCoreApplication::translate("WidModuleCar", "Th\303\264ng tin thi\341\272\277t b\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_number->setText(QCoreApplication::translate("WidModuleCar", "01", nullptr));
        checkBox_sign->setText(QCoreApplication::translate("WidModuleCar", "\304\220\341\272\243o d\341\272\245u", nullptr));
        checkBox_vector->setText(QCoreApplication::translate("WidModuleCar", "\304\220o theo vector", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidModuleCar: public Ui_WidModuleCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDMODULECAR_H
