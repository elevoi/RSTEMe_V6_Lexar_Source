#ifndef ECARFILEPRACTICE_H
#define ECARFILEPRACTICE_H
#include <QList>
#include <QFile>
#include <QSettings>
#include <QFileDialog>
#include <QCoreApplication>
#include <QMessageBox>
#include <QDebug>
#include <QDataStream>

class ECarFilePractice
{
public:
    ECarFilePractice();
    typedef struct __FSPLINE_TYPE{
        bool enable = true;
        qreal axis_max=-9999999;
        qreal axis_min=9999999;
        int size=0;
        QList<QPointF> points;
    }FSpline_TypeDef;
    typedef struct __FDATA_CONDITION_{
        int axisType = 0;
        qreal axisX_min=0;
        qreal axisX_max=0;
        qreal axisY_min=0;
        qreal axisY_max=0;
        qreal timeOut = 0;
        QList<FSpline_TypeDef> splines;
        uint32_t crc = 1243568790;
    }FDataPractice_TypeDef;
    bool saveFile(FDataPractice_TypeDef prc);
    FDataPractice_TypeDef openFile(bool *ok);

private:
    bool writeFile(const ECarFilePractice::FDataPractice_TypeDef fdata);
    bool readFile(ECarFilePractice::FDataPractice_TypeDef *fdata);

};

#endif // ECARFILEPRACTICE_H
