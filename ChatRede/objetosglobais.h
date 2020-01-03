#ifndef OBJETOSGLOBAIS_H
#define OBJETOSGLOBAIS_H

#include <qtglobal>

// ALL THE GLOBAL DECLARATIONS

// don't use #include <QString> here, instead do this:

QT_BEGIN_NAMESPACE
class QString;
class QTcpSocket;
QT_END_NAMESPACE

// that way you aren't compiling QString into every header file you put this in...
// aka faster build times.

#define MAGIC_NUM 42

extern qreal g_some_double; // Note the important use of extern!
extern QString g_some_string;
//extern QTcpSocket *tcpSocket;

#endif // GLOBALS_H
