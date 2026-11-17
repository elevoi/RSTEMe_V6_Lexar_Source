/********************************************************************************
** Form generated from reading UI file 'frmmodulecarsetup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMODULECARSETUP_H
#define UI_FRMMODULECARSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmModuleCarSetup
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QComboBox *comboBox_resolutionDistance;
    QComboBox *comboBox_unitDistance;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_14;
    QComboBox *comboBox_resolutionSpeed;
    QLabel *label_15;
    QComboBox *comboBox_unitSpeed;
    QComboBox *comboBox_resolutionAcceleration;
    QLabel *label_16;
    QComboBox *comboBox_unitAcceleration;
    QComboBox *comboBox_resolutionForce;
    QLabel *label_17;
    QComboBox *comboBox_unitForce;
    QComboBox *comboBox_resolutionAxisX;
    QComboBox *comboBox_unitAxisX;
    QLabel *label_18;
    QComboBox *comboBox_resolutionAxisY;
    QComboBox *comboBox_unitAxisY;
    QLabel *label_19;
    QComboBox *comboBox_resolutionAxisZ;
    QComboBox *comboBox_unitAxisZ;
    QLabel *label_20;
    QWidget *tab_control;
    QGroupBox *groupBox;
    QLabel *label_zeroText;
    QToolButton *toolButton_setZeroDistance;
    QFrame *line_2;
    QToolButton *toolButton_setZeroForce;
    QLabel *label_zeroText_2;
    QLabel *label_zeroText_8;
    QFrame *line_7;
    QToolButton *toolButton_setZerAxis;
    QToolButton *toolButton_setOffsetAxis;
    QGroupBox *groupBox_2;
    QLabel *label_zeroText_3;
    QToolButton *toolButton_setTimeShutdown;
    QLabel *label_Unit_2;
    QSpinBox *spinBox_timeShutdown;
    QFrame *line_3;
    QLabel *label_zeroText_7;
    QSpinBox *spinBox_addressByte0;
    QToolButton *toolButton_setAddress;
    QSpinBox *spinBox_addressByte1;
    QSpinBox *spinBox_addressByte2;
    QSpinBox *spinBox_addressByte3;
    QWidget *tab_calib;
    QToolButton *toolButton_setCountPerShutdown;
    QLabel *label_zeroText_4;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QLabel *label_Unit_3;
    QSpinBox *spinBox_countPerShutdown;
    QLineEdit *lineEdit_calibDistance;
    QLabel *label_zeroText_5;
    QToolButton *toolButton_setCalibDistance;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_calibDistanceUnit;
    QLabel *label_calibDistance;
    QToolButton *toolButton_setCalibForce;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_calibForceUnit;
    QLineEdit *lineEdit_calibForce;
    QLabel *label_calibForce;
    QLabel *label_zeroText_6;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab_2;
    QLabel *label_frameError;
    QLabel *label_zeroText_9;
    QFrame *line_8;
    QToolButton *toolButton_clearFrameError;
    QToolButton *toolButton_setCarSampleTime;
    QSpinBox *spinBox_carSampleTime;
    QLabel *label_Unit_4;
    QLabel *label_zeroText_10;
    QFrame *frame;
    QLabel *label_Name;
    QPushButton *pushButton_cancel;

    void setupUi(QMainWindow *FrmModuleCarSetup)
    {
        if (FrmModuleCarSetup->objectName().isEmpty())
            FrmModuleCarSetup->setObjectName(QString::fromUtf8("FrmModuleCarSetup"));
        FrmModuleCarSetup->resize(420, 440);
        FrmModuleCarSetup->setMinimumSize(QSize(420, 440));
        FrmModuleCarSetup->setMaximumSize(QSize(420, 440));
        FrmModuleCarSetup->setStyleSheet(QString::fromUtf8("background-color: rgb(240,240, 240);"));
        centralwidget = new QWidget(FrmModuleCarSetup);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 40, 421, 351));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        comboBox_resolutionDistance = new QComboBox(tab);
        comboBox_resolutionDistance->addItem(QString());
        comboBox_resolutionDistance->addItem(QString());
        comboBox_resolutionDistance->addItem(QString());
        comboBox_resolutionDistance->addItem(QString());
        comboBox_resolutionDistance->setObjectName(QString::fromUtf8("comboBox_resolutionDistance"));
        comboBox_resolutionDistance->setGeometry(QRect(310, 40, 81, 32));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        comboBox_resolutionDistance->setFont(font1);
        comboBox_resolutionDistance->setLayoutDirection(Qt::LeftToRight);
        comboBox_resolutionDistance->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_resolutionDistance->setEditable(true);
        comboBox_unitDistance = new QComboBox(tab);
        comboBox_unitDistance->setObjectName(QString::fromUtf8("comboBox_unitDistance"));
        comboBox_unitDistance->setGeometry(QRect(150, 40, 131, 32));
        comboBox_unitDistance->setFont(font1);
        comboBox_unitDistance->setLayoutDirection(Qt::LeftToRight);
        comboBox_unitDistance->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}"));
        comboBox_unitDistance->setEditable(true);
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(190, 10, 61, 20));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(310, 10, 81, 21));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 46, 121, 20));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        comboBox_resolutionSpeed = new QComboBox(tab);
        comboBox_resolutionSpeed->addItem(QString());
        comboBox_resolutionSpeed->addItem(QString());
        comboBox_resolutionSpeed->addItem(QString());
        comboBox_resolutionSpeed->addItem(QString());
        comboBox_resolutionSpeed->setObjectName(QString::fromUtf8("comboBox_resolutionSpeed"));
        comboBox_resolutionSpeed->setGeometry(QRect(310, 80, 81, 32));
        comboBox_resolutionSpeed->setFont(font1);
        comboBox_resolutionSpeed->setLayoutDirection(Qt::LeftToRight);
        comboBox_resolutionSpeed->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_resolutionSpeed->setEditable(true);
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 86, 121, 20));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        comboBox_unitSpeed = new QComboBox(tab);
        comboBox_unitSpeed->setObjectName(QString::fromUtf8("comboBox_unitSpeed"));
        comboBox_unitSpeed->setGeometry(QRect(150, 80, 131, 32));
        comboBox_unitSpeed->setFont(font1);
        comboBox_unitSpeed->setLayoutDirection(Qt::LeftToRight);
        comboBox_unitSpeed->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_unitSpeed->setEditable(true);
        comboBox_resolutionAcceleration = new QComboBox(tab);
        comboBox_resolutionAcceleration->addItem(QString());
        comboBox_resolutionAcceleration->addItem(QString());
        comboBox_resolutionAcceleration->addItem(QString());
        comboBox_resolutionAcceleration->addItem(QString());
        comboBox_resolutionAcceleration->setObjectName(QString::fromUtf8("comboBox_resolutionAcceleration"));
        comboBox_resolutionAcceleration->setGeometry(QRect(310, 120, 81, 32));
        comboBox_resolutionAcceleration->setFont(font1);
        comboBox_resolutionAcceleration->setLayoutDirection(Qt::LeftToRight);
        comboBox_resolutionAcceleration->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_resolutionAcceleration->setEditable(true);
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 126, 121, 20));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        comboBox_unitAcceleration = new QComboBox(tab);
        comboBox_unitAcceleration->setObjectName(QString::fromUtf8("comboBox_unitAcceleration"));
        comboBox_unitAcceleration->setGeometry(QRect(150, 120, 131, 32));
        comboBox_unitAcceleration->setFont(font1);
        comboBox_unitAcceleration->setLayoutDirection(Qt::LeftToRight);
        comboBox_unitAcceleration->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_unitAcceleration->setEditable(true);
        comboBox_resolutionForce = new QComboBox(tab);
        comboBox_resolutionForce->addItem(QString());
        comboBox_resolutionForce->addItem(QString());
        comboBox_resolutionForce->addItem(QString());
        comboBox_resolutionForce->addItem(QString());
        comboBox_resolutionForce->setObjectName(QString::fromUtf8("comboBox_resolutionForce"));
        comboBox_resolutionForce->setGeometry(QRect(310, 160, 81, 32));
        comboBox_resolutionForce->setFont(font1);
        comboBox_resolutionForce->setLayoutDirection(Qt::LeftToRight);
        comboBox_resolutionForce->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_resolutionForce->setEditable(true);
        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 166, 121, 20));
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        comboBox_unitForce = new QComboBox(tab);
        comboBox_unitForce->setObjectName(QString::fromUtf8("comboBox_unitForce"));
        comboBox_unitForce->setGeometry(QRect(150, 160, 131, 32));
        comboBox_unitForce->setFont(font1);
        comboBox_unitForce->setLayoutDirection(Qt::LeftToRight);
        comboBox_unitForce->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_unitForce->setEditable(true);
        comboBox_resolutionAxisX = new QComboBox(tab);
        comboBox_resolutionAxisX->addItem(QString());
        comboBox_resolutionAxisX->addItem(QString());
        comboBox_resolutionAxisX->addItem(QString());
        comboBox_resolutionAxisX->addItem(QString());
        comboBox_resolutionAxisX->setObjectName(QString::fromUtf8("comboBox_resolutionAxisX"));
        comboBox_resolutionAxisX->setGeometry(QRect(310, 204, 81, 32));
        comboBox_resolutionAxisX->setFont(font1);
        comboBox_resolutionAxisX->setLayoutDirection(Qt::LeftToRight);
        comboBox_resolutionAxisX->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_resolutionAxisX->setEditable(true);
        comboBox_unitAxisX = new QComboBox(tab);
        comboBox_unitAxisX->setObjectName(QString::fromUtf8("comboBox_unitAxisX"));
        comboBox_unitAxisX->setGeometry(QRect(150, 204, 131, 32));
        comboBox_unitAxisX->setFont(font1);
        comboBox_unitAxisX->setLayoutDirection(Qt::LeftToRight);
        comboBox_unitAxisX->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_unitAxisX->setEditable(true);
        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(20, 210, 121, 20));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        comboBox_resolutionAxisY = new QComboBox(tab);
        comboBox_resolutionAxisY->addItem(QString());
        comboBox_resolutionAxisY->addItem(QString());
        comboBox_resolutionAxisY->addItem(QString());
        comboBox_resolutionAxisY->addItem(QString());
        comboBox_resolutionAxisY->setObjectName(QString::fromUtf8("comboBox_resolutionAxisY"));
        comboBox_resolutionAxisY->setGeometry(QRect(310, 244, 81, 32));
        comboBox_resolutionAxisY->setFont(font1);
        comboBox_resolutionAxisY->setLayoutDirection(Qt::LeftToRight);
        comboBox_resolutionAxisY->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_resolutionAxisY->setEditable(true);
        comboBox_unitAxisY = new QComboBox(tab);
        comboBox_unitAxisY->setObjectName(QString::fromUtf8("comboBox_unitAxisY"));
        comboBox_unitAxisY->setGeometry(QRect(150, 244, 131, 32));
        comboBox_unitAxisY->setFont(font1);
        comboBox_unitAxisY->setLayoutDirection(Qt::LeftToRight);
        comboBox_unitAxisY->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_unitAxisY->setEditable(true);
        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 250, 121, 20));
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        comboBox_resolutionAxisZ = new QComboBox(tab);
        comboBox_resolutionAxisZ->addItem(QString());
        comboBox_resolutionAxisZ->addItem(QString());
        comboBox_resolutionAxisZ->addItem(QString());
        comboBox_resolutionAxisZ->addItem(QString());
        comboBox_resolutionAxisZ->setObjectName(QString::fromUtf8("comboBox_resolutionAxisZ"));
        comboBox_resolutionAxisZ->setGeometry(QRect(310, 284, 81, 32));
        comboBox_resolutionAxisZ->setFont(font1);
        comboBox_resolutionAxisZ->setLayoutDirection(Qt::LeftToRight);
        comboBox_resolutionAxisZ->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_resolutionAxisZ->setEditable(true);
        comboBox_unitAxisZ = new QComboBox(tab);
        comboBox_unitAxisZ->setObjectName(QString::fromUtf8("comboBox_unitAxisZ"));
        comboBox_unitAxisZ->setGeometry(QRect(150, 284, 131, 32));
        comboBox_unitAxisZ->setFont(font1);
        comboBox_unitAxisZ->setLayoutDirection(Qt::LeftToRight);
        comboBox_unitAxisZ->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"}\n"
""));
        comboBox_unitAxisZ->setEditable(true);
        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 290, 121, 20));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        tabWidget->addTab(tab, QString());
        tab_control = new QWidget();
        tab_control->setObjectName(QString::fromUtf8("tab_control"));
        groupBox = new QGroupBox(tab_control);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(-2, 10, 421, 181));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        label_zeroText = new QLabel(groupBox);
        label_zeroText->setObjectName(QString::fromUtf8("label_zeroText"));
        label_zeroText->setGeometry(QRect(20, 30, 211, 20));
        label_zeroText->setFont(font);
        label_zeroText->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        toolButton_setZeroDistance = new QToolButton(groupBox);
        toolButton_setZeroDistance->setObjectName(QString::fromUtf8("toolButton_setZeroDistance"));
        toolButton_setZeroDistance->setGeometry(QRect(240, 26, 111, 30));
        toolButton_setZeroDistance->setFont(font);
        toolButton_setZeroDistance->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_setZeroDistance->setIconSize(QSize(50, 50));
        toolButton_setZeroDistance->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_setZeroDistance->setAutoRaise(true);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(-10, 60, 450, 10));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        toolButton_setZeroForce = new QToolButton(groupBox);
        toolButton_setZeroForce->setObjectName(QString::fromUtf8("toolButton_setZeroForce"));
        toolButton_setZeroForce->setGeometry(QRect(240, 73, 111, 30));
        toolButton_setZeroForce->setFont(font);
        toolButton_setZeroForce->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_setZeroForce->setIconSize(QSize(50, 50));
        toolButton_setZeroForce->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_setZeroForce->setAutoRaise(true);
        label_zeroText_2 = new QLabel(groupBox);
        label_zeroText_2->setObjectName(QString::fromUtf8("label_zeroText_2"));
        label_zeroText_2->setGeometry(QRect(20, 78, 211, 20));
        label_zeroText_2->setFont(font);
        label_zeroText_2->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        label_zeroText_8 = new QLabel(groupBox);
        label_zeroText_8->setObjectName(QString::fromUtf8("label_zeroText_8"));
        label_zeroText_8->setGeometry(QRect(20, 125, 181, 20));
        label_zeroText_8->setFont(font);
        label_zeroText_8->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        line_7 = new QFrame(groupBox);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(-10, 107, 450, 10));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        toolButton_setZerAxis = new QToolButton(groupBox);
        toolButton_setZerAxis->setObjectName(QString::fromUtf8("toolButton_setZerAxis"));
        toolButton_setZerAxis->setGeometry(QRect(240, 120, 81, 30));
        toolButton_setZerAxis->setFont(font);
        toolButton_setZerAxis->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_setZerAxis->setIconSize(QSize(50, 50));
        toolButton_setZerAxis->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_setZerAxis->setAutoRaise(true);
        toolButton_setOffsetAxis = new QToolButton(groupBox);
        toolButton_setOffsetAxis->setObjectName(QString::fromUtf8("toolButton_setOffsetAxis"));
        toolButton_setOffsetAxis->setGeometry(QRect(330, 120, 81, 30));
        toolButton_setOffsetAxis->setFont(font);
        toolButton_setOffsetAxis->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_setOffsetAxis->setIconSize(QSize(50, 50));
        toolButton_setOffsetAxis->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_setOffsetAxis->setAutoRaise(true);
        groupBox_2 = new QGroupBox(tab_control);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(-2, 200, 421, 121));
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        label_zeroText_3 = new QLabel(groupBox_2);
        label_zeroText_3->setObjectName(QString::fromUtf8("label_zeroText_3"));
        label_zeroText_3->setGeometry(QRect(20, 80, 91, 20));
        label_zeroText_3->setFont(font);
        label_zeroText_3->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        toolButton_setTimeShutdown = new QToolButton(groupBox_2);
        toolButton_setTimeShutdown->setObjectName(QString::fromUtf8("toolButton_setTimeShutdown"));
        toolButton_setTimeShutdown->setGeometry(QRect(310, 76, 91, 30));
        toolButton_setTimeShutdown->setFont(font);
        toolButton_setTimeShutdown->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_setTimeShutdown->setIconSize(QSize(50, 50));
        toolButton_setTimeShutdown->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_setTimeShutdown->setAutoRaise(true);
        label_Unit_2 = new QLabel(groupBox_2);
        label_Unit_2->setObjectName(QString::fromUtf8("label_Unit_2"));
        label_Unit_2->setGeometry(QRect(215, 83, 41, 16));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        label_Unit_2->setFont(font2);
        label_Unit_2->setAlignment(Qt::AlignCenter);
        spinBox_timeShutdown = new QSpinBox(groupBox_2);
        spinBox_timeShutdown->setObjectName(QString::fromUtf8("spinBox_timeShutdown"));
        spinBox_timeShutdown->setGeometry(QRect(120, 76, 91, 30));
        spinBox_timeShutdown->setFont(font);
        spinBox_timeShutdown->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_timeShutdown->setAlignment(Qt::AlignCenter);
        spinBox_timeShutdown->setMinimum(10);
        spinBox_timeShutdown->setMaximum(65535);
        spinBox_timeShutdown->setValue(100);
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(-10, 60, 450, 10));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_zeroText_7 = new QLabel(groupBox_2);
        label_zeroText_7->setObjectName(QString::fromUtf8("label_zeroText_7"));
        label_zeroText_7->setGeometry(QRect(20, 24, 71, 20));
        label_zeroText_7->setFont(font);
        label_zeroText_7->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        spinBox_addressByte0 = new QSpinBox(groupBox_2);
        spinBox_addressByte0->setObjectName(QString::fromUtf8("spinBox_addressByte0"));
        spinBox_addressByte0->setGeometry(QRect(90, 20, 51, 30));
        spinBox_addressByte0->setFont(font);
        spinBox_addressByte0->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_addressByte0->setAlignment(Qt::AlignCenter);
        spinBox_addressByte0->setMinimum(0);
        spinBox_addressByte0->setMaximum(255);
        spinBox_addressByte0->setValue(0);
        toolButton_setAddress = new QToolButton(groupBox_2);
        toolButton_setAddress->setObjectName(QString::fromUtf8("toolButton_setAddress"));
        toolButton_setAddress->setGeometry(QRect(310, 20, 91, 30));
        toolButton_setAddress->setFont(font);
        toolButton_setAddress->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_setAddress->setIconSize(QSize(50, 50));
        toolButton_setAddress->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_setAddress->setAutoRaise(true);
        spinBox_addressByte1 = new QSpinBox(groupBox_2);
        spinBox_addressByte1->setObjectName(QString::fromUtf8("spinBox_addressByte1"));
        spinBox_addressByte1->setGeometry(QRect(140, 20, 51, 30));
        spinBox_addressByte1->setFont(font);
        spinBox_addressByte1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_addressByte1->setAlignment(Qt::AlignCenter);
        spinBox_addressByte1->setMinimum(0);
        spinBox_addressByte1->setMaximum(255);
        spinBox_addressByte1->setValue(0);
        spinBox_addressByte2 = new QSpinBox(groupBox_2);
        spinBox_addressByte2->setObjectName(QString::fromUtf8("spinBox_addressByte2"));
        spinBox_addressByte2->setGeometry(QRect(190, 20, 51, 30));
        spinBox_addressByte2->setFont(font);
        spinBox_addressByte2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_addressByte2->setAlignment(Qt::AlignCenter);
        spinBox_addressByte2->setMinimum(0);
        spinBox_addressByte2->setMaximum(255);
        spinBox_addressByte2->setValue(0);
        spinBox_addressByte3 = new QSpinBox(groupBox_2);
        spinBox_addressByte3->setObjectName(QString::fromUtf8("spinBox_addressByte3"));
        spinBox_addressByte3->setGeometry(QRect(240, 20, 51, 30));
        spinBox_addressByte3->setFont(font);
        spinBox_addressByte3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_addressByte3->setAlignment(Qt::AlignCenter);
        spinBox_addressByte3->setMinimum(0);
        spinBox_addressByte3->setMaximum(255);
        spinBox_addressByte3->setValue(0);
        tabWidget->addTab(tab_control, QString());
        tab_calib = new QWidget();
        tab_calib->setObjectName(QString::fromUtf8("tab_calib"));
        toolButton_setCountPerShutdown = new QToolButton(tab_calib);
        toolButton_setCountPerShutdown->setObjectName(QString::fromUtf8("toolButton_setCountPerShutdown"));
        toolButton_setCountPerShutdown->setGeometry(QRect(260, 10, 111, 30));
        toolButton_setCountPerShutdown->setFont(font);
        toolButton_setCountPerShutdown->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_setCountPerShutdown->setIconSize(QSize(50, 50));
        toolButton_setCountPerShutdown->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_setCountPerShutdown->setAutoRaise(true);
        label_zeroText_4 = new QLabel(tab_calib);
        label_zeroText_4->setObjectName(QString::fromUtf8("label_zeroText_4"));
        label_zeroText_4->setGeometry(QRect(10, 15, 111, 20));
        label_zeroText_4->setFont(font);
        label_zeroText_4->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        line_4 = new QFrame(tab_calib);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 50, 450, 10));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(tab_calib);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 210, 450, 10));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(tab_calib);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(0, 300, 450, 10));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_Unit_3 = new QLabel(tab_calib);
        label_Unit_3->setObjectName(QString::fromUtf8("label_Unit_3"));
        label_Unit_3->setGeometry(QRect(215, 15, 41, 20));
        label_Unit_3->setFont(font2);
        label_Unit_3->setAlignment(Qt::AlignCenter);
        spinBox_countPerShutdown = new QSpinBox(tab_calib);
        spinBox_countPerShutdown->setObjectName(QString::fromUtf8("spinBox_countPerShutdown"));
        spinBox_countPerShutdown->setGeometry(QRect(130, 10, 81, 30));
        spinBox_countPerShutdown->setFont(font);
        spinBox_countPerShutdown->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_countPerShutdown->setAlignment(Qt::AlignCenter);
        spinBox_countPerShutdown->setMinimum(10);
        spinBox_countPerShutdown->setMaximum(65535);
        spinBox_countPerShutdown->setValue(400);
        lineEdit_calibDistance = new QLineEdit(tab_calib);
        lineEdit_calibDistance->setObjectName(QString::fromUtf8("lineEdit_calibDistance"));
        lineEdit_calibDistance->setGeometry(QRect(130, 100, 81, 30));
        lineEdit_calibDistance->setFont(font);
        lineEdit_calibDistance->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_calibDistance->setAlignment(Qt::AlignCenter);
        label_zeroText_5 = new QLabel(tab_calib);
        label_zeroText_5->setObjectName(QString::fromUtf8("label_zeroText_5"));
        label_zeroText_5->setGeometry(QRect(10, 60, 231, 20));
        label_zeroText_5->setFont(font);
        label_zeroText_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);"));
        toolButton_setCalibDistance = new QToolButton(tab_calib);
        toolButton_setCalibDistance->setObjectName(QString::fromUtf8("toolButton_setCalibDistance"));
        toolButton_setCalibDistance->setGeometry(QRect(260, 100, 111, 30));
        toolButton_setCalibDistance->setFont(font);
        toolButton_setCalibDistance->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_setCalibDistance->setIconSize(QSize(50, 50));
        toolButton_setCalibDistance->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_setCalibDistance->setAutoRaise(true);
        label = new QLabel(tab_calib);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 80, 91, 16));
        QFont font3;
        font3.setPointSize(10);
        label->setFont(font3);
        label_2 = new QLabel(tab_calib);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 108, 91, 16));
        label_2->setFont(font);
        label_calibDistanceUnit = new QLabel(tab_calib);
        label_calibDistanceUnit->setObjectName(QString::fromUtf8("label_calibDistanceUnit"));
        label_calibDistanceUnit->setGeometry(QRect(215, 105, 41, 20));
        label_calibDistanceUnit->setFont(font2);
        label_calibDistanceUnit->setAlignment(Qt::AlignCenter);
        label_calibDistance = new QLabel(tab_calib);
        label_calibDistance->setObjectName(QString::fromUtf8("label_calibDistance"));
        label_calibDistance->setGeometry(QRect(120, 80, 91, 16));
        label_calibDistance->setFont(font);
        toolButton_setCalibForce = new QToolButton(tab_calib);
        toolButton_setCalibForce->setObjectName(QString::fromUtf8("toolButton_setCalibForce"));
        toolButton_setCalibForce->setGeometry(QRect(260, 260, 111, 30));
        toolButton_setCalibForce->setFont(font);
        toolButton_setCalibForce->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_setCalibForce->setIconSize(QSize(50, 50));
        toolButton_setCalibForce->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_setCalibForce->setAutoRaise(true);
        label_3 = new QLabel(tab_calib);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 240, 91, 16));
        label_3->setFont(font3);
        label_4 = new QLabel(tab_calib);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 268, 91, 16));
        label_4->setFont(font);
        label_calibForceUnit = new QLabel(tab_calib);
        label_calibForceUnit->setObjectName(QString::fromUtf8("label_calibForceUnit"));
        label_calibForceUnit->setGeometry(QRect(215, 265, 41, 20));
        label_calibForceUnit->setFont(font2);
        label_calibForceUnit->setAlignment(Qt::AlignCenter);
        lineEdit_calibForce = new QLineEdit(tab_calib);
        lineEdit_calibForce->setObjectName(QString::fromUtf8("lineEdit_calibForce"));
        lineEdit_calibForce->setGeometry(QRect(130, 260, 81, 30));
        lineEdit_calibForce->setFont(font);
        lineEdit_calibForce->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_calibForce->setAlignment(Qt::AlignCenter);
        label_calibForce = new QLabel(tab_calib);
        label_calibForce->setObjectName(QString::fromUtf8("label_calibForce"));
        label_calibForce->setGeometry(QRect(120, 240, 91, 16));
        label_calibForce->setFont(font);
        label_zeroText_6 = new QLabel(tab_calib);
        label_zeroText_6->setObjectName(QString::fromUtf8("label_zeroText_6"));
        label_zeroText_6->setGeometry(QRect(10, 220, 171, 20));
        label_zeroText_6->setFont(font);
        label_zeroText_6->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 255);"));
        plainTextEdit = new QPlainTextEdit(tab_calib);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(120, 140, 211, 61));
        QFont font4;
        font4.setPointSize(9);
        font4.setItalic(true);
        plainTextEdit->setFont(font4);
        plainTextEdit->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));
        plainTextEdit->setFrameShape(QFrame::NoFrame);
        tabWidget->addTab(tab_calib, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_frameError = new QLabel(tab_2);
        label_frameError->setObjectName(QString::fromUtf8("label_frameError"));
        label_frameError->setGeometry(QRect(130, 12, 91, 16));
        label_frameError->setFont(font);
        label_zeroText_9 = new QLabel(tab_2);
        label_zeroText_9->setObjectName(QString::fromUtf8("label_zeroText_9"));
        label_zeroText_9->setGeometry(QRect(10, 10, 111, 20));
        label_zeroText_9->setFont(font);
        label_zeroText_9->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        line_8 = new QFrame(tab_2);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(0, 40, 450, 10));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        toolButton_clearFrameError = new QToolButton(tab_2);
        toolButton_clearFrameError->setObjectName(QString::fromUtf8("toolButton_clearFrameError"));
        toolButton_clearFrameError->setGeometry(QRect(230, 10, 91, 21));
        toolButton_clearFrameError->setFont(font);
        toolButton_clearFrameError->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_clearFrameError->setIconSize(QSize(50, 50));
        toolButton_clearFrameError->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_clearFrameError->setAutoRaise(true);
        toolButton_setCarSampleTime = new QToolButton(tab_2);
        toolButton_setCarSampleTime->setObjectName(QString::fromUtf8("toolButton_setCarSampleTime"));
        toolButton_setCarSampleTime->setGeometry(QRect(330, 55, 71, 30));
        toolButton_setCarSampleTime->setFont(font);
        toolButton_setCarSampleTime->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_setCarSampleTime->setIconSize(QSize(50, 50));
        toolButton_setCarSampleTime->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_setCarSampleTime->setAutoRaise(true);
        spinBox_carSampleTime = new QSpinBox(tab_2);
        spinBox_carSampleTime->setObjectName(QString::fromUtf8("spinBox_carSampleTime"));
        spinBox_carSampleTime->setGeometry(QRect(220, 55, 61, 30));
        spinBox_carSampleTime->setFont(font);
        spinBox_carSampleTime->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_carSampleTime->setAlignment(Qt::AlignCenter);
        spinBox_carSampleTime->setMinimum(5);
        spinBox_carSampleTime->setMaximum(100);
        spinBox_carSampleTime->setValue(5);
        label_Unit_4 = new QLabel(tab_2);
        label_Unit_4->setObjectName(QString::fromUtf8("label_Unit_4"));
        label_Unit_4->setGeometry(QRect(290, 60, 31, 20));
        label_Unit_4->setFont(font2);
        label_Unit_4->setAlignment(Qt::AlignCenter);
        label_zeroText_10 = new QLabel(tab_2);
        label_zeroText_10->setObjectName(QString::fromUtf8("label_zeroText_10"));
        label_zeroText_10->setGeometry(QRect(10, 60, 205, 20));
        label_zeroText_10->setFont(font);
        label_zeroText_10->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        tabWidget->addTab(tab_2, QString());
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 421, 41));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(2,87, 122);"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        label_Name = new QLabel(frame);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setGeometry(QRect(10, 6, 401, 28));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(14);
        font5.setBold(true);
        label_Name->setFont(font5);
        label_Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_cancel = new QPushButton(centralwidget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(270, 400, 141, 30));
        pushButton_cancel->setFont(font);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        FrmModuleCarSetup->setCentralWidget(centralwidget);

        retranslateUi(FrmModuleCarSetup);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FrmModuleCarSetup);
    } // setupUi

    void retranslateUi(QMainWindow *FrmModuleCarSetup)
    {
        FrmModuleCarSetup->setWindowTitle(QCoreApplication::translate("FrmModuleCarSetup", "MainWindow", nullptr));
        comboBox_resolutionDistance->setItemText(0, QCoreApplication::translate("FrmModuleCarSetup", "1", nullptr));
        comboBox_resolutionDistance->setItemText(1, QCoreApplication::translate("FrmModuleCarSetup", "0.1", nullptr));
        comboBox_resolutionDistance->setItemText(2, QCoreApplication::translate("FrmModuleCarSetup", "0.01", nullptr));
        comboBox_resolutionDistance->setItemText(3, QCoreApplication::translate("FrmModuleCarSetup", "0.001", nullptr));

        label_13->setText(QCoreApplication::translate("FrmModuleCarSetup", "\304\220\306\241n v\341\273\213 \304\221o", nullptr));
        label_12->setText(QCoreApplication::translate("FrmModuleCarSetup", "\304\220\341\273\231 ph\303\242n gi\341\272\243i", nullptr));
        label_14->setText(QCoreApplication::translate("FrmModuleCarSetup", "Qu\303\243ng \304\221\306\260\341\273\235ng", nullptr));
        comboBox_resolutionSpeed->setItemText(0, QCoreApplication::translate("FrmModuleCarSetup", "1", nullptr));
        comboBox_resolutionSpeed->setItemText(1, QCoreApplication::translate("FrmModuleCarSetup", "0.1", nullptr));
        comboBox_resolutionSpeed->setItemText(2, QCoreApplication::translate("FrmModuleCarSetup", "0.01", nullptr));
        comboBox_resolutionSpeed->setItemText(3, QCoreApplication::translate("FrmModuleCarSetup", "0.001", nullptr));

        label_15->setText(QCoreApplication::translate("FrmModuleCarSetup", "V\341\272\255n t\341\273\221c", nullptr));
        comboBox_resolutionAcceleration->setItemText(0, QCoreApplication::translate("FrmModuleCarSetup", "1", nullptr));
        comboBox_resolutionAcceleration->setItemText(1, QCoreApplication::translate("FrmModuleCarSetup", "0.1", nullptr));
        comboBox_resolutionAcceleration->setItemText(2, QCoreApplication::translate("FrmModuleCarSetup", "0.01", nullptr));
        comboBox_resolutionAcceleration->setItemText(3, QCoreApplication::translate("FrmModuleCarSetup", "0.001", nullptr));

        label_16->setText(QCoreApplication::translate("FrmModuleCarSetup", "Gia t\341\273\221c", nullptr));
        comboBox_resolutionForce->setItemText(0, QCoreApplication::translate("FrmModuleCarSetup", "1", nullptr));
        comboBox_resolutionForce->setItemText(1, QCoreApplication::translate("FrmModuleCarSetup", "0.1", nullptr));
        comboBox_resolutionForce->setItemText(2, QCoreApplication::translate("FrmModuleCarSetup", "0.01", nullptr));
        comboBox_resolutionForce->setItemText(3, QCoreApplication::translate("FrmModuleCarSetup", "0.001", nullptr));

        label_17->setText(QCoreApplication::translate("FrmModuleCarSetup", "L\341\273\261c t\303\241c \304\221\341\273\231ng", nullptr));
        comboBox_resolutionAxisX->setItemText(0, QCoreApplication::translate("FrmModuleCarSetup", "1", nullptr));
        comboBox_resolutionAxisX->setItemText(1, QCoreApplication::translate("FrmModuleCarSetup", "0.1", nullptr));
        comboBox_resolutionAxisX->setItemText(2, QCoreApplication::translate("FrmModuleCarSetup", "0.01", nullptr));
        comboBox_resolutionAxisX->setItemText(3, QCoreApplication::translate("FrmModuleCarSetup", "0.001", nullptr));

        label_18->setText(QCoreApplication::translate("FrmModuleCarSetup", "Tr\341\273\245c X", nullptr));
        comboBox_resolutionAxisY->setItemText(0, QCoreApplication::translate("FrmModuleCarSetup", "1", nullptr));
        comboBox_resolutionAxisY->setItemText(1, QCoreApplication::translate("FrmModuleCarSetup", "0.1", nullptr));
        comboBox_resolutionAxisY->setItemText(2, QCoreApplication::translate("FrmModuleCarSetup", "0.01", nullptr));
        comboBox_resolutionAxisY->setItemText(3, QCoreApplication::translate("FrmModuleCarSetup", "0.001", nullptr));

        label_19->setText(QCoreApplication::translate("FrmModuleCarSetup", "Tr\341\273\245c Y", nullptr));
        comboBox_resolutionAxisZ->setItemText(0, QCoreApplication::translate("FrmModuleCarSetup", "1", nullptr));
        comboBox_resolutionAxisZ->setItemText(1, QCoreApplication::translate("FrmModuleCarSetup", "0.1", nullptr));
        comboBox_resolutionAxisZ->setItemText(2, QCoreApplication::translate("FrmModuleCarSetup", "0.01", nullptr));
        comboBox_resolutionAxisZ->setItemText(3, QCoreApplication::translate("FrmModuleCarSetup", "0.001", nullptr));

        label_20->setText(QCoreApplication::translate("FrmModuleCarSetup", "Tr\341\273\245c Z", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("FrmModuleCarSetup", "   C\303\240i \304\221\341\272\267t   ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FrmModuleCarSetup", "Thi\341\272\277t l\341\272\255p tham s\341\273\221 \304\221o", nullptr));
        label_zeroText->setText(QCoreApplication::translate("FrmModuleCarSetup", "Thi\341\272\277t l\341\272\255p l\341\272\241i Qu\303\243ng \304\221\306\260\341\273\235ng (zero)", nullptr));
        toolButton_setZeroDistance->setText(QCoreApplication::translate("FrmModuleCarSetup", "Zero", nullptr));
        toolButton_setZeroForce->setText(QCoreApplication::translate("FrmModuleCarSetup", "Zero", nullptr));
        label_zeroText_2->setText(QCoreApplication::translate("FrmModuleCarSetup", "Thi\341\272\277t l\341\272\255p l\341\272\241i L\341\273\261c t\303\241c \304\221\341\273\231ng (zero)", nullptr));
        label_zeroText_8->setText(QCoreApplication::translate("FrmModuleCarSetup", "C\303\240i \304\221\341\272\267t c\341\272\243m bi\341\272\277n \304\221\341\273\231 nghi\303\252ng", nullptr));
        toolButton_setZerAxis->setText(QCoreApplication::translate("FrmModuleCarSetup", "Zero", nullptr));
        toolButton_setOffsetAxis->setText(QCoreApplication::translate("FrmModuleCarSetup", "Offset", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FrmModuleCarSetup", "C\303\240i \304\221\341\272\267t xe", nullptr));
        label_zeroText_3->setText(QCoreApplication::translate("FrmModuleCarSetup", "Th\341\273\235i gian t\341\272\257t", nullptr));
        toolButton_setTimeShutdown->setText(QCoreApplication::translate("FrmModuleCarSetup", "C\303\240i \304\221\341\272\267t", nullptr));
        label_Unit_2->setText(QCoreApplication::translate("FrmModuleCarSetup", "(gi\303\242y)", nullptr));
        label_zeroText_7->setText(QCoreApplication::translate("FrmModuleCarSetup", "\304\220\341\273\213a ch\341\273\211 xe", nullptr));
        toolButton_setAddress->setText(QCoreApplication::translate("FrmModuleCarSetup", "C\303\240i \304\221\341\272\267t", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_control), QCoreApplication::translate("FrmModuleCarSetup", "   \304\220i\341\273\201u khi\341\273\203n   ", nullptr));
        toolButton_setCountPerShutdown->setText(QCoreApplication::translate("FrmModuleCarSetup", "C\303\240i \304\221\341\272\267t", nullptr));
        label_zeroText_4->setText(QCoreApplication::translate("FrmModuleCarSetup", "C\341\272\243m bi\341\272\277n quang", nullptr));
        label_Unit_3->setText(QCoreApplication::translate("FrmModuleCarSetup", "(cpr)", nullptr));
        lineEdit_calibDistance->setText(QCoreApplication::translate("FrmModuleCarSetup", "1", nullptr));
        label_zeroText_5->setText(QCoreApplication::translate("FrmModuleCarSetup", "Hi\341\273\207u chu\341\272\251n c\341\272\243m bi\341\272\277n qu\303\243ng \304\221\306\260\341\273\235ng", nullptr));
        toolButton_setCalibDistance->setText(QCoreApplication::translate("FrmModuleCarSetup", "C\303\240i \304\221\341\272\267t", nullptr));
        label->setText(QCoreApplication::translate("FrmModuleCarSetup", "Gi\303\241 tr\341\273\213 hi\341\273\207n t\341\272\241i", nullptr));
        label_2->setText(QCoreApplication::translate("FrmModuleCarSetup", "Gi\303\241 tr\341\273\213 m\341\273\233i", nullptr));
        label_calibDistanceUnit->setText(QCoreApplication::translate("FrmModuleCarSetup", "(mm)", nullptr));
        label_calibDistance->setText(QCoreApplication::translate("FrmModuleCarSetup", "0", nullptr));
        toolButton_setCalibForce->setText(QCoreApplication::translate("FrmModuleCarSetup", "C\303\240i \304\221\341\272\267t", nullptr));
        label_3->setText(QCoreApplication::translate("FrmModuleCarSetup", "Gi\303\241 tr\341\273\213 hi\341\273\207n t\341\272\241i", nullptr));
        label_4->setText(QCoreApplication::translate("FrmModuleCarSetup", "Gi\303\241 tr\341\273\213 m\341\273\233i", nullptr));
        label_calibForceUnit->setText(QCoreApplication::translate("FrmModuleCarSetup", "(mm)", nullptr));
        lineEdit_calibForce->setText(QCoreApplication::translate("FrmModuleCarSetup", "1", nullptr));
        label_calibForce->setText(QCoreApplication::translate("FrmModuleCarSetup", "0", nullptr));
        label_zeroText_6->setText(QCoreApplication::translate("FrmModuleCarSetup", "Hi\341\273\207u chu\341\272\251n c\341\272\243m bi\341\272\277n l\341\273\261c", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("FrmModuleCarSetup", "Gi\303\241 tr\341\273\213 hi\341\273\207u chu\341\272\251n = (\317\200*D)/(4*cpr)\n"
"              D: \304\221\306\260\341\273\235ng k\303\255nh b\303\241nh xe\n"
"              cpr: c\341\272\243m bi\341\272\277n quang", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_calib), QCoreApplication::translate("FrmModuleCarSetup", "   Hi\341\273\207u chu\341\272\251n   ", nullptr));
        label_frameError->setText(QCoreApplication::translate("FrmModuleCarSetup", "0", nullptr));
        label_zeroText_9->setText(QCoreApplication::translate("FrmModuleCarSetup", "G\303\263i tin b\341\273\213 m\341\272\245t:", nullptr));
        toolButton_clearFrameError->setText(QCoreApplication::translate("FrmModuleCarSetup", "X\303\263a", nullptr));
        toolButton_setCarSampleTime->setText(QCoreApplication::translate("FrmModuleCarSetup", "C\303\240i \304\221\341\272\267t", nullptr));
        label_Unit_4->setText(QCoreApplication::translate("FrmModuleCarSetup", "(ms)", nullptr));
        label_zeroText_10->setText(QCoreApplication::translate("FrmModuleCarSetup", "Th\341\273\235i gian l\341\272\245y m\341\272\253u qu\303\243ng \304\221\306\260\341\273\235ng", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("FrmModuleCarSetup", " K\341\272\277t n\341\273\221i ", nullptr));
        label_Name->setText(QCoreApplication::translate("FrmModuleCarSetup", "C\303\240i \304\221\341\272\267t XE-01", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("FrmModuleCarSetup", "Tho\303\241t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmModuleCarSetup: public Ui_FrmModuleCarSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMODULECARSETUP_H
