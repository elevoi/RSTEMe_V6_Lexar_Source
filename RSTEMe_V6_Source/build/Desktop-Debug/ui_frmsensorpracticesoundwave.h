/********************************************************************************
** Form generated from reading UI file 'frmsensorpracticesoundwave.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMSENSORPRACTICESOUNDWAVE_H
#define UI_FRMSENSORPRACTICESOUNDWAVE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmSensorPracticeSoundWave
{
public:
    QWidget *centralwidget;
    QFrame *frame_Control;
    QFrame *frame_scope;
    QToolButton *toolButton_plus;
    QToolButton *toolButton_minus;
    QLabel *label_2;
    QLabel *label_scope;
    QFrame *frame_play;
    QToolButton *toolButton_toolPause;
    QToolButton *toolButton_toolPlay;
    QToolButton *toolButton_toolClear;
    QFrame *line_4;
    QFrame *frame_toolSetup;
    QLineEdit *lineEdit_wavePeriod;
    QLabel *label_timePlay;
    QLabel *label_wavePeriodUnit;
    QFrame *line_3;
    QLabel *label_5;
    QToolButton *toolButton_toolSampleTime_4;
    QLabel *label_timePlay_2;
    QLineEdit *lineEdit_waveFreq;
    QToolButton *toolButton_toolSampleTime;
    QToolButton *toolButton_toolSampleTime_5;
    QLineEdit *lineEdit_soundLevel;
    QFrame *line_5;
    QLabel *label_7;
    QLabel *label_timePlay_3;
    QSpinBox *spinBox_threshold;
    QFrame *frame_scope_2;
    QToolButton *toolButton_timePlus;
    QToolButton *toolButton_timeMinus;
    QLabel *label_3;
    QLabel *label_timeLength;
    QToolButton *toolButton_setSpeaker;
    QGraphicsView *graphicsViewChart;
    QFrame *frame_toolTrack;
    QToolButton *toolButton_toolCrosshair;
    QToolButton *toolButton_toolCallout;
    QLabel *label_6;
    QToolButton *toolButton_toolHideSeries;

    void setupUi(QMainWindow *FrmSensorPracticeSoundWave)
    {
        if (FrmSensorPracticeSoundWave->objectName().isEmpty())
            FrmSensorPracticeSoundWave->setObjectName(QString::fromUtf8("FrmSensorPracticeSoundWave"));
        FrmSensorPracticeSoundWave->resize(1200, 700);
        FrmSensorPracticeSoundWave->setMinimumSize(QSize(1200, 700));
        FrmSensorPracticeSoundWave->setMaximumSize(QSize(1200, 700));
        centralwidget = new QWidget(FrmSensorPracticeSoundWave);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame_Control = new QFrame(centralwidget);
        frame_Control->setObjectName(QString::fromUtf8("frame_Control"));
        frame_Control->setGeometry(QRect(0, 569, 1201, 131));
        frame_Control->setStyleSheet(QString::fromUtf8("QFrame#frame_Control{\n"
"	background-color: rgb(220, 220, 220);\n"
"}\n"
""));
        frame_Control->setFrameShape(QFrame::StyledPanel);
        frame_Control->setFrameShadow(QFrame::Raised);
        frame_scope = new QFrame(frame_Control);
        frame_scope->setObjectName(QString::fromUtf8("frame_scope"));
        frame_scope->setGeometry(QRect(10, 50, 201, 71));
        frame_scope->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"}\n"
""));
        frame_scope->setFrameShape(QFrame::Panel);
        frame_scope->setFrameShadow(QFrame::Raised);
        toolButton_plus = new QToolButton(frame_scope);
        toolButton_plus->setObjectName(QString::fromUtf8("toolButton_plus"));
        toolButton_plus->setGeometry(QRect(170, 0, 31, 71));
        toolButton_plus->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_plus{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(25, 149, 173);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"}\n"
"QToolButton#toolButton_plus:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"background-color: rgb(25, 149, 190);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/chart/iconChartPlus_On.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_plus->setIcon(icon);
        toolButton_plus->setIconSize(QSize(20, 20));
        toolButton_plus->setAutoRaise(true);
        toolButton_minus = new QToolButton(frame_scope);
        toolButton_minus->setObjectName(QString::fromUtf8("toolButton_minus"));
        toolButton_minus->setGeometry(QRect(0, 0, 31, 71));
        toolButton_minus->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_minus{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(25, 149, 173);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-top-left-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"}\n"
"QToolButton#toolButton_minus:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"background-color: rgb(25, 149, 190);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/chart/iconChartMinus_On.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_minus->setIcon(icon1);
        toolButton_minus->setIconSize(QSize(20, 20));
        toolButton_minus->setAutoRaise(true);
        label_2 = new QLabel(frame_scope);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 0, 121, 21));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_scope = new QLabel(frame_scope);
        label_scope->setObjectName(QString::fromUtf8("label_scope"));
        label_scope->setGeometry(QRect(40, 21, 121, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_scope->setFont(font1);
        label_scope->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255);\n"
""));
        label_scope->setAlignment(Qt::AlignCenter);
        frame_play = new QFrame(frame_Control);
        frame_play->setObjectName(QString::fromUtf8("frame_play"));
        frame_play->setGeometry(QRect(1020, 50, 172, 73));
        frame_play->setStyleSheet(QString::fromUtf8(""));
        frame_play->setFrameShape(QFrame::Panel);
        frame_play->setFrameShadow(QFrame::Raised);
        toolButton_toolPause = new QToolButton(frame_play);
        toolButton_toolPause->setObjectName(QString::fromUtf8("toolButton_toolPause"));
        toolButton_toolPause->setGeometry(QRect(1, 1, 100, 71));
        toolButton_toolPause->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/chart/iconChartPause_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/icon/chart/iconChartPause_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolPause->setIcon(icon2);
        toolButton_toolPause->setIconSize(QSize(80, 80));
        toolButton_toolPause->setAutoRaise(true);
        toolButton_toolPlay = new QToolButton(frame_play);
        toolButton_toolPlay->setObjectName(QString::fromUtf8("toolButton_toolPlay"));
        toolButton_toolPlay->setGeometry(QRect(1, 1, 100, 71));
        toolButton_toolPlay->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/chart/iconChartPlay_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icon/chart/iconChartPlay_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolPlay->setIcon(icon3);
        toolButton_toolPlay->setIconSize(QSize(80, 80));
        toolButton_toolPlay->setAutoRaise(true);
        toolButton_toolClear = new QToolButton(frame_play);
        toolButton_toolClear->setObjectName(QString::fromUtf8("toolButton_toolClear"));
        toolButton_toolClear->setGeometry(QRect(100, 1, 71, 71));
        toolButton_toolClear->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/chart/iconChartClear_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/icon/chart/iconChartClear_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolClear->setIcon(icon4);
        toolButton_toolClear->setIconSize(QSize(40, 40));
        toolButton_toolClear->setAutoRaise(true);
        line_4 = new QFrame(frame_play);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(100, 0, 3, 73));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        frame_toolSetup = new QFrame(frame_Control);
        frame_toolSetup->setObjectName(QString::fromUtf8("frame_toolSetup"));
        frame_toolSetup->setGeometry(QRect(0, 0, 1201, 41));
        frame_toolSetup->setStyleSheet(QString::fromUtf8("QFrame#frame_toolSetup{\n"
"	background-color: rgb(25, 149, 173);\n"
"    /*background-color: rgb(3, 87, 123);;*/\n"
"}"));
        frame_toolSetup->setFrameShape(QFrame::Panel);
        frame_toolSetup->setFrameShadow(QFrame::Raised);
        lineEdit_wavePeriod = new QLineEdit(frame_toolSetup);
        lineEdit_wavePeriod->setObjectName(QString::fromUtf8("lineEdit_wavePeriod"));
        lineEdit_wavePeriod->setGeometry(QRect(100, 9, 71, 24));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lineEdit_wavePeriod->setFont(font2);
        lineEdit_wavePeriod->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	/*color: rgb(3, 87, 123);*/\n"
