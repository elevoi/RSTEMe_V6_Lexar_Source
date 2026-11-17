#ifndef FRMMODULEPRACTICECAR_H
#define FRMMODULEPRACTICECAR_H

#include <QMainWindow>
#include "device/edevice.h"
#include "device/module/emodule.h"
#include "device/module/ecar/emod203parameter.h"
#include <QTimer>
#include <QCheckBox>
#include <QtCharts/QChart>
#include <chart/echartview.h>
#include <QtCharts/QSplineSeries>

#include "device/module/ecar/ecarpractice.h"
#include "device/module/ecar/widmodulecar.h"
#include "device/module/ecar/frmmodulecarcondition.h"
#include "device/module/ecar/ecarfile.h"
#include "device/module/ecar/ecarfilecondition.h"

#include <QTableWidgetItem>
#include "widget/econtainer.h"

namespace Ui {
class FrmModulePracticeCar;
}

class FrmModulePracticeCar : public QMainWindow
{
    Q_OBJECT

public:
    explicit FrmModulePracticeCar(QWidget *parent = nullptr);
    ~FrmModulePracticeCar();

    typedef enum {
        NCAR1_DISTACE,
        NCAR1_SPEED,
        NCAR1_ACCELE,
        NCAR1_FORCE,
        NCAR1_AXIS_X,
        NCAR1_AXIS_Y,
        NCAR1_AXIS_Z,
        NCAR2_DISTACE,
        NCAR2_SPEED,
        NCAR2_ACCELE,
        NCAR2_FORCE,
        NCAR2_AXIS_X,
        NCAR2_AXIS_Y,
        NCAR2_AXIS_Z
    }SenNameTypeDef;
    typedef struct __SEN_TYPE{
        bool enable = true;
        QValueAxis *axisY = nullptr;
        QLineSeries *line = nullptr;
        qreal max=-9999999;
        qreal min=9999999;
    }SensorTypeDef;

    enum AxisType{
        ATP_single,
        ATP_multiple
    };

    typedef struct __PRACTICE_TYPE{
        bool play= false;//pause
        qreal timeOut=60;
        qreal timeTick=0;
        int numberOf = 0;
        AxisType axisType=ATP_multiple;
        QList<SensorTypeDef*> sensorList;
        QList<QCheckBox*> cbxList;
        QList<QColor>   lineColors;
    }PracticeTypeDef;

    typedef enum {
        PTD_PAUSE,
        PTD_PLAY,
        PTD_CLEAR
    }PlayTypeDef;

    typedef enum{
        PRC_IDLE,
        PRC_ZERO,
        PRC_SETUP,
        PRC_COND_START,
        PRC_COND_STOP,
        PRC_COND_FINISH
    }ProcessPlay_TypeDef;

    typedef enum{
        ZERO_IDLE,
        ZERO_DISTANCE,
        ZERO_FORCE,
        ZERO_AXIS,
        ZERO_FINISH,
    }ProcessZero_Typedef;

    struct EPractice_Parameter{        //oscillo
        int sampleTime = 80;
        int maxRegRTU = 125;
    };

    void addDevice(EDevice *dev);
    inline EDevice* device(){return m_edevice;}
protected:
    //void closeEvent(QCloseEvent *event) override;
    void resizeEvent(QResizeEvent*) override;
private slots:
    void on_newData(int id);
    void on_timerPoll();
    void on_setCondition(EConditionUnit::ConditionType cond);
    void on_setPlay(bool play,EConditionUnit::ConditionData cond,QString error);
    void on_toolButton_toolPlay_clicked();

    void on_toolButton_toolPause_clicked();

    void on_toolButton_toolClear_clicked();

    void on_lineEdit_playTime_editingFinished();

    void on_toolButton_toolHideSeries_clicked();

    void on_toolButton_toolCrosshair_clicked();

    void on_toolButton_toolCallout_clicked();

    void on_toolButton_toolMultiY_clicked();

    void on_toolButton_toolSingleY_clicked();

    void on_toolButton_conditionStart_clicked();

    void on_toolButton_conditionStop_clicked();

    void on_checkBox_zeroDistance_toggled(bool checked);

    void on_checkBox_zeroForce_toggled(bool checked);

    void on_checkBox_zeroAxis_toggled(bool checked);

    void on_toolButton_openFileCondition_clicked();

    void on_toolButton_exportFileNew_clicked();

    void on_comboBox_fileCondition_currentIndexChanged(int index);

    void on_spinBox_linePen_valueChanged(int arg1);

    void on_spinBox_sampleTimeSpeed_valueChanged(int arg1);

    void on_toolButton_saveFileCondition_clicked();

    void on_toolButton_openFile_clicked();

    void on_toolButton_saveFile_clicked();

    void on_toolButton_toolTable_clicked();

