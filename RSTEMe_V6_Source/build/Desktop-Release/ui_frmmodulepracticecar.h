/********************************************************************************
** Form generated from reading UI file 'frmmodulepracticecar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMODULEPRACTICECAR_H
#define UI_FRMMODULEPRACTICECAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmModulePracticeCar
{
public:
    QWidget *centralwidget;
    QFrame *frame_car01;
    QLabel *label_8;
    QFrame *frame;
    QCheckBox *checkBox_Car1_lineAxisZ;
    QCheckBox *checkBox_Car1_lineAcceleration;
    QCheckBox *checkBox_Car1_lineSpeed;
    QCheckBox *checkBox_Car1_lineAxisY;
    QCheckBox *checkBox_Car1_lineForce;
    QCheckBox *checkBox_Car1_lineAxisX;
    QCheckBox *checkBox_Car1_lineDistance;
    QFrame *line_3;
    QFrame *frame_header;
    QToolButton *toolButton_openFile;
    QToolButton *toolButton_saveFile;
    QToolButton *toolButton_exportFile;
    QFrame *line;
    QFrame *frame_chart;
    QGraphicsView *graphicsViewChart;
    QFrame *frame_toolTrack;
    QToolButton *toolButton_toolCrosshair;
    QToolButton *toolButton_toolCallout;
    QLabel *label_6;
    QToolButton *toolButton_toolHideSeries;
    QToolButton *toolButton_toolSingleY;
    QToolButton *toolButton_toolMultiY;
    QLabel *label_7;
    QSpinBox *spinBox_linePen;
    QLabel *label_10;
    QLabel *label_11;
    QToolButton *toolButton_toolTable;
    QTableWidget *tableWidget_DataTable;
    QTableWidget *tableWidget_dataEvaluate;
    QFrame *frame_car02;
    QLabel *label_9;
    QFrame *frame_2;
    QCheckBox *checkBox_Car2_lineAxisZ;
    QCheckBox *checkBox_Car2_lineAxisY;
    QCheckBox *checkBox_Car2_lineForce;
    QCheckBox *checkBox_Car2_lineAxisX;
    QCheckBox *checkBox_Car2_lineAcceleration;
    QCheckBox *checkBox_Car2_lineDistance;
    QCheckBox *checkBox_Car2_lineSpeed;
    QFrame *line_5;
    QFrame *frame_toolSetup;
    QFrame *frame_practiceTime;
    QLabel *label_3;
    QToolButton *toolButton_toolSampleTime_3;
    QLabel *label_timePlay;
    QLineEdit *lineEdit_playTime;
    QLabel *label_timePlay_2;
    QSpinBox *spinBox_sampleTimeSpeed;
    QFrame *frame_practiceCondition;
    QFrame *frame_3;
    QToolButton *toolButton_conditionStart;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QToolButton *toolButton_conditionStop;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPlainTextEdit *plainTextEdit_conditionStart;
    QPlainTextEdit *plainTextEdit_conditionStop;
    QPlainTextEdit *plainTextEdit_info;
    QToolButton *toolButton_exportFileNew;
    QToolButton *toolButton_saveFileCondition;
    QToolButton *toolButton_openFileCondition;
    QComboBox *comboBox_fileCondition;
    QFrame *frame_play;
    QFrame *frame_play_tool;
    QToolButton *toolButton_toolPause;
    QToolButton *toolButton_toolPlay;
    QToolButton *toolButton_toolClear;
    QFrame *line_4;
    QGroupBox *groupBox_3;
    QCheckBox *checkBox_zeroDistance;
    QCheckBox *checkBox_zeroForce;
    QCheckBox *checkBox_zeroAxis;

    void setupUi(QMainWindow *FrmModulePracticeCar)
    {
        if (FrmModulePracticeCar->objectName().isEmpty())
            FrmModulePracticeCar->setObjectName(QString::fromUtf8("FrmModulePracticeCar"));
        FrmModulePracticeCar->resize(1200, 760);
        FrmModulePracticeCar->setMinimumSize(QSize(1200, 760));
        FrmModulePracticeCar->setMaximumSize(QSize(1200, 760));
        centralwidget = new QWidget(FrmModulePracticeCar);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame_car01 = new QFrame(centralwidget);
        frame_car01->setObjectName(QString::fromUtf8("frame_car01"));
        frame_car01->setGeometry(QRect(2, 40, 254, 541));
        frame_car01->setStyleSheet(QString::fromUtf8("QFrame#frame_car01{\n"
"background-color: rgb(206, 206, 206);\n"
"}"));
        frame_car01->setFrameShape(QFrame::StyledPanel);
        frame_car01->setFrameShadow(QFrame::Plain);
        label_8 = new QLabel(frame_car01);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1, 430, 252, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(25, 149, 173);\n"
"background-color: rgb(0, 85, 127);"));
        label_8->setFrameShape(QFrame::Panel);
        label_8->setFrameShadow(QFrame::Raised);
        label_8->setAlignment(Qt::AlignCenter);
        frame = new QFrame(frame_car01);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, 450, 252, 91));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        checkBox_Car1_lineAxisZ = new QCheckBox(frame);
        checkBox_Car1_lineAxisZ->setObjectName(QString::fromUtf8("checkBox_Car1_lineAxisZ"));
        checkBox_Car1_lineAxisZ->setGeometry(QRect(170, 45, 71, 20));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        checkBox_Car1_lineAxisZ->setFont(font1);
        checkBox_Car1_lineAcceleration = new QCheckBox(frame);
        checkBox_Car1_lineAcceleration->setObjectName(QString::fromUtf8("checkBox_Car1_lineAcceleration"));
        checkBox_Car1_lineAcceleration->setGeometry(QRect(20, 45, 131, 20));
        checkBox_Car1_lineAcceleration->setFont(font1);
        checkBox_Car1_lineAcceleration->setStyleSheet(QString::fromUtf8(""));
        checkBox_Car1_lineSpeed = new QCheckBox(frame);
        checkBox_Car1_lineSpeed->setObjectName(QString::fromUtf8("checkBox_Car1_lineSpeed"));
        checkBox_Car1_lineSpeed->setGeometry(QRect(20, 25, 131, 20));
        checkBox_Car1_lineSpeed->setFont(font1);
        checkBox_Car1_lineSpeed->setStyleSheet(QString::fromUtf8(""));
        checkBox_Car1_lineAxisY = new QCheckBox(frame);
        checkBox_Car1_lineAxisY->setObjectName(QString::fromUtf8("checkBox_Car1_lineAxisY"));
        checkBox_Car1_lineAxisY->setGeometry(QRect(170, 25, 71, 20));
        checkBox_Car1_lineAxisY->setFont(font1);
        checkBox_Car1_lineForce = new QCheckBox(frame);
        checkBox_Car1_lineForce->setObjectName(QString::fromUtf8("checkBox_Car1_lineForce"));
        checkBox_Car1_lineForce->setGeometry(QRect(20, 65, 131, 20));
        checkBox_Car1_lineForce->setFont(font1);
        checkBox_Car1_lineForce->setStyleSheet(QString::fromUtf8(""));
        checkBox_Car1_lineAxisX = new QCheckBox(frame);
        checkBox_Car1_lineAxisX->setObjectName(QString::fromUtf8("checkBox_Car1_lineAxisX"));
        checkBox_Car1_lineAxisX->setGeometry(QRect(170, 5, 71, 20));
        checkBox_Car1_lineAxisX->setFont(font1);
        checkBox_Car1_lineDistance = new QCheckBox(frame);
        checkBox_Car1_lineDistance->setObjectName(QString::fromUtf8("checkBox_Car1_lineDistance"));
        checkBox_Car1_lineDistance->setGeometry(QRect(20, 5, 131, 20));
        checkBox_Car1_lineDistance->setFont(font1);
        checkBox_Car1_lineDistance->setStyleSheet(QString::fromUtf8(""));
        checkBox_Car1_lineDistance->setChecked(true);
        line_3 = new QFrame(frame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 89, 252, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        frame_header = new QFrame(centralwidget);
        frame_header->setObjectName(QString::fromUtf8("frame_header"));
        frame_header->setGeometry(QRect(0, 0, 1201, 40));
        frame_header->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        frame_header->setFrameShape(QFrame::NoFrame);
        frame_header->setFrameShadow(QFrame::Raised);
        toolButton_openFile = new QToolButton(frame_header);
        toolButton_openFile->setObjectName(QString::fromUtf8("toolButton_openFile"));
        toolButton_openFile->setGeometry(QRect(10, 5, 30, 30));
        toolButton_openFile->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/chart/iconOpenFile_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icon/chart/iconOpenFile_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_openFile->setIcon(icon);
        toolButton_openFile->setIconSize(QSize(25, 25));
        toolButton_openFile->setAutoRaise(true);
        toolButton_saveFile = new QToolButton(frame_header);
        toolButton_saveFile->setObjectName(QString::fromUtf8("toolButton_saveFile"));
        toolButton_saveFile->setGeometry(QRect(50, 5, 30, 30));
        toolButton_saveFile->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/chart/iconSaveFile_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/icon/chart/iconSaveFile_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_saveFile->setIcon(icon1);
        toolButton_saveFile->setIconSize(QSize(25, 25));
        toolButton_saveFile->setAutoRaise(true);
        toolButton_exportFile = new QToolButton(frame_header);
        toolButton_exportFile->setObjectName(QString::fromUtf8("toolButton_exportFile"));
        toolButton_exportFile->setGeometry(QRect(90, 5, 30, 30));
        toolButton_exportFile->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/chart/iconExportFile_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/icon/chart/iconExportFile_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_exportFile->setIcon(icon2);
        toolButton_exportFile->setIconSize(QSize(25, 25));
        toolButton_exportFile->setAutoRaise(true);
        line = new QFrame(frame_header);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(210, 0, 3, 41));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        frame_chart = new QFrame(centralwidget);
        frame_chart->setObjectName(QString::fromUtf8("frame_chart"));
        frame_chart->setGeometry(QRect(258, 40, 685, 541));
        frame_chart->setFrameShape(QFrame::StyledPanel);
        frame_chart->setFrameShadow(QFrame::Plain);
        graphicsViewChart = new QGraphicsView(frame_chart);
        graphicsViewChart->setObjectName(QString::fromUtf8("graphicsViewChart"));
        graphicsViewChart->setGeometry(QRect(50, 1, 465, 541));
        graphicsViewChart->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        graphicsViewChart->setFrameShape(QFrame::NoFrame);
        graphicsViewChart->setFrameShadow(QFrame::Raised);
        frame_toolTrack = new QFrame(frame_chart);
        frame_toolTrack->setObjectName(QString::fromUtf8("frame_toolTrack"));
        frame_toolTrack->setGeometry(QRect(1, 1, 51, 541));
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/chart/iconChartCrosshair_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icon/chart/iconChartCrosshair_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolCrosshair->setIcon(icon3);
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/chart/iconChartCallout_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/icon/chart/iconChartCallout_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolCallout->setIcon(icon4);
        toolButton_toolCallout->setIconSize(QSize(30, 30));
        toolButton_toolCallout->setAutoRaise(true);
        label_6 = new QLabel(frame_toolTrack);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1, 0, 50, 20));
        label_6->setFont(font);
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
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/chart/iconSeriesCheck_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/icon/chart/iconSeriesCheck_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolHideSeries->setIcon(icon5);
        toolButton_toolHideSeries->setIconSize(QSize(30, 30));
        toolButton_toolHideSeries->setAutoRaise(true);
        toolButton_toolSingleY = new QToolButton(frame_toolTrack);
        toolButton_toolSingleY->setObjectName(QString::fromUtf8("toolButton_toolSingleY"));
        toolButton_toolSingleY->setGeometry(QRect(4, 270, 40, 40));
        toolButton_toolSingleY->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/chart/iconChartSingleY_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QString::fromUtf8(":/icon/chart/iconChartSingleY_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolSingleY->setIcon(icon6);
        toolButton_toolSingleY->setIconSize(QSize(30, 30));
        toolButton_toolSingleY->setAutoRaise(true);
        toolButton_toolMultiY = new QToolButton(frame_toolTrack);
        toolButton_toolMultiY->setObjectName(QString::fromUtf8("toolButton_toolMultiY"));
        toolButton_toolMultiY->setGeometry(QRect(4, 220, 40, 40));
        toolButton_toolMultiY->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/chart/iconChartMultiY_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QString::fromUtf8(":/icon/chart/iconChartMultiY_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolMultiY->setIcon(icon7);
        toolButton_toolMultiY->setIconSize(QSize(30, 30));
        toolButton_toolMultiY->setAutoRaise(true);
        label_7 = new QLabel(frame_toolTrack);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 190, 50, 20));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(25, 149, 173);"));
        label_7->setFrameShape(QFrame::Panel);
        label_7->setFrameShadow(QFrame::Raised);
        label_7->setAlignment(Qt::AlignCenter);
        spinBox_linePen = new QSpinBox(frame_toolTrack);
        spinBox_linePen->setObjectName(QString::fromUtf8("spinBox_linePen"));
        spinBox_linePen->setGeometry(QRect(6, 490, 40, 31));
        spinBox_linePen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_linePen->setMinimum(1);
        spinBox_linePen->setMaximum(5);
        spinBox_linePen->setValue(2);
        label_10 = new QLabel(frame_toolTrack);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 460, 50, 20));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(25, 149, 173);"));
        label_10->setFrameShape(QFrame::Panel);
        label_10->setFrameShadow(QFrame::Raised);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(frame_toolTrack);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 350, 50, 20));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(25, 149, 173);"));
        label_11->setFrameShape(QFrame::Panel);
        label_11->setFrameShadow(QFrame::Raised);
        label_11->setAlignment(Qt::AlignCenter);
        toolButton_toolTable = new QToolButton(frame_toolTrack);
        toolButton_toolTable->setObjectName(QString::fromUtf8("toolButton_toolTable"));
        toolButton_toolTable->setGeometry(QRect(5, 380, 40, 40));
        toolButton_toolTable->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/chart/iconChartTable_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QString::fromUtf8(":/icon/chart/iconChartTable_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        icon8.addFile(QString::fromUtf8(":/icon/chart/iconChartTable_On.jpg"), QSize(), QIcon::Active, QIcon::On);
        toolButton_toolTable->setIcon(icon8);
        toolButton_toolTable->setIconSize(QSize(30, 30));
        toolButton_toolTable->setAutoRaise(true);
        tableWidget_DataTable = new QTableWidget(frame_chart);
        if (tableWidget_DataTable->columnCount() < 1)
            tableWidget_DataTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_DataTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget_DataTable->setObjectName(QString::fromUtf8("tableWidget_DataTable"));
        tableWidget_DataTable->setGeometry(QRect(514, -1, 171, 412));
        tableWidget_DataTable->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        tableWidget_DataTable->setMouseTracking(true);
        tableWidget_DataTable->setAcceptDrops(false);
        tableWidget_DataTable->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"	alternate-background-color: rgb(255, 255, 222);\n"
"	background-color: rgb(250, 255, 255);\n"
"}\n"
"QTableWidget::item:selected{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(64, 65, 66);\n"
"}\n"
"QHeaderView{\n"
"background-color: rgb(30, 40, 65);\n"
"background-color: rgb(25, 149, 173);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QHeaderView::section{\n"
" background-color: rgb(30, 40, 65);\n"
"   background-color: rgb(25, 149, 173);\n"
"   color: rgb(255, 255, 255);\n"
"}"));
        tableWidget_DataTable->setFrameShape(QFrame::Box);
        tableWidget_DataTable->setFrameShadow(QFrame::Raised);
        tableWidget_DataTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_DataTable->setDragEnabled(true);
        tableWidget_DataTable->setDragDropOverwriteMode(true);
        tableWidget_DataTable->setDefaultDropAction(Qt::IgnoreAction);
        tableWidget_DataTable->setAlternatingRowColors(true);
        tableWidget_DataTable->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_DataTable->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableWidget_DataTable->verticalHeader()->setVisible(false);
        tableWidget_dataEvaluate = new QTableWidget(frame_chart);
        if (tableWidget_dataEvaluate->columnCount() < 1)
            tableWidget_dataEvaluate->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_dataEvaluate->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        if (tableWidget_dataEvaluate->rowCount() < 6)
            tableWidget_dataEvaluate->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_dataEvaluate->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_dataEvaluate->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_dataEvaluate->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_dataEvaluate->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_dataEvaluate->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_dataEvaluate->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem8->setFont(font1);
        __qtablewidgetitem8->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_dataEvaluate->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFont(font1);
        __qtablewidgetitem9->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_dataEvaluate->setItem(1, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font1);
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_dataEvaluate->setItem(2, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem11->setFont(font1);
        __qtablewidgetitem11->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_dataEvaluate->setItem(3, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setFont(font1);
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_dataEvaluate->setItem(4, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font1);
        __qtablewidgetitem13->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget_dataEvaluate->setItem(5, 0, __qtablewidgetitem13);
        tableWidget_dataEvaluate->setObjectName(QString::fromUtf8("tableWidget_dataEvaluate"));
        tableWidget_dataEvaluate->setGeometry(QRect(514, 410, 171, 131));
        QFont font2;
        font2.setPointSize(9);
        tableWidget_dataEvaluate->setFont(font2);
        tableWidget_dataEvaluate->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        tableWidget_dataEvaluate->setMouseTracking(true);
        tableWidget_dataEvaluate->setAcceptDrops(false);
        tableWidget_dataEvaluate->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"	alternate-background-color: rgb(255, 255, 222);\n"
"	background-color: rgb(250, 255, 255);\n"
"}\n"
"QTableWidget::item:selected{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(64, 65, 66);\n"
"}\n"
"QHeaderView{\n"
"background-color: rgb(30, 40, 65);\n"
"background-color: rgb(25, 149, 173);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QHeaderView::section{\n"
" background-color: rgb(30, 40, 65);\n"
"   background-color: rgb(25, 149, 173);\n"
"   color: rgb(255, 255, 255);\n"
"}"));
        tableWidget_dataEvaluate->setFrameShape(QFrame::Box);
        tableWidget_dataEvaluate->setFrameShadow(QFrame::Raised);
        tableWidget_dataEvaluate->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_dataEvaluate->setDragEnabled(true);
        tableWidget_dataEvaluate->setDragDropOverwriteMode(true);
        tableWidget_dataEvaluate->setDefaultDropAction(Qt::IgnoreAction);
        tableWidget_dataEvaluate->setAlternatingRowColors(true);
        tableWidget_dataEvaluate->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_dataEvaluate->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableWidget_dataEvaluate->horizontalHeader()->setVisible(false);
        tableWidget_dataEvaluate->verticalHeader()->setVisible(false);
        tableWidget_dataEvaluate->verticalHeader()->setMinimumSectionSize(20);
        tableWidget_dataEvaluate->verticalHeader()->setDefaultSectionSize(20);
        frame_car02 = new QFrame(centralwidget);
        frame_car02->setObjectName(QString::fromUtf8("frame_car02"));
        frame_car02->setGeometry(QRect(945, 40, 254, 541));
        frame_car02->setStyleSheet(QString::fromUtf8("QFrame#frame_car02{\n"
"background-color: rgb(206, 206, 206);\n"
"}"));
        frame_car02->setFrameShape(QFrame::StyledPanel);
        frame_car02->setFrameShadow(QFrame::Plain);
        label_9 = new QLabel(frame_car02);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1, 430, 252, 20));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(25, 149, 173);\n"
"background-color: rgb(0, 85, 127);"));
        label_9->setFrameShape(QFrame::Panel);
        label_9->setFrameShadow(QFrame::Raised);
        label_9->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(frame_car02);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(1, 450, 252, 91));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        checkBox_Car2_lineAxisZ = new QCheckBox(frame_2);
        checkBox_Car2_lineAxisZ->setObjectName(QString::fromUtf8("checkBox_Car2_lineAxisZ"));
        checkBox_Car2_lineAxisZ->setGeometry(QRect(170, 45, 71, 20));
        checkBox_Car2_lineAxisZ->setFont(font1);
        checkBox_Car2_lineAxisY = new QCheckBox(frame_2);
        checkBox_Car2_lineAxisY->setObjectName(QString::fromUtf8("checkBox_Car2_lineAxisY"));
        checkBox_Car2_lineAxisY->setGeometry(QRect(170, 25, 71, 20));
        checkBox_Car2_lineAxisY->setFont(font1);
        checkBox_Car2_lineForce = new QCheckBox(frame_2);
        checkBox_Car2_lineForce->setObjectName(QString::fromUtf8("checkBox_Car2_lineForce"));
        checkBox_Car2_lineForce->setGeometry(QRect(20, 65, 131, 20));
        checkBox_Car2_lineForce->setFont(font1);
        checkBox_Car2_lineForce->setStyleSheet(QString::fromUtf8(""));
        checkBox_Car2_lineAxisX = new QCheckBox(frame_2);
        checkBox_Car2_lineAxisX->setObjectName(QString::fromUtf8("checkBox_Car2_lineAxisX"));
        checkBox_Car2_lineAxisX->setGeometry(QRect(170, 5, 71, 20));
        checkBox_Car2_lineAxisX->setFont(font1);
        checkBox_Car2_lineAcceleration = new QCheckBox(frame_2);
        checkBox_Car2_lineAcceleration->setObjectName(QString::fromUtf8("checkBox_Car2_lineAcceleration"));
        checkBox_Car2_lineAcceleration->setGeometry(QRect(20, 45, 131, 20));
        checkBox_Car2_lineAcceleration->setFont(font1);
        checkBox_Car2_lineAcceleration->setStyleSheet(QString::fromUtf8(""));
        checkBox_Car2_lineDistance = new QCheckBox(frame_2);
        checkBox_Car2_lineDistance->setObjectName(QString::fromUtf8("checkBox_Car2_lineDistance"));
        checkBox_Car2_lineDistance->setGeometry(QRect(20, 5, 131, 20));
        checkBox_Car2_lineDistance->setFont(font1);
        checkBox_Car2_lineDistance->setStyleSheet(QString::fromUtf8(""));
        checkBox_Car2_lineDistance->setChecked(true);
        checkBox_Car2_lineSpeed = new QCheckBox(frame_2);
        checkBox_Car2_lineSpeed->setObjectName(QString::fromUtf8("checkBox_Car2_lineSpeed"));
        checkBox_Car2_lineSpeed->setGeometry(QRect(20, 25, 131, 20));
        checkBox_Car2_lineSpeed->setFont(font1);
        checkBox_Car2_lineSpeed->setStyleSheet(QString::fromUtf8(""));
        line_5 = new QFrame(frame_2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 89, 252, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        frame_toolSetup = new QFrame(centralwidget);
        frame_toolSetup->setObjectName(QString::fromUtf8("frame_toolSetup"));
        frame_toolSetup->setGeometry(QRect(0, 580, 1201, 31));
        frame_toolSetup->setStyleSheet(QString::fromUtf8("QFrame#frame_toolSetup{\n"
"	background-color: rgb(25, 149, 173);\n"
"    /*background-color: rgb(3, 87, 123);;*/\n"
"}"));
        frame_toolSetup->setFrameShape(QFrame::Panel);
        frame_toolSetup->setFrameShadow(QFrame::Raised);
        frame_practiceTime = new QFrame(frame_toolSetup);
        frame_practiceTime->setObjectName(QString::fromUtf8("frame_practiceTime"));
        frame_practiceTime->setGeometry(QRect(510, 0, 691, 31));
        frame_practiceTime->setFrameShape(QFrame::StyledPanel);
        frame_practiceTime->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_practiceTime);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(650, 7, 31, 16));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_toolSampleTime_3 = new QToolButton(frame_practiceTime);
        toolButton_toolSampleTime_3->setObjectName(QString::fromUtf8("toolButton_toolSampleTime_3"));
        toolButton_toolSampleTime_3->setGeometry(QRect(340, 3, 25, 25));
        toolButton_toolSampleTime_3->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/chart/iconPracticeTime_On.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_toolSampleTime_3->setIcon(icon9);
        toolButton_toolSampleTime_3->setIconSize(QSize(30, 30));
        toolButton_toolSampleTime_3->setAutoRaise(true);
        label_timePlay = new QLabel(frame_practiceTime);
        label_timePlay->setObjectName(QString::fromUtf8("label_timePlay"));
        label_timePlay->setGeometry(QRect(340, 6, 141, 20));
        label_timePlay->setFont(font1);
        label_timePlay->setLayoutDirection(Qt::RightToLeft);
        label_timePlay->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_timePlay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_playTime = new QLineEdit(frame_practiceTime);
        lineEdit_playTime->setObjectName(QString::fromUtf8("lineEdit_playTime"));
        lineEdit_playTime->setGeometry(QRect(500, 3, 141, 25));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        lineEdit_playTime->setFont(font3);
        lineEdit_playTime->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color: rgb(3, 87, 123);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"}"));
        lineEdit_playTime->setMaxLength(10);
        lineEdit_playTime->setAlignment(Qt::AlignCenter);
        label_timePlay_2 = new QLabel(frame_toolSetup);
        label_timePlay_2->setObjectName(QString::fromUtf8("label_timePlay_2"));
        label_timePlay_2->setGeometry(QRect(10, 5, 231, 20));
        label_timePlay_2->setFont(font1);
        label_timePlay_2->setLayoutDirection(Qt::RightToLeft);
        label_timePlay_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_timePlay_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_sampleTimeSpeed = new QSpinBox(frame_toolSetup);
        spinBox_sampleTimeSpeed->setObjectName(QString::fromUtf8("spinBox_sampleTimeSpeed"));
        spinBox_sampleTimeSpeed->setGeometry(QRect(250, 3, 61, 25));
        spinBox_sampleTimeSpeed->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_sampleTimeSpeed->setMinimum(10);
        spinBox_sampleTimeSpeed->setMaximum(1000);
        spinBox_sampleTimeSpeed->setValue(100);
        frame_practiceCondition = new QFrame(centralwidget);
        frame_practiceCondition->setObjectName(QString::fromUtf8("frame_practiceCondition"));
        frame_practiceCondition->setGeometry(QRect(0, 610, 1001, 145));
        frame_practiceCondition->setFrameShape(QFrame::StyledPanel);
        frame_practiceCondition->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_practiceCondition);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 5, 501, 61));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Plain);
        toolButton_conditionStart = new QToolButton(frame_3);
        toolButton_conditionStart->setObjectName(QString::fromUtf8("toolButton_conditionStart"));
        toolButton_conditionStart->setGeometry(QRect(5, 5, 161, 51));
        toolButton_conditionStart->setFont(font1);
        toolButton_conditionStart->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 0px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 2px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/chart/iconChartCar_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QString::fromUtf8(":/icon/chart/iconChartCar_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_conditionStart->setIcon(icon10);
        toolButton_conditionStart->setIconSize(QSize(30, 30));
        toolButton_conditionStart->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_conditionStart->setAutoRaise(true);
        line_6 = new QFrame(frame_3);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(169, 5, 3, 51));
        line_6->setStyleSheet(QString::fromUtf8(""));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(frame_3);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(170, 22, 161, 21));
        line_7->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 0, 0);"));
        line_7->setLineWidth(1);
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(frame_3);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(330, 5, 3, 51));
        line_8->setStyleSheet(QString::fromUtf8(""));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        toolButton_conditionStop = new QToolButton(frame_3);
        toolButton_conditionStop->setObjectName(QString::fromUtf8("toolButton_conditionStop"));
        toolButton_conditionStop->setGeometry(QRect(335, 5, 161, 51));
        toolButton_conditionStop->setFont(font1);
        toolButton_conditionStop->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"	color: rgb(170, 0, 0);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 0px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 2px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_conditionStop->setIcon(icon10);
        toolButton_conditionStop->setIconSize(QSize(30, 30));
        toolButton_conditionStop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_conditionStop->setAutoRaise(true);
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(180, 4, 61, 20));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(270, 4, 61, 20));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(190, 30, 121, 20));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(50, 150, 200);"));
        plainTextEdit_conditionStart = new QPlainTextEdit(frame_practiceCondition);
        plainTextEdit_conditionStart->setObjectName(QString::fromUtf8("plainTextEdit_conditionStart"));
        plainTextEdit_conditionStart->setGeometry(QRect(10, 70, 251, 71));
        plainTextEdit_conditionStart->setFont(font2);
        plainTextEdit_conditionStart->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"color: rgb(2, 87, 122);"));
        plainTextEdit_conditionStart->setFrameShape(QFrame::Panel);
        plainTextEdit_conditionStart->setFrameShadow(QFrame::Sunken);
        plainTextEdit_conditionStart->setReadOnly(true);
        plainTextEdit_conditionStop = new QPlainTextEdit(frame_practiceCondition);
        plainTextEdit_conditionStop->setObjectName(QString::fromUtf8("plainTextEdit_conditionStop"));
        plainTextEdit_conditionStop->setGeometry(QRect(260, 70, 251, 71));
        plainTextEdit_conditionStop->setFont(font2);
        plainTextEdit_conditionStop->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"color: rgb(170, 0, 0);"));
        plainTextEdit_conditionStop->setFrameShape(QFrame::Panel);
        plainTextEdit_conditionStop->setFrameShadow(QFrame::Sunken);
        plainTextEdit_conditionStop->setReadOnly(true);
        plainTextEdit_info = new QPlainTextEdit(frame_practiceCondition);
        plainTextEdit_info->setObjectName(QString::fromUtf8("plainTextEdit_info"));
        plainTextEdit_info->setGeometry(QRect(520, 40, 471, 101));
        QFont font4;
        font4.setPointSize(9);
        font4.setItalic(true);
        plainTextEdit_info->setFont(font4);
        plainTextEdit_info->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 40,40);\n"