"color: rgb(85, 170, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"}"));
        lineEdit_wavePeriod->setMaxLength(10);
        lineEdit_wavePeriod->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_timePlay = new QLabel(frame_toolSetup);
        label_timePlay->setObjectName(QString::fromUtf8("label_timePlay"));
        label_timePlay->setGeometry(QRect(50, 11, 45, 20));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_timePlay->setFont(font3);
        label_timePlay->setLayoutDirection(Qt::RightToLeft);
        label_timePlay->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_timePlay->setAlignment(Qt::AlignCenter);
        label_wavePeriodUnit = new QLabel(frame_toolSetup);
        label_wavePeriodUnit->setObjectName(QString::fromUtf8("label_wavePeriodUnit"));
        label_wavePeriodUnit->setGeometry(QRect(175, 8, 41, 21));
        label_wavePeriodUnit->setFont(font2);
        label_wavePeriodUnit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_wavePeriodUnit->setAlignment(Qt::AlignCenter);
        line_3 = new QFrame(frame_toolSetup);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(220, 0, 3, 41));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(frame_toolSetup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(395, 9, 41, 21));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);
        toolButton_toolSampleTime_4 = new QToolButton(frame_toolSetup);
        toolButton_toolSampleTime_4->setObjectName(QString::fromUtf8("toolButton_toolSampleTime_4"));
        toolButton_toolSampleTime_4->setGeometry(QRect(230, 6, 30, 30));
        toolButton_toolSampleTime_4->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 5px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/chart/iconChartFreq_On.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_toolSampleTime_4->setIcon(icon5);
        toolButton_toolSampleTime_4->setIconSize(QSize(30, 30));
        toolButton_toolSampleTime_4->setAutoRaise(true);
        label_timePlay_2 = new QLabel(frame_toolSetup);
        label_timePlay_2->setObjectName(QString::fromUtf8("label_timePlay_2"));
        label_timePlay_2->setGeometry(QRect(270, 12, 45, 20));
        label_timePlay_2->setFont(font3);
        label_timePlay_2->setLayoutDirection(Qt::RightToLeft);
        label_timePlay_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_timePlay_2->setAlignment(Qt::AlignCenter);
        lineEdit_waveFreq = new QLineEdit(frame_toolSetup);
        lineEdit_waveFreq->setObjectName(QString::fromUtf8("lineEdit_waveFreq"));
        lineEdit_waveFreq->setGeometry(QRect(320, 9, 71, 24));
        lineEdit_waveFreq->setFont(font2);
        lineEdit_waveFreq->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	/*color: rgb(3, 87, 123);*/\n"
