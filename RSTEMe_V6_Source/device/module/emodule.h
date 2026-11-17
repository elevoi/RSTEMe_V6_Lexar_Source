#ifndef EMODULE_H
#define EMODULE_H


#include <QObject>
#include <QVector>
#include "device/edevice.h"
#include "device/edeviceinfo.h"

#include <QList>
#include "elog.h"


class EModule : public QObject
{
    Q_OBJECT

public:
    EModule(EDevice *dev);
    EModule(QObject *parent = nullptr,EDevice *dev=nullptr);
    ~EModule();
    /* Exported types ------------------------------------------------------------*/
    inline EDevice* device(){return m_edevice;}
    void setDevice(EDevice *dev);

    /* Exported constants --------------------------------------------------------*/

    /* Exported macro ------------------------------------------------------------*/


    /* Exported properties -------------------------------------------------------*/
    inline ERequestUnit requestUnit(){return m_requestUnit;}
    /* Exported functions prototypes ---------------------------------------------*/
    void start();
    void start(uint32_t tick);

    void setRequestWrite(uint16_t reg,QVector<uint16_t> values);
    //communication function
    void setMeasurePeriodic();
signals:
    void newData(int id);
    void newDataDevice(EDevice* dev);
    void error(EDevice::Error err);

private slots:
    void on_result(ERequestUnit request);
    void on_error(EDevice::Error err);

private:
    /* Private variables ---------------------------------------------------------*/

    /* Private functions prototypes -----------------------------------------------*/
    EDevice *m_edevice = nullptr;
    EDeviceInfo m_edeviceInfo;
    ERequestUnit m_requestUnit;

    ELog m_elog;
    void init();
    void destroy();

    qreal m_timeTickLast = 0;
    /* Private functions of def -----------------------------------------------*/
    void measureStart();
    void measureStart(uint32_t tick);
};

#endif // EMODULE_H