"color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);"));
        plainTextEdit_info->setFrameShape(QFrame::Panel);
        plainTextEdit_info->setFrameShadow(QFrame::Sunken);
        plainTextEdit_info->setReadOnly(true);
        toolButton_exportFileNew = new QToolButton(frame_practiceCondition);
        toolButton_exportFileNew->setObjectName(QString::fromUtf8("toolButton_exportFileNew"));
        toolButton_exportFileNew->setGeometry(QRect(960, 5, 30, 30));
        toolButton_exportFileNew->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_exportFileNew->setIcon(icon2);
        toolButton_exportFileNew->setIconSize(QSize(25, 25));
        toolButton_exportFileNew->setAutoRaise(true);
        toolButton_saveFileCondition = new QToolButton(frame_practiceCondition);
        toolButton_saveFileCondition->setObjectName(QString::fromUtf8("toolButton_saveFileCondition"));
        toolButton_saveFileCondition->setGeometry(QRect(560, 5, 30, 30));
        toolButton_saveFileCondition->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_saveFileCondition->setIcon(icon1);
        toolButton_saveFileCondition->setIconSize(QSize(25, 25));
        toolButton_saveFileCondition->setAutoRaise(true);
        toolButton_openFileCondition = new QToolButton(frame_practiceCondition);
        toolButton_openFileCondition->setObjectName(QString::fromUtf8("toolButton_openFileCondition"));
        toolButton_openFileCondition->setGeometry(QRect(520, 5, 30, 30));
        toolButton_openFileCondition->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border-color: rgb(210, 210, 210);\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"}\n"
"QToolButton:hover{\n"
"border-width: 0px;\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        toolButton_openFileCondition->setIcon(icon);
        toolButton_openFileCondition->setIconSize(QSize(25, 25));
        toolButton_openFileCondition->setAutoRaise(true);
        comboBox_fileCondition = new QComboBox(frame_practiceCondition);
        comboBox_fileCondition->setObjectName(QString::fromUtf8("comboBox_fileCondition"));
        comboBox_fileCondition->setGeometry(QRect(600, 5, 351, 30));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setItalic(true);
        comboBox_fileCondition->setFont(font5);
        comboBox_fileCondition->setLayoutDirection(Qt::LeftToRight);
        comboBox_fileCondition->setStyleSheet(QString::fromUtf8("QComboBox#comboBox_fileCondition{\n"
"color: rgb(3, 87, 123);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-color: rgb(100, 100, 100);\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"\n"
"QComboBoxx#comboBox_fileCondition::drop-down{\n"
"width: 20;\n"
"}\n"
"QComboBox:hover{\n"
"background-color: rgb(0, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        comboBox_fileCondition->setInputMethodHints(Qt::ImhHiddenText);
        comboBox_fileCondition->setEditable(true);
        frame_play = new QFrame(centralwidget);
        frame_play->setObjectName(QString::fromUtf8("frame_play"));
        frame_play->setGeometry(QRect(1000, 610, 201, 145));
        frame_play->setFrameShape(QFrame::StyledPanel);
        frame_play->setFrameShadow(QFrame::Raised);
        frame_play_tool = new QFrame(frame_play);
        frame_play_tool->setObjectName(QString::fromUtf8("frame_play_tool"));
        frame_play_tool->setGeometry(QRect(20, 5, 172, 54));
        frame_play_tool->setStyleSheet(QString::fromUtf8(""));
        frame_play_tool->setFrameShape(QFrame::Panel);
        frame_play_tool->setFrameShadow(QFrame::Raised);
        toolButton_toolPause = new QToolButton(frame_play_tool);
        toolButton_toolPause->setObjectName(QString::fromUtf8("toolButton_toolPause"));
        toolButton_toolPause->setGeometry(QRect(1, 1, 100, 51));
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
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icon/chart/iconChartPause_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon11.addFile(QString::fromUtf8(":/icon/chart/iconChartPause_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolPause->setIcon(icon11);
        toolButton_toolPause->setIconSize(QSize(80, 80));
        toolButton_toolPause->setAutoRaise(true);
        toolButton_toolPlay = new QToolButton(frame_play_tool);
        toolButton_toolPlay->setObjectName(QString::fromUtf8("toolButton_toolPlay"));
        toolButton_toolPlay->setGeometry(QRect(1, 1, 100, 51));
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
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icon/chart/iconChartPlay_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon12.addFile(QString::fromUtf8(":/icon/chart/iconChartPlay_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolPlay->setIcon(icon12);
        toolButton_toolPlay->setIconSize(QSize(80, 80));
        toolButton_toolPlay->setAutoRaise(true);
        toolButton_toolClear = new QToolButton(frame_play_tool);
        toolButton_toolClear->setObjectName(QString::fromUtf8("toolButton_toolClear"));
        toolButton_toolClear->setGeometry(QRect(100, 1, 71, 51));
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
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icon/chart/iconChartClear_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon13.addFile(QString::fromUtf8(":/icon/chart/iconChartClear_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolClear->setIcon(icon13);
        toolButton_toolClear->setIconSize(QSize(40, 40));
        toolButton_toolClear->setAutoRaise(true);
        line_4 = new QFrame(frame_play_tool);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(100, 0, 3, 53));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        groupBox_3 = new QGroupBox(frame_play);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 60, 201, 82));
        groupBox_3->setFont(font5);
        groupBox_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));
        checkBox_zeroDistance = new QCheckBox(groupBox_3);
        checkBox_zeroDistance->setObjectName(QString::fromUtf8("checkBox_zeroDistance"));
        checkBox_zeroDistance->setGeometry(QRect(6, 20, 181, 20));
        checkBox_zeroDistance->setFont(font5);
        checkBox_zeroDistance->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        checkBox_zeroDistance->setChecked(true);
        checkBox_zeroForce = new QCheckBox(groupBox_3);
        checkBox_zeroForce->setObjectName(QString::fromUtf8("checkBox_zeroForce"));
        checkBox_zeroForce->setGeometry(QRect(6, 40, 181, 20));
        checkBox_zeroForce->setFont(font5);
        checkBox_zeroForce->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        checkBox_zeroForce->setChecked(true);
        checkBox_zeroAxis = new QCheckBox(groupBox_3);
        checkBox_zeroAxis->setObjectName(QString::fromUtf8("checkBox_zeroAxis"));
        checkBox_zeroAxis->setGeometry(QRect(6, 60, 181, 20));
        checkBox_zeroAxis->setFont(font5);
        checkBox_zeroAxis->setStyleSheet(QString::fromUtf8("color: rgb(3, 87, 123);"));
        FrmModulePracticeCar->setCentralWidget(centralwidget);

        retranslateUi(FrmModulePracticeCar);

        QMetaObject::connectSlotsByName(FrmModulePracticeCar);
    } // setupUi

    void retranslateUi(QMainWindow *FrmModulePracticeCar)
    {
        FrmModulePracticeCar->setWindowTitle(QCoreApplication::translate("FrmModulePracticeCar", "MainWindow", nullptr));
        label_8->setText(QCoreApplication::translate("FrmModulePracticeCar", "\304\220\341\273\223 th\341\273\213", nullptr));
        checkBox_Car1_lineAxisZ->setText(QCoreApplication::translate("FrmModulePracticeCar", "Tr\341\273\245c Z", nullptr));
        checkBox_Car1_lineAcceleration->setText(QCoreApplication::translate("FrmModulePracticeCar", "Gia t\341\273\221c", nullptr));
        checkBox_Car1_lineSpeed->setText(QCoreApplication::translate("FrmModulePracticeCar", "V\341\272\255n t\341\273\221c", nullptr));
        checkBox_Car1_lineAxisY->setText(QCoreApplication::translate("FrmModulePracticeCar", "Tr\341\273\245c Y", nullptr));
        checkBox_Car1_lineForce->setText(QCoreApplication::translate("FrmModulePracticeCar", "L\341\273\261c t\303\241c \304\221\341\273\231ng", nullptr));
        checkBox_Car1_lineAxisX->setText(QCoreApplication::translate("FrmModulePracticeCar", "Tr\341\273\245c X", nullptr));
        checkBox_Car1_lineDistance->setText(QCoreApplication::translate("FrmModulePracticeCar", "Qu\303\243ng \304\221\306\260\341\273\235ng", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_openFile->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "M\341\273\237 b\303\240i th\341\273\261c h\303\240nh", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_openFile->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_saveFile->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "L\306\260u b\303\240i th\341\273\261c h\303\240nh", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_saveFile->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_exportFile->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "Xu\341\272\245t d\341\273\257 li\341\273\207u", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_exportFile->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolCrosshair->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "Con tr\341\273\217 ch\341\273\257 th\341\272\255p", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolCrosshair->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolCallout->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "B\341\272\257t \304\221i\341\273\203m tr\303\252n \304\221\306\260\341\273\235ng \304\221\341\273\223 th\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolCallout->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
        label_6->setText(QCoreApplication::translate("FrmModulePracticeCar", "\304\220\341\273\223 th\341\273\213", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolHideSeries->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "\341\272\250n hi\341\273\207n \304\221\341\273\223 th\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolHideSeries->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolSingleY->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "So s\303\241nh c\303\271ng tr\341\273\245c tung", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolSingleY->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolMultiY->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "So s\303\241nh kh\303\241c tr\341\273\245c tung", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolMultiY->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
        label_7->setText(QCoreApplication::translate("FrmModulePracticeCar", "So s\303\241nh", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_linePen->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "\304\220\341\273\231 d\303\240y b\303\272t v\341\272\275", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("FrmModulePracticeCar", "B\303\272t v\341\272\275", nullptr));
        label_11->setText(QCoreApplication::translate("FrmModulePracticeCar", "B\341\272\243ng", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolTable->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "D\341\273\257 li\341\273\207u d\341\272\241ng b\341\272\243ng", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolTable->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_DataTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FrmModulePracticeCar", "Th\341\273\235i gian (s)", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_dataEvaluate->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FrmModulePracticeCar", "Th\303\264ng s\341\273\221", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_dataEvaluate->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("FrmModulePracticeCar", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_dataEvaluate->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("FrmModulePracticeCar", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_dataEvaluate->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("FrmModulePracticeCar", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_dataEvaluate->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("FrmModulePracticeCar", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_dataEvaluate->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("FrmModulePracticeCar", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_dataEvaluate->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("FrmModulePracticeCar", "6", nullptr));

        const bool __sortingEnabled = tableWidget_dataEvaluate->isSortingEnabled();
        tableWidget_dataEvaluate->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_dataEvaluate->item(0, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("FrmModulePracticeCar", "S\341\273\221 m\341\272\253u", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_dataEvaluate->item(1, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("FrmModulePracticeCar", "Max", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_dataEvaluate->item(2, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("FrmModulePracticeCar", "Min", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_dataEvaluate->item(3, 0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("FrmModulePracticeCar", "Trung b\303\254nh", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_dataEvaluate->item(4, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("FrmModulePracticeCar", "Ph\306\260\306\241ng sai", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_dataEvaluate->item(5, 0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("FrmModulePracticeCar", "\304\220\341\273\231 l\341\273\207ch chu\341\272\251n", nullptr));
        tableWidget_dataEvaluate->setSortingEnabled(__sortingEnabled);

        label_9->setText(QCoreApplication::translate("FrmModulePracticeCar", "\304\220\341\273\223 th\341\273\213", nullptr));
        checkBox_Car2_lineAxisZ->setText(QCoreApplication::translate("FrmModulePracticeCar", "Tr\341\273\245c Z", nullptr));
        checkBox_Car2_lineAxisY->setText(QCoreApplication::translate("FrmModulePracticeCar", "Tr\341\273\245c Y", nullptr));
        checkBox_Car2_lineForce->setText(QCoreApplication::translate("FrmModulePracticeCar", "L\341\273\261c t\303\241c \304\221\341\273\231ng", nullptr));
        checkBox_Car2_lineAxisX->setText(QCoreApplication::translate("FrmModulePracticeCar", "Tr\341\273\245c X", nullptr));
        checkBox_Car2_lineAcceleration->setText(QCoreApplication::translate("FrmModulePracticeCar", "Gia t\341\273\221c", nullptr));
        checkBox_Car2_lineDistance->setText(QCoreApplication::translate("FrmModulePracticeCar", "Qu\303\243ng \304\221\306\260\341\273\235ng", nullptr));
        checkBox_Car2_lineSpeed->setText(QCoreApplication::translate("FrmModulePracticeCar", "V\341\272\255n t\341\273\221c", nullptr));
        label_3->setText(QCoreApplication::translate("FrmModulePracticeCar", "gi\303\242y", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_toolSampleTime_3->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "\304\220\341\273\223 th\341\273\213 \304\221\306\260\341\273\235ng cong", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolSampleTime_3->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
        label_timePlay->setText(QCoreApplication::translate("FrmModulePracticeCar", "Th\341\273\235i gian th\341\273\261c h\303\240nh", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_playTime->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "C\303\240i \304\221\341\272\267t th\341\273\235i gian th\341\273\261c h\303\240nh", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_playTime->setText(QCoreApplication::translate("FrmModulePracticeCar", "10", nullptr));
        label_timePlay_2->setText(QCoreApplication::translate("FrmModulePracticeCar", "Th\341\273\235i gian l\341\272\245y m\341\272\253u v\341\272\255n t\341\273\221c v\303\240 gia t\341\273\221c", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_sampleTimeSpeed->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "\304\220\341\273\231 d\303\240y b\303\272t v\341\272\275", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        toolButton_conditionStart->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "So s\303\241nh c\303\271ng tr\341\273\245c tung", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_conditionStart->setText(QCoreApplication::translate("FrmModulePracticeCar", "Thi\341\272\277t l\341\272\255p \304\221i\341\273\201u ki\341\273\207n b\341\272\257t \304\221\341\272\247u", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_conditionStop->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "So s\303\241nh c\303\271ng tr\341\273\245c tung", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_conditionStop->setText(QCoreApplication::translate("FrmModulePracticeCar", "Thi\341\272\277t l\341\272\255p \304\221i\341\273\201u ki\341\273\207n k\341\272\277t th\303\272c", nullptr));
        label_14->setText(QCoreApplication::translate("FrmModulePracticeCar", "B\341\272\257t \304\221\341\272\247u", nullptr));
        label_15->setText(QCoreApplication::translate("FrmModulePracticeCar", "K\341\272\277t th\303\272c", nullptr));
        label_16->setText(QCoreApplication::translate("FrmModulePracticeCar", "Thu th\341\272\255p d\341\273\257 li\341\273\207u", nullptr));
        plainTextEdit_conditionStart->setPlainText(QCoreApplication::translate("FrmModulePracticeCar", "Kh\303\264ng c\303\263 \304\221i\341\273\201u ki\341\273\207n b\341\272\257t \304\221\341\272\247u", nullptr));
        plainTextEdit_conditionStop->setPlainText(QCoreApplication::translate("FrmModulePracticeCar", "Kh\303\264ng c\303\263 \304\221i\341\273\201u ki\341\273\207n k\341\272\277t th\303\272c", nullptr));
        plainTextEdit_info->setPlainText(QCoreApplication::translate("FrmModulePracticeCar", "Kh\303\264ng c\303\263 \304\221i\341\273\201u ki\341\273\207n b\341\272\257t \304\221\341\272\247u", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_exportFileNew->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "T\341\272\241o t\341\273\207p \304\221i\341\273\201u ki\341\273\207n m\341\273\233i", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_exportFileNew->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_saveFileCondition->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "L\306\260u t\341\273\207p \304\221i\341\273\201u ki\341\273\207n", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_saveFileCondition->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_openFileCondition->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "M\341\273\237 t\341\273\207p \304\221i\341\273\201u ki\341\273\207n", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_openFileCondition->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
#if QT_CONFIG(tooltip)
        comboBox_fileCondition->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "Ki\341\273\203u l\341\272\245y m\341\272\253u", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        toolButton_toolPause->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "D\341\273\253ng l\341\272\241i (Esc)", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolPause->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
#if QT_CONFIG(shortcut)
        toolButton_toolPause->setShortcut(QCoreApplication::translate("FrmModulePracticeCar", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        toolButton_toolPlay->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "B\341\272\257t \304\221\341\272\247u (F1)", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolPlay->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
#if QT_CONFIG(shortcut)
        toolButton_toolPlay->setShortcut(QCoreApplication::translate("FrmModulePracticeCar", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        toolButton_toolClear->setToolTip(QCoreApplication::translate("FrmModulePracticeCar", "X\303\263a \304\221\341\273\223 th\341\273\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_toolClear->setText(QCoreApplication::translate("FrmModulePracticeCar", "...", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("FrmModulePracticeCar", "Thi\341\272\277t l\341\272\255p tham s\341\273\221 th\341\273\261c h\303\240nh", nullptr));
        checkBox_zeroDistance->setText(QCoreApplication::translate("FrmModulePracticeCar", "Thi\341\272\277t l\341\272\255p l\341\272\241i qu\303\243ng \304\221\306\260\341\273\235ng", nullptr));
        checkBox_zeroForce->setText(QCoreApplication::translate("FrmModulePracticeCar", "Thi\341\272\277t l\341\272\255p l\341\272\241i l\341\273\261c t\303\241c \304\221\341\273\231ng", nullptr));
        checkBox_zeroAxis->setText(QCoreApplication::translate("FrmModulePracticeCar", "Thi\341\272\277t l\341\272\255p l\341\272\241i \304\221\341\273\231 nghi\303\252ng", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmModulePracticeCar: public Ui_FrmModulePracticeCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMODULEPRACTICECAR_H