"color: rgb(85, 170, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"}"));
        lineEdit_waveFreq->setMaxLength(10);
        lineEdit_waveFreq->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        toolButton_toolSampleTime = new QToolButton(frame_toolSetup);
        toolButton_toolSampleTime->setObjectName(QString::fromUtf8("toolButton_toolSampleTime"));
        toolButton_toolSampleTime->setGeometry(QRect(10, 6, 30, 30));
        toolButton_toolSampleTime->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 5px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/chart/iconChartClock_On.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_toolSampleTime->setIcon(icon6);
        toolButton_toolSampleTime->setIconSize(QSize(30, 30));
        toolButton_toolSampleTime->setAutoRaise(true);
        toolButton_toolSampleTime_5 = new QToolButton(frame_toolSetup);
        toolButton_toolSampleTime_5->setObjectName(QString::fromUtf8("toolButton_toolSampleTime_5"));
        toolButton_toolSampleTime_5->setGeometry(QRect(460, 6, 30, 30));
        toolButton_toolSampleTime_5->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 5px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/chart/iconChartDb_On.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_toolSampleTime_5->setIcon(icon7);
        toolButton_toolSampleTime_5->setIconSize(QSize(30, 30));
        toolButton_toolSampleTime_5->setAutoRaise(true);
        lineEdit_soundLevel = new QLineEdit(frame_toolSetup);
        lineEdit_soundLevel->setObjectName(QString::fromUtf8("lineEdit_soundLevel"));
        lineEdit_soundLevel->setGeometry(QRect(555, 9, 71, 24));
        lineEdit_soundLevel->setFont(font2);
        lineEdit_soundLevel->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	/*color: rgb(3, 87, 123);*/\n"
"color: rgb(85, 170, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"}"));
        lineEdit_soundLevel->setMaxLength(10);
        lineEdit_soundLevel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        line_5 = new QFrame(frame_toolSetup);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(450, 0, 3, 41));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(frame_toolSetup);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(630, 9, 41, 21));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignCenter);
        label_timePlay_3 = new QLabel(frame_toolSetup);
        label_timePlay_3->setObjectName(QString::fromUtf8("label_timePlay_3"));
        label_timePlay_3->setGeometry(QRect(500, 12, 51, 20));
        label_timePlay_3->setFont(font3);
        label_timePlay_3->setLayoutDirection(Qt::RightToLeft);
        label_timePlay_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_timePlay_3->setAlignment(Qt::AlignCenter);
        spinBox_threshold = new QSpinBox(frame_toolSetup);
        spinBox_threshold->setObjectName(QString::fromUtf8("spinBox_threshold"));
        spinBox_threshold->setGeometry(QRect(1105, 5, 91, 31));
        spinBox_threshold->setValue(4);
        frame_scope_2 = new QFrame(frame_Control);
        frame_scope_2->setObjectName(QString::fromUtf8("frame_scope_2"));
        frame_scope_2->setGeometry(QRect(220, 50, 201, 71));
        frame_scope_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"}\n"
