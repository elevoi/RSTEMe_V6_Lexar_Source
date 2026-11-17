/********************************************************************************
** Form generated from reading UI file 'frmsensordisplaychart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMSENSORDISPLAYCHART_H
#define UI_FRMSENSORDISPLAYCHART_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmSensorDisplayChart
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsViewChart;
    QFrame *frame_toolTrack;
    QToolButton *toolButton_toolCrosshair;
    QToolButton *toolButton_toolCallout;
    QFrame *frame_toolControl;
    QToolButton *toolButton_toolPause;
    QToolButton *toolButton_toolClear;
    QFrame *line_4;
    QToolButton *toolButton_toolPlay;
    QPushButton *pushButton_cancel;

    void setupUi(QMainWindow *FrmSensorDisplayChart)
    {
        if (FrmSensorDisplayChart->objectName().isEmpty())
            FrmSensorDisplayChart->setObjectName(QString::fromUtf8("FrmSensorDisplayChart"));
        FrmSensorDisplayChart->resize(1200, 700);
        FrmSensorDisplayChart->setMinimumSize(QSize(1200, 700));
        FrmSensorDisplayChart->setMaximumSize(QSize(1200, 700));
        FrmSensorDisplayChart->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(FrmSensorDisplayChart);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsViewChart = new QGraphicsView(centralwidget);
        graphicsViewChart->setObjectName(QString::fromUtf8("graphicsViewChart"));
        graphicsViewChart->setGeometry(QRect(51, 0, 1151, 665));
        graphicsViewChart->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        graphicsViewChart->setFrameShape(QFrame::NoFrame);
        graphicsViewChart->setFrameShadow(QFrame::Raised);
        frame_toolTrack = new QFrame(centralwidget);
        frame_toolTrack->setObjectName(QString::fromUtf8("frame_toolTrack"));
        frame_toolTrack->setGeometry(QRect(0, 0, 51, 111));
        frame_toolTrack->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        frame_toolTrack->setFrameShape(QFrame::NoFrame);
        frame_toolTrack->setFrameShadow(QFrame::Raised);
        toolButton_toolCrosshair = new QToolButton(frame_toolTrack);
        toolButton_toolCrosshair->setObjectName(QString::fromUtf8("toolButton_toolCrosshair"));
        toolButton_toolCrosshair->setGeometry(QRect(5, 10, 40, 40));
        toolButton_toolCrosshair->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/chart/iconChartCrosshair_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icon/chart/iconChartCrosshair_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolCrosshair->setIcon(icon);
        toolButton_toolCrosshair->setIconSize(QSize(30, 30));
        toolButton_toolCrosshair->setAutoRaise(true);
        toolButton_toolCallout = new QToolButton(frame_toolTrack);
        toolButton_toolCallout->setObjectName(QString::fromUtf8("toolButton_toolCallout"));
        toolButton_toolCallout->setGeometry(QRect(5, 60, 40, 40));
        toolButton_toolCallout->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/chart/iconChartCallout_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/icon/chart/iconChartCallout_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolCallout->setIcon(icon1);
        toolButton_toolCallout->setIconSize(QSize(30, 30));
        toolButton_toolCallout->setAutoRaise(true);
        frame_toolControl = new QFrame(centralwidget);
        frame_toolControl->setObjectName(QString::fromUtf8("frame_toolControl"));
        frame_toolControl->setGeometry(QRect(0, 534, 51, 131));
        frame_toolControl->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        frame_toolControl->setFrameShape(QFrame::NoFrame);
        frame_toolControl->setFrameShadow(QFrame::Raised);
        toolButton_toolPause = new QToolButton(frame_toolControl);
        toolButton_toolPause->setObjectName(QString::fromUtf8("toolButton_toolPause"));
        toolButton_toolPause->setGeometry(QRect(5, 50, 40, 40));
        toolButton_toolPause->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/chart/iconChartPause_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/icon/chart/iconChartPause_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolPause->setIcon(icon2);
        toolButton_toolPause->setIconSize(QSize(30, 30));
        toolButton_toolPause->setAutoRaise(true);
        toolButton_toolClear = new QToolButton(frame_toolControl);
        toolButton_toolClear->setObjectName(QString::fromUtf8("toolButton_toolClear"));
        toolButton_toolClear->setGeometry(QRect(5, 90, 40, 40));
        toolButton_toolClear->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/chart/iconChartClear_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icon/chart/iconChartClear_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolClear->setIcon(icon3);
        toolButton_toolClear->setIconSize(QSize(30, 30));
        toolButton_toolClear->setAutoRaise(true);
        line_4 = new QFrame(frame_toolControl);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(5, -7, 41, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        toolButton_toolPlay = new QToolButton(frame_toolControl);
        toolButton_toolPlay->setObjectName(QString::fromUtf8("toolButton_toolPlay"));
        toolButton_toolPlay->setGeometry(QRect(5, 10, 40, 40));
        toolButton_toolPlay->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(2, 87, 122);\n"
"background-color: rgb(240, 240, 240);\n"
"border: none;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"}\n"
"QToolButton:hover{\n"
"background-color: rgb(25, 149, 173);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/chart/iconChartPlay_Off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/icon/chart/iconChartPlay_On.jpg"), QSize(), QIcon::Active, QIcon::Off);
        toolButton_toolPlay->setIcon(icon4);
        toolButton_toolPlay->setIconSize(QSize(30, 30));
        toolButton_toolPlay->setAutoRaise(true);
        pushButton_cancel = new QPushButton(centralwidget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(1090, 670, 101, 25));
        pushButton_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        FrmSensorDisplayChart->setCentralWidget(centralwidget);
        QWidget::setTabOrder(toolButton_toolCrosshair, toolButton_toolCallout);
        QWidget::setTabOrder(toolButton_toolCallout, toolButton_toolPlay);
        QWidget::setTabOrder(toolButton_toolPlay, toolButton_toolPause);
        QWidget::setTabOrder(toolButton_toolPause, toolButton_toolClear);
        QWidget::setTabOrder(toolButton_toolClear, graphicsViewChart);

        retranslateUi(FrmSensorDisplayChart);

        QMetaObject::connectSlotsByName(FrmSensorDisplayChart);
    } // setupUi

    void retranslateUi(QMainWindow *FrmSensorDisplayChart)
    {
        FrmSensorDisplayChart->setWindowTitle(QCoreApplication::translate("FrmSensorDisplayChart", "MainWindow", nullptr));
        toolButton_toolCrosshair->setText(QCoreApplication::translate("FrmSensorDisplayChart", "...", nullptr));
        toolButton_toolCallout->setText(QCoreApplication::translate("FrmSensorDisplayChart", "...", nullptr));
        toolButton_toolPause->setText(QCoreApplication::translate("FrmSensorDisplayChart", "...", nullptr));
        toolButton_toolClear->setText(QCoreApplication::translate("FrmSensorDisplayChart", "...", nullptr));
        toolButton_toolPlay->setText(QCoreApplication::translate("FrmSensorDisplayChart", "...", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("FrmSensorDisplayChart", "Tho\303\241t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmSensorDisplayChart: public Ui_FrmSensorDisplayChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMSENSORDISPLAYCHART_H
