/********************************************************************************
** Form generated from reading UI file 'frmcontrolmodulevmt9111.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCONTROLMODULEVMT9111_H
#define UI_FRMCONTROLMODULEVMT9111_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmControlModuleVMT9111
{
public:
    QWidget *centralwidget;
    QToolButton *toolButton_keyForward;
    QToolButton *toolButton_keyBack;
    QPushButton *pushButton_cancel;
    QFrame *frame;
    QLabel *label_Name;
    QToolButton *toolButton_keyStop;

    void setupUi(QMainWindow *FrmControlModuleVMT9111)
    {
        if (FrmControlModuleVMT9111->objectName().isEmpty())
            FrmControlModuleVMT9111->setObjectName(QString::fromUtf8("FrmControlModuleVMT9111"));
        FrmControlModuleVMT9111->resize(530, 190);
        centralwidget = new QWidget(FrmControlModuleVMT9111);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        toolButton_keyForward = new QToolButton(centralwidget);
        toolButton_keyForward->setObjectName(QString::fromUtf8("toolButton_keyForward"));
        toolButton_keyForward->setGeometry(QRect(350, 60, 150, 75));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        toolButton_keyForward->setFont(font);
        toolButton_keyForward->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_keyForward->setIconSize(QSize(50, 50));
        toolButton_keyForward->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_keyForward->setAutoRaise(true);
        toolButton_keyBack = new QToolButton(centralwidget);
        toolButton_keyBack->setObjectName(QString::fromUtf8("toolButton_keyBack"));
        toolButton_keyBack->setGeometry(QRect(30, 60, 150, 75));
        toolButton_keyBack->setFont(font);
        toolButton_keyBack->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_keyBack->setIconSize(QSize(50, 50));
        toolButton_keyBack->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_keyBack->setAutoRaise(true);
        pushButton_cancel = new QPushButton(centralwidget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(380, 150, 141, 30));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        pushButton_cancel->setFont(font1);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 530, 41));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(2,87, 122);"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        label_Name = new QLabel(frame);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setGeometry(QRect(10, 6, 431, 28));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(14);
        font2.setBold(true);
        label_Name->setFont(font2);
        label_Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_keyStop = new QToolButton(centralwidget);
        toolButton_keyStop->setObjectName(QString::fromUtf8("toolButton_keyStop"));
        toolButton_keyStop->setGeometry(QRect(190, 60, 150, 75));
        toolButton_keyStop->setFont(font);
        toolButton_keyStop->setStyleSheet(QString::fromUtf8("QToolButton{\n"
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
        toolButton_keyStop->setIconSize(QSize(50, 50));
        toolButton_keyStop->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_keyStop->setAutoRaise(true);
        FrmControlModuleVMT9111->setCentralWidget(centralwidget);

        retranslateUi(FrmControlModuleVMT9111);

        QMetaObject::connectSlotsByName(FrmControlModuleVMT9111);
    } // setupUi

    void retranslateUi(QMainWindow *FrmControlModuleVMT9111)
    {
        FrmControlModuleVMT9111->setWindowTitle(QCoreApplication::translate("FrmControlModuleVMT9111", "MainWindow", nullptr));
        toolButton_keyForward->setText(QCoreApplication::translate("FrmControlModuleVMT9111", "TI\341\272\276N", nullptr));
        toolButton_keyBack->setText(QCoreApplication::translate("FrmControlModuleVMT9111", "L\303\231I", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("FrmControlModuleVMT9111", "Tho\303\241t", nullptr));
        label_Name->setText(QCoreApplication::translate("FrmControlModuleVMT9111", "C\341\272\243m bi\341\272\277n", nullptr));
        toolButton_keyStop->setText(QCoreApplication::translate("FrmControlModuleVMT9111", "D\341\273\252NG", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmControlModuleVMT9111: public Ui_FrmControlModuleVMT9111 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCONTROLMODULEVMT9111_H
