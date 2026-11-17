/********************************************************************************
** Form generated from reading UI file 'frmmodulecarcondition.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMODULECARCONDITION_H
#define UI_FRMMODULECARCONDITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmModuleCarCondition
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label_Name;
    QGroupBox *groupBox;
    QRadioButton *radioButton_Car01_compare;
    QRadioButton *radioButton_Car02_compare;
    QGroupBox *groupBox_2;
    QLabel *label_compareValue;
    QLabel *label_distance;
    QComboBox *comboBox_forceCompare;
    QLabel *label_axisZCompareUnit;
    QLineEdit *lineEdit_accelerationCompareValue;
    QComboBox *comboBox_axisZCompare;
    QLineEdit *lineEdit_forceCompareValue;
    QLabel *label_speed;
    QLabel *label_axisX;
    QLabel *label_axisXCompareUnit;
    QComboBox *comboBox_accelerationCompare;
    QComboBox *comboBox_axisYCompare;
    QLineEdit *lineEdit_speedCompareValue;
    QComboBox *comboBox_distanceCompare;
    QLabel *label_axisY;
    QLabel *label_distanceCompareUnit;
    QLineEdit *lineEdit_distanceCompareValue;
    QLabel *label_forceCompareUnit;
    QLabel *label_speedCompareUnit;
    QComboBox *comboBox_speedCompare;
    QLabel *label_force;
    QLabel *label_compareType;
    QLabel *label_axisYCompareUnit;
    QLineEdit *lineEdit_axisYCompareValue;
    QLineEdit *lineEdit_axisZCompareValue;
    QLabel *label_acceleration;
    QComboBox *comboBox_axisXCompare;
    QLabel *label_accelerationCompareUnit;
    QLineEdit *lineEdit_axisXCompareValue;
    QLabel *label_axisZ;
    QPushButton *pushButton_removeCondition;
    QLabel *label_time;
    QLabel *label_timeCompareUnit;
    QLineEdit *lineEdit_timeCompareValue;
    QComboBox *comboBox_timeCompare;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_ok;

    void setupUi(QMainWindow *FrmModuleCarCondition)
    {
        if (FrmModuleCarCondition->objectName().isEmpty())
            FrmModuleCarCondition->setObjectName(QString::fromUtf8("FrmModuleCarCondition"));
        FrmModuleCarCondition->resize(420, 550);
        FrmModuleCarCondition->setMinimumSize(QSize(420, 550));
        FrmModuleCarCondition->setMaximumSize(QSize(420, 550));
        centralwidget = new QWidget(FrmModuleCarCondition);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 531, 41));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(2,87, 122);"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        label_Name = new QLabel(frame);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setGeometry(QRect(10, 6, 401, 28));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        label_Name->setFont(font);
        label_Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 401, 51));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        radioButton_Car01_compare = new QRadioButton(groupBox);
        radioButton_Car01_compare->setObjectName(QString::fromUtf8("radioButton_Car01_compare"));
        radioButton_Car01_compare->setGeometry(QRect(90, 26, 89, 20));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        radioButton_Car01_compare->setFont(font2);
        radioButton_Car01_compare->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        radioButton_Car01_compare->setChecked(true);
        radioButton_Car02_compare = new QRadioButton(groupBox);
        radioButton_Car02_compare->setObjectName(QString::fromUtf8("radioButton_Car02_compare"));
        radioButton_Car02_compare->setGeometry(QRect(270, 26, 89, 20));
        radioButton_Car02_compare->setFont(font2);
        radioButton_Car02_compare->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 100, 401, 411));
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        label_compareValue = new QLabel(groupBox_2);
        label_compareValue->setObjectName(QString::fromUtf8("label_compareValue"));
        label_compareValue->setGeometry(QRect(270, 30, 101, 20));
        label_compareValue->setFont(font1);
        label_compareValue->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_distance = new QLabel(groupBox_2);
        label_distance->setObjectName(QString::fromUtf8("label_distance"));
        label_distance->setGeometry(QRect(10, 98, 81, 20));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        label_distance->setFont(font3);
        label_distance->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        comboBox_forceCompare = new QComboBox(groupBox_2);
        comboBox_forceCompare->setObjectName(QString::fromUtf8("comboBox_forceCompare"));
        comboBox_forceCompare->setGeometry(QRect(100, 212, 161, 32));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(true);
        comboBox_forceCompare->setFont(font4);
        comboBox_forceCompare->setLayoutDirection(Qt::LeftToRight);
        comboBox_forceCompare->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_forceCompare->setEditable(true);
        label_axisZCompareUnit = new QLabel(groupBox_2);
        label_axisZCompareUnit->setObjectName(QString::fromUtf8("label_axisZCompareUnit"));
        label_axisZCompareUnit->setGeometry(QRect(355, 337, 41, 20));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(false);
        label_axisZCompareUnit->setFont(font5);
        label_axisZCompareUnit->setAlignment(Qt::AlignCenter);
        lineEdit_accelerationCompareValue = new QLineEdit(groupBox_2);
        lineEdit_accelerationCompareValue->setObjectName(QString::fromUtf8("lineEdit_accelerationCompareValue"));
        lineEdit_accelerationCompareValue->setGeometry(QRect(270, 172, 81, 30));
        lineEdit_accelerationCompareValue->setFont(font1);
        lineEdit_accelerationCompareValue->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_accelerationCompareValue->setAlignment(Qt::AlignCenter);
        comboBox_axisZCompare = new QComboBox(groupBox_2);
        comboBox_axisZCompare->setObjectName(QString::fromUtf8("comboBox_axisZCompare"));
        comboBox_axisZCompare->setGeometry(QRect(100, 332, 161, 32));
        comboBox_axisZCompare->setFont(font4);
        comboBox_axisZCompare->setLayoutDirection(Qt::LeftToRight);
        comboBox_axisZCompare->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_axisZCompare->setEditable(true);
        lineEdit_forceCompareValue = new QLineEdit(groupBox_2);
        lineEdit_forceCompareValue->setObjectName(QString::fromUtf8("lineEdit_forceCompareValue"));
        lineEdit_forceCompareValue->setGeometry(QRect(270, 212, 81, 30));
        lineEdit_forceCompareValue->setFont(font1);
        lineEdit_forceCompareValue->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_forceCompareValue->setAlignment(Qt::AlignCenter);
        label_speed = new QLabel(groupBox_2);
        label_speed->setObjectName(QString::fromUtf8("label_speed"));
        label_speed->setGeometry(QRect(10, 138, 81, 20));
        label_speed->setFont(font3);
        label_speed->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_axisX = new QLabel(groupBox_2);
        label_axisX->setObjectName(QString::fromUtf8("label_axisX"));
        label_axisX->setGeometry(QRect(10, 258, 81, 20));
        label_axisX->setFont(font3);
        label_axisX->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_axisXCompareUnit = new QLabel(groupBox_2);
        label_axisXCompareUnit->setObjectName(QString::fromUtf8("label_axisXCompareUnit"));
        label_axisXCompareUnit->setGeometry(QRect(355, 257, 41, 20));
        label_axisXCompareUnit->setFont(font5);
        label_axisXCompareUnit->setAlignment(Qt::AlignCenter);
        comboBox_accelerationCompare = new QComboBox(groupBox_2);
        comboBox_accelerationCompare->setObjectName(QString::fromUtf8("comboBox_accelerationCompare"));
        comboBox_accelerationCompare->setGeometry(QRect(100, 172, 161, 32));
        comboBox_accelerationCompare->setFont(font4);
        comboBox_accelerationCompare->setLayoutDirection(Qt::LeftToRight);
        comboBox_accelerationCompare->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_accelerationCompare->setEditable(true);
        comboBox_axisYCompare = new QComboBox(groupBox_2);
        comboBox_axisYCompare->setObjectName(QString::fromUtf8("comboBox_axisYCompare"));
        comboBox_axisYCompare->setGeometry(QRect(100, 292, 161, 32));
        comboBox_axisYCompare->setFont(font4);
        comboBox_axisYCompare->setLayoutDirection(Qt::LeftToRight);
        comboBox_axisYCompare->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_axisYCompare->setEditable(true);
        lineEdit_speedCompareValue = new QLineEdit(groupBox_2);
        lineEdit_speedCompareValue->setObjectName(QString::fromUtf8("lineEdit_speedCompareValue"));
        lineEdit_speedCompareValue->setGeometry(QRect(270, 132, 81, 30));
        lineEdit_speedCompareValue->setFont(font1);
        lineEdit_speedCompareValue->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_speedCompareValue->setAlignment(Qt::AlignCenter);
        comboBox_distanceCompare = new QComboBox(groupBox_2);
        comboBox_distanceCompare->setObjectName(QString::fromUtf8("comboBox_distanceCompare"));
        comboBox_distanceCompare->setGeometry(QRect(100, 92, 161, 32));
        comboBox_distanceCompare->setFont(font4);
        comboBox_distanceCompare->setLayoutDirection(Qt::LeftToRight);
        comboBox_distanceCompare->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}"));
        comboBox_distanceCompare->setEditable(true);
        label_axisY = new QLabel(groupBox_2);
        label_axisY->setObjectName(QString::fromUtf8("label_axisY"));
        label_axisY->setGeometry(QRect(10, 298, 81, 20));
        label_axisY->setFont(font3);
        label_axisY->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_distanceCompareUnit = new QLabel(groupBox_2);
        label_distanceCompareUnit->setObjectName(QString::fromUtf8("label_distanceCompareUnit"));
        label_distanceCompareUnit->setGeometry(QRect(355, 97, 41, 20));
        label_distanceCompareUnit->setFont(font5);
        label_distanceCompareUnit->setAlignment(Qt::AlignCenter);
        lineEdit_distanceCompareValue = new QLineEdit(groupBox_2);
        lineEdit_distanceCompareValue->setObjectName(QString::fromUtf8("lineEdit_distanceCompareValue"));
        lineEdit_distanceCompareValue->setGeometry(QRect(270, 92, 81, 30));
        lineEdit_distanceCompareValue->setFont(font1);
        lineEdit_distanceCompareValue->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_distanceCompareValue->setAlignment(Qt::AlignCenter);
        label_forceCompareUnit = new QLabel(groupBox_2);
        label_forceCompareUnit->setObjectName(QString::fromUtf8("label_forceCompareUnit"));
        label_forceCompareUnit->setGeometry(QRect(355, 217, 41, 20));
        label_forceCompareUnit->setFont(font5);
        label_forceCompareUnit->setAlignment(Qt::AlignCenter);
        label_speedCompareUnit = new QLabel(groupBox_2);
        label_speedCompareUnit->setObjectName(QString::fromUtf8("label_speedCompareUnit"));
        label_speedCompareUnit->setGeometry(QRect(355, 137, 41, 20));
        label_speedCompareUnit->setFont(font5);
        label_speedCompareUnit->setAlignment(Qt::AlignCenter);
        comboBox_speedCompare = new QComboBox(groupBox_2);
        comboBox_speedCompare->setObjectName(QString::fromUtf8("comboBox_speedCompare"));
        comboBox_speedCompare->setGeometry(QRect(100, 132, 161, 32));
        comboBox_speedCompare->setFont(font4);
        comboBox_speedCompare->setLayoutDirection(Qt::LeftToRight);
        comboBox_speedCompare->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_speedCompare->setEditable(true);
        label_force = new QLabel(groupBox_2);
        label_force->setObjectName(QString::fromUtf8("label_force"));
        label_force->setGeometry(QRect(10, 218, 81, 20));
        label_force->setFont(font3);
        label_force->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_compareType = new QLabel(groupBox_2);
        label_compareType->setObjectName(QString::fromUtf8("label_compareType"));
        label_compareType->setGeometry(QRect(140, 29, 91, 20));
        label_compareType->setFont(font1);
        label_compareType->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_axisYCompareUnit = new QLabel(groupBox_2);
        label_axisYCompareUnit->setObjectName(QString::fromUtf8("label_axisYCompareUnit"));
        label_axisYCompareUnit->setGeometry(QRect(355, 297, 41, 20));
        label_axisYCompareUnit->setFont(font5);
        label_axisYCompareUnit->setAlignment(Qt::AlignCenter);
        lineEdit_axisYCompareValue = new QLineEdit(groupBox_2);
        lineEdit_axisYCompareValue->setObjectName(QString::fromUtf8("lineEdit_axisYCompareValue"));
        lineEdit_axisYCompareValue->setGeometry(QRect(270, 292, 81, 30));
        lineEdit_axisYCompareValue->setFont(font1);
        lineEdit_axisYCompareValue->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_axisYCompareValue->setAlignment(Qt::AlignCenter);
        lineEdit_axisZCompareValue = new QLineEdit(groupBox_2);
        lineEdit_axisZCompareValue->setObjectName(QString::fromUtf8("lineEdit_axisZCompareValue"));
        lineEdit_axisZCompareValue->setGeometry(QRect(270, 332, 81, 30));
        lineEdit_axisZCompareValue->setFont(font1);
        lineEdit_axisZCompareValue->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_axisZCompareValue->setAlignment(Qt::AlignCenter);
        label_acceleration = new QLabel(groupBox_2);
        label_acceleration->setObjectName(QString::fromUtf8("label_acceleration"));
        label_acceleration->setGeometry(QRect(10, 178, 81, 20));
        label_acceleration->setFont(font3);
        label_acceleration->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        comboBox_axisXCompare = new QComboBox(groupBox_2);
        comboBox_axisXCompare->setObjectName(QString::fromUtf8("comboBox_axisXCompare"));
        comboBox_axisXCompare->setGeometry(QRect(100, 252, 161, 32));
        comboBox_axisXCompare->setFont(font4);
        comboBox_axisXCompare->setLayoutDirection(Qt::LeftToRight);
        comboBox_axisXCompare->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_axisXCompare->setEditable(true);
        label_accelerationCompareUnit = new QLabel(groupBox_2);
        label_accelerationCompareUnit->setObjectName(QString::fromUtf8("label_accelerationCompareUnit"));
        label_accelerationCompareUnit->setGeometry(QRect(355, 177, 41, 20));
        label_accelerationCompareUnit->setFont(font5);
        label_accelerationCompareUnit->setAlignment(Qt::AlignCenter);
        lineEdit_axisXCompareValue = new QLineEdit(groupBox_2);
        lineEdit_axisXCompareValue->setObjectName(QString::fromUtf8("lineEdit_axisXCompareValue"));
        lineEdit_axisXCompareValue->setGeometry(QRect(270, 252, 81, 30));
        lineEdit_axisXCompareValue->setFont(font1);
        lineEdit_axisXCompareValue->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_axisXCompareValue->setAlignment(Qt::AlignCenter);
        label_axisZ = new QLabel(groupBox_2);
        label_axisZ->setObjectName(QString::fromUtf8("label_axisZ"));
        label_axisZ->setGeometry(QRect(10, 338, 81, 20));
        label_axisZ->setFont(font3);
        label_axisZ->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        pushButton_removeCondition = new QPushButton(groupBox_2);
        pushButton_removeCondition->setObjectName(QString::fromUtf8("pushButton_removeCondition"));
        pushButton_removeCondition->setGeometry(QRect(110, 370, 131, 30));
        QFont font6;
        font6.setPointSize(9);
        font6.setBold(false);
        pushButton_removeCondition->setFont(font6);
        pushButton_removeCondition->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 255);"));
        label_time = new QLabel(groupBox_2);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(10, 56, 81, 20));
        label_time->setFont(font3);
        label_time->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_timeCompareUnit = new QLabel(groupBox_2);
        label_timeCompareUnit->setObjectName(QString::fromUtf8("label_timeCompareUnit"));
        label_timeCompareUnit->setGeometry(QRect(355, 55, 41, 20));
        label_timeCompareUnit->setFont(font5);
        label_timeCompareUnit->setAlignment(Qt::AlignCenter);
        lineEdit_timeCompareValue = new QLineEdit(groupBox_2);
        lineEdit_timeCompareValue->setObjectName(QString::fromUtf8("lineEdit_timeCompareValue"));
        lineEdit_timeCompareValue->setGeometry(QRect(270, 50, 81, 30));
        lineEdit_timeCompareValue->setFont(font1);
        lineEdit_timeCompareValue->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_timeCompareValue->setAlignment(Qt::AlignCenter);
        comboBox_timeCompare = new QComboBox(groupBox_2);
        comboBox_timeCompare->setObjectName(QString::fromUtf8("comboBox_timeCompare"));
        comboBox_timeCompare->setGeometry(QRect(100, 50, 161, 32));
        comboBox_timeCompare->setFont(font4);
        comboBox_timeCompare->setLayoutDirection(Qt::LeftToRight);
        comboBox_timeCompare->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}"));
        comboBox_timeCompare->setEditable(true);
        pushButton_cancel = new QPushButton(centralwidget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(330, 515, 81, 30));
        pushButton_cancel->setFont(font5);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_ok = new QPushButton(centralwidget);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(120, 515, 201, 30));
        pushButton_ok->setFont(font1);
        pushButton_ok->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);\n"
"color: rgb(170, 0, 0);"));
        FrmModuleCarCondition->setCentralWidget(centralwidget);

        retranslateUi(FrmModuleCarCondition);

        QMetaObject::connectSlotsByName(FrmModuleCarCondition);
    } // setupUi

    void retranslateUi(QMainWindow *FrmModuleCarCondition)
    {
        FrmModuleCarCondition->setWindowTitle(QCoreApplication::translate("FrmModuleCarCondition", "MainWindow", nullptr));
        label_Name->setText(QCoreApplication::translate("FrmModuleCarCondition", "\304\220i\341\273\201u ki\341\273\207n b\341\272\257t \304\221\341\272\247u", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FrmModuleCarCondition", "Ch\341\273\215n lo\341\272\241i xe", nullptr));
        radioButton_Car01_compare->setText(QCoreApplication::translate("FrmModuleCarCondition", "XE-01", nullptr));
        radioButton_Car02_compare->setText(QCoreApplication::translate("FrmModuleCarCondition", "XE-02", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FrmModuleCarCondition", "Ch\341\273\215n tham s\341\273\221 so s\303\241nh", nullptr));
        label_compareValue->setText(QCoreApplication::translate("FrmModuleCarCondition", "Gi\303\241 tr\341\273\213 so s\303\241nh", nullptr));
        label_distance->setText(QCoreApplication::translate("FrmModuleCarCondition", "Qu\303\243ng \304\221\306\260\341\273\235ng", nullptr));
        label_axisZCompareUnit->setText(QCoreApplication::translate("FrmModuleCarCondition", "(mm)", nullptr));
        lineEdit_accelerationCompareValue->setText(QCoreApplication::translate("FrmModuleCarCondition", "0", nullptr));
        lineEdit_forceCompareValue->setText(QCoreApplication::translate("FrmModuleCarCondition", "0", nullptr));
        label_speed->setText(QCoreApplication::translate("FrmModuleCarCondition", "V\341\272\255n t\341\273\221c", nullptr));
        label_axisX->setText(QCoreApplication::translate("FrmModuleCarCondition", "Tr\341\273\245c X", nullptr));
        label_axisXCompareUnit->setText(QCoreApplication::translate("FrmModuleCarCondition", "(mm)", nullptr));
        lineEdit_speedCompareValue->setText(QCoreApplication::translate("FrmModuleCarCondition", "0", nullptr));
        label_axisY->setText(QCoreApplication::translate("FrmModuleCarCondition", "Tr\341\273\245c Y", nullptr));
        label_distanceCompareUnit->setText(QCoreApplication::translate("FrmModuleCarCondition", "(mm)", nullptr));
        lineEdit_distanceCompareValue->setText(QCoreApplication::translate("FrmModuleCarCondition", "0", nullptr));
        label_forceCompareUnit->setText(QCoreApplication::translate("FrmModuleCarCondition", "(mm)", nullptr));
        label_speedCompareUnit->setText(QCoreApplication::translate("FrmModuleCarCondition", "(mm)", nullptr));
        label_force->setText(QCoreApplication::translate("FrmModuleCarCondition", "L\341\273\261c t\303\241c \304\221\341\273\231ng", nullptr));
        label_compareType->setText(QCoreApplication::translate("FrmModuleCarCondition", "Ki\341\273\203u so s\303\241nh", nullptr));
        label_axisYCompareUnit->setText(QCoreApplication::translate("FrmModuleCarCondition", "(mm)", nullptr));
        lineEdit_axisYCompareValue->setText(QCoreApplication::translate("FrmModuleCarCondition", "0", nullptr));
        lineEdit_axisZCompareValue->setText(QCoreApplication::translate("FrmModuleCarCondition", "0", nullptr));
        label_acceleration->setText(QCoreApplication::translate("FrmModuleCarCondition", "Gia t\341\273\221c", nullptr));
        label_accelerationCompareUnit->setText(QCoreApplication::translate("FrmModuleCarCondition", "(mm)", nullptr));
        lineEdit_axisXCompareValue->setText(QCoreApplication::translate("FrmModuleCarCondition", "0", nullptr));
        label_axisZ->setText(QCoreApplication::translate("FrmModuleCarCondition", "Tr\341\273\245c Z", nullptr));
        pushButton_removeCondition->setText(QCoreApplication::translate("FrmModuleCarCondition", "X\303\263a \304\221i\341\273\201u ki\341\273\207n", nullptr));
        label_time->setText(QCoreApplication::translate("FrmModuleCarCondition", "Th\341\273\235i gian", nullptr));
        label_timeCompareUnit->setText(QCoreApplication::translate("FrmModuleCarCondition", "(gi\303\242y)", nullptr));
        lineEdit_timeCompareValue->setText(QCoreApplication::translate("FrmModuleCarCondition", "0", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("FrmModuleCarCondition", "Tho\303\241t", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("FrmModuleCarCondition", "C\341\272\255p nh\341\272\255t tham s\341\273\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmModuleCarCondition: public Ui_FrmModuleCarCondition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMODULECARCONDITION_H
