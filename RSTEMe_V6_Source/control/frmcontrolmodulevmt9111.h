#ifndef FRMCONTROLMODULEVMT9111_H
#define FRMCONTROLMODULEVMT9111_H

#include <QMainWindow>
#include "device/def/esensor.h"
#include "device/edevice.h"
#include "device/def/edeviceparameter.h"


namespace Ui {
class FrmControlModuleVMT9111;
}

class FrmControlModuleVMT9111 : public QMainWindow
{
    Q_OBJECT

public:
    explicit FrmControlModuleVMT9111(QWidget *parent = nullptr);
    ~FrmControlModuleVMT9111();

    void setDevice(EDevice *dev);
    inline EDevice* device(){return m_edevice;}
    void setSensor(ESensor *sen);

private slots:
    void on_newData(int id);

    void on_toolButton_keyBack_clicked();

    void on_toolButton_keyStop_clicked();

    void on_toolButton_keyForward_clicked();

    void on_pushButton_cancel_clicked();

private:
    Ui::FrmControlModuleVMT9111 *ui;

    enum MotorControlCommand{
        MCC_NEXT = 1,
        MCC_STOP = 2,
        MCC_BACK = 3
    };

    EDevice *m_edevice = nullptr;
    ESensor *m_esensor = nullptr;
    EDeviceParameter m_para;
    bool m_initStatus = false;

    void init();
    void setValue();
};

#endif // FRMCONTROLMODULEVMT9111_H
