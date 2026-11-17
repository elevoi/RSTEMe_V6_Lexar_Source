#include "ecarfile.h"
#include <QString>
#include <QJsonArray>
#include <QJsonParseError>
#include <QDataStream>

ECarFile::ECarFile()
{

}

bool ECarFile::saveFileCondition(ECarFileCondition::FDataCondition_TypeDef cond)
{
return m_fileCondition.saveFile(cond);
}

bool ECarFile::saveAsFileCondition(ECarFileCondition::FDataCondition_TypeDef cond)
{
return m_fileCondition.saveAsFile(cond);
}

ECarFileCondition::FDataCondition_TypeDef ECarFile::openFileCondition(bool *ok)
{
    return m_fileCondition.openFile(ok);
}

bool ECarFile::saveFilePractice(ECarFilePractice::FDataPractice_TypeDef prc)
{
    return m_filePractice.saveFile(prc);
}

ECarFilePractice::FDataPractice_TypeDef ECarFile::openFilePractice(bool *ok)
{
return m_filePractice.openFile(ok);
}

