/********************************************************************************
** Form generated from reading UI file 'frmdevicesetup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMDEVICESETUP_H
#define UI_FRMDEVICESETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmDeviceSetup
{
public:
    QWidget *centralwidget;
    QFrame *frameDevice;
    QFrame *lineDevice;
    QLabel *label_nameDevice;
    QTextEdit *textEditDescription;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_groupDevice;
    QLabel *label_typeDevice;
    QLabel *label_versionDevice;
    QLabel *label_5;
    QLabel *label_serialNumber;
    QPushButton *pushButton_remove;
    QPushButton *pushButton_save;
    QFrame *frameCancel;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_addDevice;
    QPushButton *pushButton_defaultList;
    QTreeWidget *treeWidgetDevice;
    QPushButton *pushButton_saveList;
    QPushButton *pushButton_openList;

    void setupUi(QMainWindow *FrmDeviceSetup)
    {
        if (FrmDeviceSetup->objectName().isEmpty())
            FrmDeviceSetup->setObjectName(QString::fromUtf8("FrmDeviceSetup"));
        FrmDeviceSetup->resize(860, 592);
        FrmDeviceSetup->setMinimumSize(QSize(860, 592));
        FrmDeviceSetup->setMaximumSize(QSize(860, 592));
        centralwidget = new QWidget(FrmDeviceSetup);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frameDevice = new QFrame(centralwidget);
        frameDevice->setObjectName(QString::fromUtf8("frameDevice"));
        frameDevice->setGeometry(QRect(300, 0, 561, 551));
        frameDevice->setFrameShape(QFrame::Panel);
        frameDevice->setFrameShadow(QFrame::Raised);
        lineDevice = new QFrame(frameDevice);
        lineDevice->setObjectName(QString::fromUtf8("lineDevice"));
        lineDevice->setGeometry(QRect(0, 30, 561, 16));
        lineDevice->setFrameShape(QFrame::HLine);
        lineDevice->setFrameShadow(QFrame::Sunken);
        label_nameDevice = new QLabel(frameDevice);
        label_nameDevice->setObjectName(QString::fromUtf8("label_nameDevice"));
        label_nameDevice->setGeometry(QRect(10, 8, 521, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_nameDevice->setFont(font);
        textEditDescription = new QTextEdit(frameDevice);
        textEditDescription->setObjectName(QString::fromUtf8("textEditDescription"));
        textEditDescription->setGeometry(QRect(40, 180, 510, 321));
        QFont font1;
        font1.setPointSize(10);
        textEditDescription->setFont(font1);
        textEditDescription->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        textEditDescription->setFrameShape(QFrame::NoFrame);
        textEditDescription->setReadOnly(true);
        label_4 = new QLabel(frameDevice);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(36, 101, 71, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        label_4->setFont(font2);
        label = new QLabel(frameDevice);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(55, 81, 41, 31));
        label->setFont(font2);
        label_7 = new QLabel(frameDevice);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(32, 121, 71, 31));
        label_7->setFont(font2);
        label_3 = new QLabel(frameDevice);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(28, 50, 71, 31));
        label_3->setFont(font2);
        label_groupDevice = new QLabel(frameDevice);
        label_groupDevice->setObjectName(QString::fromUtf8("label_groupDevice"));
        label_groupDevice->setGeometry(QRect(110, 81, 201, 31));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        label_groupDevice->setFont(font3);
        label_typeDevice = new QLabel(frameDevice);
        label_typeDevice->setObjectName(QString::fromUtf8("label_typeDevice"));
        label_typeDevice->setGeometry(QRect(110, 101, 201, 31));
        label_typeDevice->setFont(font3);
        label_versionDevice = new QLabel(frameDevice);
        label_versionDevice->setObjectName(QString::fromUtf8("label_versionDevice"));
        label_versionDevice->setGeometry(QRect(110, 121, 201, 31));
        label_versionDevice->setFont(font3);
        label_5 = new QLabel(frameDevice);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(14, 150, 81, 31));
        label_5->setFont(font2);
        label_serialNumber = new QLabel(frameDevice);
        label_serialNumber->setObjectName(QString::fromUtf8("label_serialNumber"));
        label_serialNumber->setGeometry(QRect(110, 50, 201, 31));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        label_serialNumber->setFont(font4);
        label_serialNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));
        label_serialNumber->setAlignment(Qt::AlignCenter);
        pushButton_remove = new QPushButton(frameDevice);
        pushButton_remove->setObjectName(QString::fromUtf8("pushButton_remove"));
        pushButton_remove->setGeometry(QRect(455, 510, 100, 25));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(false);
        font5.setWeight(50);
        pushButton_remove->setFont(font5);
        pushButton_remove->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        pushButton_save = new QPushButton(frameDevice);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(305, 510, 141, 25));
        pushButton_save->setFont(font5);
        pushButton_save->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        frameCancel = new QFrame(centralwidget);
        frameCancel->setObjectName(QString::fromUtf8("frameCancel"));
        frameCancel->setGeometry(QRect(0, 550, 861, 41));
        frameCancel->setFrameShape(QFrame::StyledPanel);
        frameCancel->setFrameShadow(QFrame::Raised);
        pushButton_Cancel = new QPushButton(frameCancel);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(756, 6, 100, 30));
        pushButton_Cancel->setFont(font2);
        pushButton_Cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        pushButton_addDevice = new QPushButton(frameCancel);
        pushButton_addDevice->setObjectName(QString::fromUtf8("pushButton_addDevice"));
        pushButton_addDevice->setGeometry(QRect(605, 6, 141, 31));
        pushButton_addDevice->setFont(font2);
        pushButton_addDevice->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        pushButton_defaultList = new QPushButton(frameCancel);
        pushButton_defaultList->setObjectName(QString::fromUtf8("pushButton_defaultList"));
        pushButton_defaultList->setGeometry(QRect(10, 6, 131, 31));
        pushButton_defaultList->setFont(font2);
        pushButton_defaultList->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        treeWidgetDevice = new QTreeWidget(centralwidget);
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setWeight(75);
        treeWidgetDevice->headerItem()->setText(0, QString());
        treeWidgetDevice->headerItem()->setText(1, QString());
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignCenter);
        __qtreewidgetitem->setFont(1, font6);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        __qtreewidgetitem->setFont(0, font6);
        treeWidgetDevice->setHeaderItem(__qtreewidgetitem);
        treeWidgetDevice->setObjectName(QString::fromUtf8("treeWidgetDevice"));
        treeWidgetDevice->setGeometry(QRect(0, 0, 301, 551));
        treeWidgetDevice->setFrameShape(QFrame::Panel);
        treeWidgetDevice->setFrameShadow(QFrame::Raised);
        pushButton_saveList = new QPushButton(centralwidget);
        pushButton_saveList->setObjectName(QString::fromUtf8("pushButton_saveList"));
        pushButton_saveList->setGeometry(QRect(200, 510, 91, 25));
        pushButton_saveList->setFont(font5);
        pushButton_saveList->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        pushButton_openList = new QPushButton(centralwidget);
        pushButton_openList->setObjectName(QString::fromUtf8("pushButton_openList"));
        pushButton_openList->setGeometry(QRect(110, 510, 81, 25));
        pushButton_openList->setFont(font5);
        pushButton_openList->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        FrmDeviceSetup->setCentralWidget(centralwidget);
        QWidget::setTabOrder(treeWidgetDevice, pushButton_openList);
        QWidget::setTabOrder(pushButton_openList, pushButton_saveList);
        QWidget::setTabOrder(pushButton_saveList, textEditDescription);
        QWidget::setTabOrder(textEditDescription, pushButton_save);
        QWidget::setTabOrder(pushButton_save, pushButton_remove);
        QWidget::setTabOrder(pushButton_remove, pushButton_addDevice);
        QWidget::setTabOrder(pushButton_addDevice, pushButton_Cancel);

        retranslateUi(FrmDeviceSetup);

        QMetaObject::connectSlotsByName(FrmDeviceSetup);
    } // setupUi

    void retranslateUi(QMainWindow *FrmDeviceSetup)
    {
        FrmDeviceSetup->setWindowTitle(QCoreApplication::translate("FrmDeviceSetup", "MainWindow", nullptr));
        label_nameDevice->setText(QCoreApplication::translate("FrmDeviceSetup", "C\341\272\243m bi\341\272\277n nhi\341\273\207t \304\221\341\273\231", nullptr));
        textEditDescription->setHtml(QCoreApplication::translate("FrmDeviceSetup", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PibotoLt'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        textEditDescription->setPlaceholderText(QCoreApplication::translate("FrmDeviceSetup", "M\303\264 t\341\272\243 chi ti\341\272\277t thi\341\272\277t b\341\273\213...", nullptr));
        label_4->setText(QCoreApplication::translate("FrmDeviceSetup", "Ph\303\242n lo\341\272\241i:", nullptr));
        label->setText(QCoreApplication::translate("FrmDeviceSetup", "Nh\303\263m:", nullptr));
        label_7->setText(QCoreApplication::translate("FrmDeviceSetup", "Phi\303\252n b\341\272\243n:", nullptr));
        label_3->setText(QCoreApplication::translate("FrmDeviceSetup", "M\303\243 thi\341\272\277t b\341\273\213:", nullptr));
        label_groupDevice->setText(QCoreApplication::translate("FrmDeviceSetup", "C\341\272\243m bi\341\272\277n", nullptr));
        label_typeDevice->setText(QCoreApplication::translate("FrmDeviceSetup", "C\341\272\243m bi\341\272\277n nhi\341\273\207t \304\221\341\273\231", nullptr));
        label_versionDevice->setText(QCoreApplication::translate("FrmDeviceSetup", "2", nullptr));
        label_5->setText(QCoreApplication::translate("FrmDeviceSetup", "M\303\264 t\341\272\243 chi ti\341\272\277t:", nullptr));
        label_serialNumber->setText(QCoreApplication::translate("FrmDeviceSetup", "000009AF", nullptr));
        pushButton_remove->setText(QCoreApplication::translate("FrmDeviceSetup", "X\303\263a", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_remove->setShortcut(QCoreApplication::translate("FrmDeviceSetup", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_save->setText(QCoreApplication::translate("FrmDeviceSetup", "L\306\260u t\341\273\207p", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_save->setShortcut(QCoreApplication::translate("FrmDeviceSetup", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_Cancel->setText(QCoreApplication::translate("FrmDeviceSetup", "Tho\303\241t", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_Cancel->setShortcut(QCoreApplication::translate("FrmDeviceSetup", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_addDevice->setText(QCoreApplication::translate("FrmDeviceSetup", "Th\303\252m/s\341\273\255a thi\341\272\277t b\341\273\213", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_addDevice->setShortcut(QCoreApplication::translate("FrmDeviceSetup", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_defaultList->setText(QCoreApplication::translate("FrmDeviceSetup", "Kh\303\264i ph\341\273\245c m\341\272\267c \304\221\341\273\213nh", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_defaultList->setShortcut(QCoreApplication::translate("FrmDeviceSetup", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_saveList->setText(QCoreApplication::translate("FrmDeviceSetup", "L\306\260u danh s\303\241ch", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_saveList->setShortcut(QCoreApplication::translate("FrmDeviceSetup", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_openList->setText(QCoreApplication::translate("FrmDeviceSetup", "T\341\272\243i danh s\303\241ch", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_openList->setShortcut(QCoreApplication::translate("FrmDeviceSetup", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class FrmDeviceSetup: public Ui_FrmDeviceSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMDEVICESETUP_H
