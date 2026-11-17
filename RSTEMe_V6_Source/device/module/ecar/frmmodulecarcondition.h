#ifndef FRMMODULECARCONDITION_H
#define FRMMODULECARCONDITION_H

#include <QMainWindow>
#include "device/module/ecar/ecardataunit.h"
#include "device/module/ecar/econditionunit.h"

namespace Ui {
class FrmModuleCarCondition;
}

class FrmModuleCarCondition : public QMainWindow
{
    Q_OBJECT

public:
    explicit FrmModuleCarCondition(QWidget *parent = nullptr);
    ~FrmModuleCarCondition();

    void setCar(ECarDataUnit *car01,ECarDataUnit *car02,EConditionUnit::ConditionType type);
signals:
    void replySetCondition(EConditionUnit::ConditionType cond);
private slots:
    void on_pushButton_cancel_clicked();

    void on_radioButton_Car01_compare_toggled(bool checked);

    void on_pushButton_ok_clicked();

    void on_pushButton_removeCondition_clicked();

private:
    Ui::FrmModuleCarCondition *ui;
    ECarDataUnit *m_ecar_01 = nullptr;
    ECarDataUnit *m_ecar_02 = nullptr;
    ECarDataUnit *m_ecar = nullptr;
    EConditionUnit::ConditionUnit_TypeDef m_practiceCondition;
    EConditionUnit::ConditionType m_conditionType;

    void showMsgError(QString str);
    bool getValue();
    void initDisplay();
    void updateDisplay();
};

#endif // FRMMODULECARCONDITION_H