    void on_checkBox_Car1_lineSpeed_clicked();

private:
    Ui::FrmModulePracticeCar *ui;
    QTimer *m_timerPoll = nullptr;
    EDevice *m_edevice = nullptr;
    EModule *m_emodule = nullptr;
    EMod203Parameter m_parameter;
    ECarDataUnit *m_ecarUnit1=nullptr;
    ECarDataUnit *m_ecarUnit2=nullptr;
    WidModuleCar *m_widCar_01 = nullptr;
    WidModuleCar *m_widCar_02 = nullptr;
    FrmModuleCarCondition *m_frmCondition = nullptr;
    ECarFile m_ecarFile;
    ECarPractice *m_ecarPractice = nullptr;
    EPractice_Parameter m_practiceParameter;


    struct ToolTableType{
        bool widgetTableBlink = false;
    };

    struct WindowSizeBase{
        QSize window = QSize(1,1);
        QRect graphicView = QRect(1,1,1,1);
        QRect frameChart = QRect(1,1,1,1);
        QRect frameHeader = QRect(1,1,1,1);
        QRect frameCar01 = QRect(1,1,1,1);
        QRect frameCar02= QRect(1,1,1,1);
        QRect frameTrack = QRect(1,1,1,1);
        QRect framePlay = QRect(1,1,1,1);
        QRect frameSetup = QRect(1,1,1,1);
        QRect framePracticeTime = QRect(1,1,1,1);
        QRect frameCondition = QRect(1,1,1,1);
        QRect plantextInfo = QRect(1,1,1,1);

        QRect dataWidget = QRect(1,1,1,1);
        QRect dataEvaluate = QRect(1,1,1,1);
    };
    WindowSizeBase m_widowSizeBase;

    //chart
    QValueAxis *m_axisX = nullptr;
    QValueAxis *m_axisY = nullptr;
    qreal m_axisX_Max = 1;
    qreal m_axisY_Max = -999999;
    qreal m_axisY_Min = 999999;
    QChart *m_chart = nullptr;
    PracticeTypeDef m_practiceType;

    void initSensorType();
    void updateSensorList(QString name,QString unit, QLineSeries *line,QCheckBox *cbx,QColor cl);
    void setAxisType(AxisType var);

    void initChart();
    void updateChart();
    void updateLine(SensorTypeDef* sen);
    void removeChart(SensorTypeDef* sen);
    void removeList(QLineSeries *series);
    void updateTrackLine(EChartView::ETrackLine track);
    void getMinMaxAxis();
    void getMinMaxAxis(SensorTypeDef* sen);
    void resizeAxisXY();
    void resizeAxis(SensorTypeDef* sen);
    void resizeAllAxis();
    void clearChart();

    void setSelectPoint(QLineSeries *series,QPointF p);

    QLineSeries *m_series = nullptr;
    QList <QLineSeries*> m_listSeries;
    EChartView *m_echartView = nullptr;

    void updateSizeWindow(int del_w, int del_h);
    void getSizeWindow();
    void initDisplay();
    void setValue();

    //Table
    EContainer *m_containerTable = nullptr;
    ToolTableType m_toolTableType;
    QTableWidgetItem *m_tableItem = nullptr;
    void refreshToolTable();
    void initTable();
    void updateTable();
    void updataTableSeries(QLineSeries *series);
    void appendTableColumn(QLineSeries *series);
    void removeTableColumn(int column);
    void setTableRow(int row,int column,QTableWidgetItem *item);
    void setSelectTable(QLineSeries *series,QPointF p);
    void removeTableRow();
    void updateEvaluate(QLineSeries *sen,int index);
    void setEvaluateTableRow(int row,int column,QString val);


    //pracetice
    ProcessZero_Typedef m_prcZero=ZERO_IDLE;
    ECarDataUnit::ZeroData_TypeDef    m_zeroData;
    ProcessPlay_TypeDef m_prcPlay=PRC_IDLE;
    PlayTypeDef m_playStatus;
    void setPlay(PlayTypeDef play);
    bool checkPracticePara();
    bool checkCarConnect();
    bool checkNoConditionStart();
    bool checkZero();
    bool processSetup();
    bool processPlay();
    void processPause();
    void processClear();
    bool getTimePractice();
    void updateClock(qreal val);
    void updateClockWise(qreal val);

    //control
    void setControl(uint8_t cmd_car1,uint8_t cmd_car2, uint32_t value_car1, uint32_t value_car2);

    //file
    QList<ECarFileCondition::FDataCondition_TypeDef> m_listFileCondition;
    ECarFileCondition::FDataCondition_TypeDef m_fileCondition;
    ECarFileCondition::FDataCondition_TypeDef getFileCondition();
    void updateFileCondition(ECarFileCondition::FDataCondition_TypeDef cond);
    void newFileCondition();
    void openFileCondition();
    void saveFileCondition();

    void openFilePractice();
    void saveFilePractice();

    //filter
    QList<QPointF> m_lpf_distance,m_lpf_speed;

    void lowPassFilter(double *output,double input, double dt, double rc);
};

#endif // FRMMODULEPRACTICECAR_H
