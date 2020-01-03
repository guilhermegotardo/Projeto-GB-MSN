#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QHostAddress>
#include <QMessageBox>
#include <QListWidget>
#include <QListWidgetItem>
#include <chatwidget.h>
#include <chatwidget2.h>
#include <QTime>
#include <login.h>
#include "singletontcpsocket.h"
#include <QGraphicsEffect>

namespace Ui {
class chat;
}

class chat : public QWidget
{
    Q_OBJECT

public:
    explicit chat(QWidget *parent = 0);

    ~chat();

    void setUsuario(QString user){usuarioLogado = user;}


private slots:
    void on_Enviar_clicked();

    void dataArrived();

    void connectionInit();

    void handleError(QAbstractSocket::SocketError err);


    void on_Mensagem_textChanged(const QString &arg1);

private:
    Ui::chat *ui;
    QFile *movi;
    QTextStream *rwMovi;
    QListWidgetItem *list;
    QString usuarioLogado;
    SingletonTcpSocket *tcpSocket;

};

#endif // CHAT_H
