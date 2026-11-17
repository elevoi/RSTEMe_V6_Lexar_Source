#include <QApplication>
#include "root/frmlogin.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FrmLogin login;
    //login.onlyRunMainWindow();
    login.show();
    return a.exec();
}
