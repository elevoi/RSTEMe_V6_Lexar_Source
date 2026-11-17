#ifndef FRMDEVICEALARM_H
#define FRMDEVICEALARM_H

#include <QMainWindow>
#include <QTime>
#include "device/def/esensor.h"
#include "device/edevice.h"
#include "device/def/edeviceparameter.h"
#include <QToolButton>

namespace Ui {
class FrmDeviceAlarm;
}

class FrmDeviceAlarm : public QMainWindow
{
    Q_OBJECT

public:
    explicit FrmDeviceAlarm(QWidget *parent = nullptr);
    ~FrmDeviceAlarm();
    void setDevice(EDevice *dev);
    inline EDevice* device(){return m_edevice;}
    void setSensor(ESensor *sen);





protected:
    void closeEvent(QCloseEvent *event) override;
private slots:
    void on_newData(int id);
    void on_timerPoll();

    void on_toolButton_port01_on_clicked();

    void on_toolButton_port01_off_clicked();

    void on_toolButton_port02_on_clicked();

    void on_toolButton_port02_off_clicked();

    void on_comboBox_port01_mode_currentIndexChanged(int index);

    void on_comboBox_port02_mode_currentIndexChanged(int index);

    void on_pushButton_cancel_clicked();

    void on_toolButton_port01_update_clicked();

    void on_toolButton_port02_update_clicked();

    void on_checkBox_port01_enable_clicked();

    void on_checkBox_port02_enable_clicked();

    void on_toolButton_port01_pwm_clicked();

    void on_toolButton_port02_pwm_clicked();

private:
    Ui::FrmDeviceAlarm *ui;
    EDevice *m_edevice = nullptr;
    ESensor *m_esensor = nullptr;
    EDeviceParameter m_para;
    bool m_initStatus = false;
    QTimer *m_timerPoll = nullptr;

    EDeviceParameter::TypeDef_Alarm m_port01,m_port02;

    void setAlarmPort1();
    void setAlarmPort2();

    bool m_updateValue=false;
    void init();
    void setValue();
    void checkOnOffPort1();
    void checkOnOffPort2();
    void checkAlarmPort1();
    void checkAlarmPort2();
    void modeOnOffPort1();
    void modeOnOffPort2();
    void modeLevelPort1();
    void modeLevelPort2();

    //toolbutton effect
    void setToolPushOnOff(QToolButton *bt,bool st);
};

#endif // FRMDEVICEALARM_H
