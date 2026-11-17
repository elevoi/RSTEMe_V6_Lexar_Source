#ifndef ECARFILE_H
#define ECARFILE_H
#include <QList>
#include <QFile>
#include <QSettings>
#include <QFileDialog>
#include <QCoreApplication>
#include <QMessageBox>
#include <QDebug>
#include <QDataStream>
#include "device/module/ecar/ecarfilecondition.h"
#include "device/module/ecar/ecarfilepractice.h"


class ECarFile
{
public:
    ECarFile();
    //function
    bool saveFileCondition(ECarFileCondition::FDataCondition_TypeDef cond);
    bool saveAsFileCondition(ECarFileCondition::FDataCondition_TypeDef cond);
    ECarFileCondition::FDataCondition_TypeDef openFileCondition(bool *ok);

    bool saveFilePractice(ECarFilePractice::FDataPractice_TypeDef prc);
    ECarFilePractice::FDataPractice_TypeDef openFilePractice(bool *ok);
private:
    ECarFileCondition m_fileCondition;
    ECarFilePractice m_filePractice;

};
#endif // ECARFILE_H