""));
        frame_scope_2->setFrameShape(QFrame::Panel);
        frame_scope_2->setFrameShadow(QFrame::Raised);
        toolButton_timePlus = new QToolButton(frame_scope_2);
        toolButton_timePlus->setObjectName(QString::fromUtf8("toolButton_timePlus"));
        toolButton_timePlus->setGeometry(QRect(170, 0, 31, 71));
        toolButton_timePlus->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_timePlus{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(25, 149, 173);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"}\n"
"QToolButton#toolButton_timePlus:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"background-color: rgb(25, 149, 190);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_timePlus->setIcon(icon);
        toolButton_timePlus->setIconSize(QSize(20, 20));
        toolButton_timePlus->setAutoRaise(true);
        toolButton_timeMinus = new QToolButton(frame_scope_2);
        toolButton_timeMinus->setObjectName(QString::fromUtf8("toolButton_timeMinus"));
        toolButton_timeMinus->setGeometry(QRect(0, 0, 31, 71));
        toolButton_timeMinus->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_timeMinus{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(25, 149, 173);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-top-left-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"}\n"
"QToolButton#toolButton_timeMinus:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"background-color: rgb(25, 149, 190);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_timeMinus->setIcon(icon1);
        toolButton_timeMinus->setIconSize(QSize(20, 20));
        toolButton_timeMinus->setAutoRaise(true);
        label_3 = new QLabel(frame_scope_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(31, 0, 139, 21));
        QFont font4;
        font4.setPointSize(11);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_timeLength = new QLabel(frame_scope_2);
        label_timeLength->setObjectName(QString::fromUtf8("label_timeLength"));
        label_timeLength->setGeometry(QRect(40, 22, 121, 31));
        label_timeLength->setFont(font1);
        label_timeLength->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255);\n"
""));
        label_timeLength->setAlignment(Qt::AlignCenter);
        toolButton_setSpeaker = new QToolButton(frame_Control);
        toolButton_setSpeaker->setObjectName(QString::fromUtf8("toolButton_setSpeaker"));
        toolButton_setSpeaker->setGeometry(QRect(430, 50, 111, 71));
        toolButton_setSpeaker->setFont(font3);
        toolButton_setSpeaker->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(250, 255, 255);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/device/iconDeviceOff_462.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QString::fromUtf8(":/icon/device/iconDeviceOn_462.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_setSpeaker->setIcon(icon8);
        toolButton_setSpeaker->setIconSize(QSize(40, 40));
        toolButton_setSpeaker->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_setSpeaker->setAutoRaise(true);
        graphicsViewChart = new QGraphicsView(centralwidget);
        graphicsViewChart->setObjectName(QString::fromUtf8("graphicsViewChart"));
        graphicsViewChart->setGeometry(QRect(50, 0, 1151, 570));
        graphicsViewChart->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        graphicsViewChart->setFrameShape(QFrame::NoFrame);
        graphicsViewChart->setFrameShadow(QFrame::Raised);
        frame_toolTrack = new QFrame(centralwidget);
        frame_toolTrack->setObjectName(QString::fromUtf8("frame_toolTrack"));
        frame_toolTrack->setGeometry(QRect(0, 0, 51, 570));
        frame_toolTrack->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        frame_toolTrack->setFrameShape(QFrame::NoFrame);
        frame_toolTrack->setFrameShadow(QFrame::Raised);
        toolButton_toolCrosshair = new QToolButton(frame_toolTrack);
        toolButton_toolCrosshair->setObjectName(QString::fromUtf8("toolButton_toolCrosshair"));
        toolButton_toolCrosshair->setGeometry(QRect(5, 30, 40, 40));
        toolButton_toolCrosshair->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/chart/iconChartCrosshair_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QString::fromUtf8(":/icon/chart/iconChartCrosshair_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolCrosshair->setIcon(icon9);
        toolButton_toolCrosshair->setIconSize(QSize(30, 30));
        toolButton_toolCrosshair->setAutoRaise(true);
        toolButton_toolCallout = new QToolButton(frame_toolTrack);
        toolButton_toolCallout->setObjectName(QString::fromUtf8("toolButton_toolCallout"));
        toolButton_toolCallout->setGeometry(QRect(5, 80, 40, 40));
        toolButton_toolCallout->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/chart/iconChartCallout_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QString::fromUtf8(":/icon/chart/iconChartCallout_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolCallout->setIcon(icon10);
        toolButton_toolCallout->setIconSize(QSize(30, 30));
        toolButton_toolCallout->setAutoRaise(true);
        label_6 = new QLabel(frame_toolTrack);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1, 0, 50, 20));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(25, 149, 173);"));
        label_6->setFrameShape(QFrame::Panel);
        label_6->setFrameShadow(QFrame::Raised);
        label_6->setAlignment(Qt::AlignCenter);
        toolButton_toolHideSeries = new QToolButton(frame_toolTrack);
        toolButton_toolHideSeries->setObjectName(QString::fromUtf8("toolButton_toolHideSeries"));
        toolButton_toolHideSeries->setGeometry(QRect(5, 130, 40, 40));
        toolButton_toolHideSeries->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icon/chart/iconSeriesCheck_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon11.addFile(QString::fromUtf8(":/icon/chart/iconSeriesCheck_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolHideSeries->setIcon(icon11);
        toolButton_toolHideSeries->setIconSize(QSize(30, 30));
        toolButton_toolHideSeries->setAutoRaise(true);
        FrmSensorPracticeSoundWave->setCentralWidget(centralwidget);

        retranslateUi(FrmSensorPracticeSoundWave);

        QMetaObject::connectSlotsByName(FrmSensorPracticeSoundWave);
    } // setupUi

    void retranslateUi(QMainWindow *FrmSensorPracticeSoundWave)
    {
        FrmSensorPracticeSoundWave->setWindowTitle(QCoreApplication::translate("FrmSensorPracticeSoundWave", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_plus->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "X\303\263a thi\341\272\277t b\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_plus->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_minus->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "X\303\263a thi\341\272\277t b\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_minus->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
        label_2->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "Ph\341\272\241m vi", nullptr));
        label_scope->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "100 ms/div", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolPause->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "D\341\273\253ng l\341\272\241i (Esc)", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolPause->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
#if QT_CONFIG(shortcut)
        toolButton_toolPause->setShortcut(QCoreApplication::translate("FrmSensorPracticeSoundWave", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        toolButton_toolPlay->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "B\341\272\257t \304\221\341\272\247u (F1)", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolPlay->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
#if QT_CONFIG(shortcut)
        toolButton_toolPlay->setShortcut(QCoreApplication::translate("FrmSensorPracticeSoundWave", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        toolButton_toolClear->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "X\303\263a \304\221\341\273\223 th\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolClear->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_wavePeriod->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "C\303\240i \304\221\341\272\267t th\341\273\235i gian th\341\273\261c h\303\240nh", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_wavePeriod->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "0", nullptr));
        label_timePlay->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "Chu k\341\273\263", nullptr));
        label_wavePeriodUnit->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "(s)", nullptr));
        label_5->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "(Hz)", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolSampleTime_4->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "\304\220\341\273\223 th\341\273\213 \304\221\306\260\341\273\235ng cong", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolSampleTime_4->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
        label_timePlay_2->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "T\341\272\247n s\341\273\221", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_waveFreq->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "C\303\240i \304\221\341\272\267t th\341\273\235i gian th\341\273\261c h\303\240nh", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_waveFreq->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "0", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolSampleTime->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "\304\220\341\273\223 th\341\273\213 \304\221\306\260\341\273\235ng cong", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolSampleTime->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolSampleTime_5->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "\304\220\341\273\223 th\341\273\213 \304\221\306\260\341\273\235ng cong", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolSampleTime_5->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_soundLevel->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "C\303\240i \304\221\341\272\267t th\341\273\235i gian th\341\273\261c h\303\240nh", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_soundLevel->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "0", nullptr));
        label_7->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "(Hz)", nullptr));
        label_timePlay_3->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "M\341\273\251c \303\242m", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_timePlus->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "X\303\263a thi\341\272\277t b\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_timePlus->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_timeMinus->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "X\303\263a thi\341\272\277t b\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_timeMinus->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
        label_3->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "Th\341\273\235i gian t\341\272\241o s\303\263ng", nullptr));
        label_timeLength->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "10 ms", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_setSpeaker->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "\341\272\250n hi\341\273\207n \304\221\341\273\223 th\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_setSpeaker->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "Ph\303\241t s\303\263ng", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolCrosshair->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "Con tr\341\273\217 ch\341\273\257 th\341\272\255p", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolCrosshair->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolCallout->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "B\341\272\257t \304\221i\341\273\203m tr\303\252n \304\221\306\260\341\273\235ng \304\221\341\273\223 th\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolCallout->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
        label_6->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "Con tr\341\273\217", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolHideSeries->setToolTip(QCoreApplication::translate("FrmSensorPracticeSoundWave", "\341\272\250n hi\341\273\207n \304\221\341\273\223 th\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolHideSeries->setText(QCoreApplication::translate("FrmSensorPracticeSoundWave", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmSensorPracticeSoundWave: public Ui_FrmSensorPracticeSoundWave {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMSENSORPRACTICESOUNDWAVE_H
