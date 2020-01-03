#include "tempmethod.h"

TempMethod::TempMethod()
{

}

int TempMethod::openTxt()
{
    movi = new QFile;
    movi->setFileName("C:/arquivos/config.txt");
    rwMovi = new QTextStream(movi);

    if(movi->exists())
    {
        movi->open(QIODevice::ReadWrite|QIODevice::Text);
        return 1;
    }
    return 0;
}

void TempMethod::reWriteTxt()
{
    movi->close();
    movi->open(QIODevice::ReadWrite|QIODevice::Truncate|QIODevice::Text);
}

void TempMethod::closeTxt()
{
    movi->close();
    delete rwMovi;
    delete movi;
}

void TempMethod::executeTMethod(QString *eD)
{
     if(openTxt() == 1)
     {
         editTxt(eD);
         closeTxt();
         qDebug() << *eD;
     }
}
