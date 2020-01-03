#include "tempmethodbasei.h"

TempMethodBaseI::TempMethodBaseI()
{

}

void TempMethodBaseI::editTxt(QString *ed)
{

    if(!(movi->size() == 0))
    {
        rwMovi->seek(0);
        *ed = rwMovi->readLine();
    }
}
