#ifndef EMANAGEMODULE_H
#define EMANAGEMODULE_H

#include <QObject>
#include <device/edevice.h>
#include <device/edeviceinfo.h>
#include <device/module/ecar/frmmodulepracticecar.h>

class EManageModule : public QObject
{
    Q_OBJECT
public:
    explicit EManageModule(QObject *parent = nullptr);
    ~EManageModule();
    //select device
    void setSelectDevice(EDevice *dev);
signals:
    void replySelectDevice(EDeviceInfo dev,EDevice *edev);
    void replySelectDeviceInfo(EDeviceInfo dev);
private slots:
    void on_finished();
    void on_replySelectDeviceInfo(EDeviceInfo dev);

private:
    EDevice *m_device= nullptr;

    FrmModulePracticeCar *m_frmModulePracticeCar = nullptr;

    void close();
    void selectDevice(EDevice *edev);
};

#endif // EMANAGEMODULE_H
