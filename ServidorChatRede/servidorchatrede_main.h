#ifndef SERVIDORCHATREDE_MAIN_H
#define SERVIDORCHATREDE_MAIN_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QMap>
#include <QMessageBox>
#include "autentica.h"
#include <gerenciar.h>
#include <qnetworkinterface.h>

namespace Ui {
class ServidorChatRede_Main;
}

class ServidorChatRede_Main : public QWidget
{
    Q_OBJECT

public:
    explicit ServidorChatRede_Main(QWidget *parent = 0);

    ~ServidorChatRede_Main();

private:
    Ui::ServidorChatRede_Main *ui;
    QTcpServer servidorRede;
    QTcpSocket *socketConexaoServidor, *socketLoginServidor;
    QList<QTcpSocket*> listaConexoes;    
    QList<QTcpSocket*>::iterator i;
    QMap<QTcpSocket*,QString> mapaUsuarios;
    QMap<QTcpSocket*,QString>::iterator m;
    Autentica a;

    int countN=0;

private slots:

    void respostaServidor_Login();

    void respostaLogin_Chat();

    void encerrarConexao_Servidor();

    void encerrarConexao_Chat();

    void conexaoServidorCliente();

    void on_btStartServer_clicked();

    void on_btDisconnect_clicked();

    void on_gerenciar_clicked();    
};

#endif // SERVIDORCHATREDE_MAIN_H
