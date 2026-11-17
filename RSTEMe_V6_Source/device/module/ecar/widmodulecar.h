#ifndef WIDMODULECAR_H
#define WIDMODULECAR_H

#include <QWidget>
#include "device/module/ecar/ecardataunit.h"
#include "device/module/emodule.h"
#include "device/module/ecar/frmmodulecarsetup.h"

namespace Ui {
class WidModuleCar;
}

class WidModuleCar : public QWidget
{
    Q_OBJECT

public:
    explicit WidModuleCar(QWidget *parent = nullptr);
    ~WidModuleCar();

    //function
    void setModule(EModule *dev);
    void updateCar(ECarDataUnit *var,ECarDataUnit::CAR_NUMBER_TYPE num);
private slots:
    void on_toolButton_setup_clicked();

    void on_toolButton_seOffCar_clicked();

    void on_checkBox_vector_toggled(bool checked);

    void on_checkBox_sign_toggled(bool checked);

private:
    Ui::WidModuleCar *ui;

    ECarDataUnit *m_ecarUnit=nullptr;
    ECarDataUnit::CAR_NUMBER_TYPE   m_ecarNum;
    EModule *m_emodule=nullptr;
    FrmModuleCarSetup *m_ecarSetup = nullptr;

    bool m_updateSetupStatus = false;

    void updateSetup();
    void updateDisplay();
    void setControl(uint8_t cmd_car1,uint8_t cmd_car2, uint32_t value_car1, uint32_t value_car2);
    void setCar(uint8_t cmd, uint32_t value);
};

#endif // WIDMODULECAR_H
