#ifndef TEMPMETHOD_H
#define TEMPMETHOD_H

#include <QFile>
#include <QTextStream>
#include <QDebug>
class TempMethod
{
public:
    TempMethod();

    int openTxt();

    void reWriteTxt();

    virtual void editTxt(QString *ed) = 0;

    void closeTxt();

    void executeTMethod(QString *eD);

protected:
    QFile *movi;
    QTextStream *rwMovi;
};

#endif // TEMPMETHOD_H
