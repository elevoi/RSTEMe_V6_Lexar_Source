/********************************************************************************
** Form generated from reading UI file 'frmlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMLOGIN_H
#define UI_FRMLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmLogin
{
public:
    QWidget *centralwidget;
    QFrame *frame_2;
    QPushButton *pushButton_Login;
    QFrame *frame;
    QToolButton *toolButton;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;
    QComboBox *comboBox_Account;
    QLabel *label;

    void setupUi(QMainWindow *FrmLogin)
    {
        if (FrmLogin->objectName().isEmpty())
            FrmLogin->setObjectName(QString::fromUtf8("FrmLogin"));
        FrmLogin->setWindowModality(Qt::NonModal);
        FrmLogin->resize(1280, 800);
        FrmLogin->setMinimumSize(QSize(1280, 800));
        FrmLogin->setMaximumSize(QSize(1280, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/group/iconLogin_off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        FrmLogin->setWindowIcon(icon);
        FrmLogin->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 240, 252);\n"
"background-color: rgb(195, 223, 230);\n"
"background-color: rgb(240, 240, 240);"));
        centralwidget = new QWidget(FrmLogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(480, 110, 341, 381));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_Login = new QPushButton(frame_2);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(20, 320, 300, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushButton_Login->setFont(font);
        pushButton_Login->setAutoFillBackground(false);
        pushButton_Login->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: none;\n"
"background-color: rgb(0, 222, 99);\n"
"background-color: rgb(3, 87, 123);\n"
"	color: rgb(0, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        pushButton_Login->setIconSize(QSize(100, 20));
        pushButton_Login->setCheckable(false);
        pushButton_Login->setChecked(false);
        pushButton_Login->setAutoDefault(true);
        frame = new QFrame(frame_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 20, 301, 141));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        toolButton = new QToolButton(frame);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(1, 1, 299, 139));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/group/khangthinh_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(300, 300));
        toolButton->setPopupMode(QToolButton::DelayedPopup);
        toolButton->setAutoRaise(true);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(18, 236, 111, 22));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(2, 87, 122);"));
        lineEdit_Password = new QLineEdit(frame_2);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(19, 260, 300, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        lineEdit_Password->setFont(font2);
        lineEdit_Password->setAcceptDrops(true);
        lineEdit_Password->setAutoFillBackground(false);
        lineEdit_Password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid;\n"
"	color: rgb(2, 87, 122);\n"
"}"));
        lineEdit_Password->setFrame(true);
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        comboBox_Account = new QComboBox(frame_2);
        comboBox_Account->setObjectName(QString::fromUtf8("comboBox_Account"));
        comboBox_Account->setEnabled(true);
        comboBox_Account->setGeometry(QRect(19, 195, 300, 30));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setKerning(true);
        comboBox_Account->setFont(font3);
        comboBox_Account->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 1px solid;\n"
"	color: rgb(2, 87, 122);\n"
"}\n"
"QComboBox::drop-down {\n"
"    width:35px;\n"
"}\n"
""));
        comboBox_Account->setEditable(true);
        comboBox_Account->setFrame(true);
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(18, 170, 161, 22));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(13, 207, 200);\n"
"color: rgb(2, 87, 122);"));
        FrmLogin->setCentralWidget(centralwidget);
        QWidget::setTabOrder(comboBox_Account, lineEdit_Password);
        QWidget::setTabOrder(lineEdit_Password, pushButton_Login);

        retranslateUi(FrmLogin);

        pushButton_Login->setDefault(false);


        QMetaObject::connectSlotsByName(FrmLogin);
    } // setupUi

    void retranslateUi(QMainWindow *FrmLogin)
    {
        FrmLogin->setWindowTitle(QCoreApplication::translate("FrmLogin", "\304\220\304\203ng nh\341\272\255p", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("FrmLogin", "\304\220\304\203ng nh\341\272\255p", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_Login->setShortcut(QCoreApplication::translate("FrmLogin", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
        toolButton->setText(QCoreApplication::translate("FrmLogin", "...", nullptr));
        label_2->setText(QCoreApplication::translate("FrmLogin", "M\341\272\255t kh\341\272\251u", nullptr));
        lineEdit_Password->setText(QString());
        label->setText(QCoreApplication::translate("FrmLogin", "T\303\252n \304\221\304\203ng nh\341\272\255p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmLogin: public Ui_FrmLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMLOGIN_H
