#include "tempmethodbaseii.h"

TempMethodBaseII::TempMethodBaseII()
{

}

void TempMethodBaseII::editTxt(QString *ed)
{
    reWriteTxt();
    *rwMovi << *ed;

}
