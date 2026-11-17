#ifndef FRMMODULECARSETUP_H
#define FRMMODULECARSETUP_H

#include <QMainWindow>
#include "device/module/ecar/ecardataunit.h"
#include "device/module/emodule.h"
#include <QComboBox>


namespace Ui {
class FrmModuleCarSetup;
}

class FrmModuleCarSetup : public QMainWindow
{
    Q_OBJECT

public:
    explicit FrmModuleCarSetup(QWidget *parent = nullptr);
    ~FrmModuleCarSetup();

    void setModule(EModule *dev);
    void setCar(ECarDataUnit *var,ECarDataUnit::CAR_NUMBER_TYPE num);
    void updateCar(ECarDataUnit *var,ECarDataUnit::CAR_NUMBER_TYPE num);
private slots:
    void on_pushButton_cancel_clicked();

    void on_toolButton_setZeroDistance_clicked();

    void on_toolButton_setZeroForce_clicked();

    void on_toolButton_setTimeShutdown_clicked();

    void on_toolButton_setCalibDistance_clicked();

    void on_toolButton_setCalibForce_clicked();

    void on_toolButton_setCountPerShutdown_clicked();

    void on_toolButton_setAddress_clicked();

    void on_toolButton_setZerAxis_clicked();

    void on_toolButton_setOffsetAxis_clicked();

    void on_toolButton_clearFrameError_clicked();

    void on_toolButton_setCarSampleTime_clicked();

private:
    Ui::FrmModuleCarSetup *ui;

    ECarDataUnit *m_ecarUnit=nullptr;
    ECarDataUnit::CAR_NUMBER_TYPE   m_ecarNum;
    EModule *m_emodule=nullptr;

    bool m_updateSetupStatus = false;
    void msgCarDisconnect();
    void updateUnits();
    void updateUnits(QComboBox *cbx,QList<ECarDataUnit::UnitType> unit);
    void updatePrecistions(QComboBox *cbx,QList<ECarDataUnit::PrecisionType> res);
    void updateSetup();
    void updateDisplay();
    void setControl(uint8_t cmd_car1,uint8_t cmd_car2, uint32_t value_car1, uint32_t value_car2);
    bool setCar(uint8_t cmd,uint32_t value);
    int getIndex(QList<ECarDataUnit::UnitType> list,ECarDataUnit::UnitType var);
    int getIndex(QList<ECarDataUnit::PrecisionType> list,ECarDataUnit::PrecisionType var);
    void setIndex(QList<ECarDataUnit::UnitType> list,ECarDataUnit::UnitType *var,int index);
    void setIndex(QList<ECarDataUnit::PrecisionType> list,ECarDataUnit::PrecisionType *var,int index);
    void setIndexCombobox(QComboBox *cbx,int index);
};

#endif // FRMMODULECARSETUP_H
