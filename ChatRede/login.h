#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QHostAddress>
#include <QMessageBox>
#include <chat.h>
#include "singletontcpsocket.h"
#include "tempmethodbasei.h"
#include "tempmethodbaseii.h"
#include <qdebug.h>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);

    ~login();

    QString getIP(){return ip;}

    QString getPorta(){return porta;}

    QString getUsuario(){return usuario;}

    QString getSenha(){return senha;}


private slots:
    void on_IP_textChanged(const QString &arg1);

    void on_Porta_textChanged(const QString &arg1);

    void on_Usuario_textChanged(const QString &arg1);

    void on_Senha_textChanged(const QString &arg1);

    void on_Conectar_clicked();

    void on_Login_clicked();

    void dataArrived();

    void connectionInit();

    void handleError(QAbstractSocket::SocketError err);

private:
    Ui::login *ui;
    QString ip;
    QString porta;
    QString usuario;
    QString senha;
    QFile *movi;
    QTextStream *rwMovi;
    SingletonTcpSocket *tcpSocket;

};

#endif // LOGIN_H
