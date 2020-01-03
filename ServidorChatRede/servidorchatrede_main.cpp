#include "servidorchatrede_main.h"
#include "ui_servidorchatrede_main.h"

ServidorChatRede_Main::ServidorChatRede_Main(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServidorChatRede_Main)
{
    ui->setupUi(this);
    socketConexaoServidor = new QTcpSocket;
    socketLoginServidor = new QTcpSocket;
    connect(&servidorRede, SIGNAL(newConnection()), this, SLOT(conexaoServidorCliente()));
    i = listaConexoes.begin();
    m = mapaUsuarios.begin();


    foreach (const QHostAddress &address, QNetworkInterface::allAddresses()) {
        if (address.protocol() == QAbstractSocket::IPv4Protocol && address != QHostAddress(QHostAddress::LocalHost))
             ui->IP->setText(address.toString());
    }
    ui->btDisconnect->setEnabled(false);

}

ServidorChatRede_Main::~ServidorChatRede_Main()
{
    delete ui;
    delete socketConexaoServidor;
    delete socketLoginServidor;
}

void ServidorChatRede_Main::respostaServidor_Login()
{    
    QByteArray bufferRede;
    bufferRede.resize(200);
    char auxStr[1];
    QTcpSocket *auxUser = new QTcpSocket;
    QTcpSocket *auxUser2 = new QTcpSocket;

    for(i=listaConexoes.begin(); i!=listaConexoes.end(); i++)
    {
        auxUser = *i;
        bufferRede = auxUser->read(200);
        auxStr[0] = bufferRede[0];
        if(auxStr[0] == '1')
        {
            bufferRede.remove(0,2);
            qDebug() << bufferRede;
            if(a._getUsuarioAutenticado(bufferRede) == 1)
            {
                QString usuario;
                int pos=0;
                usuario = bufferRede;
                pos = usuario.indexOf('/');
                usuario.remove(pos,usuario.size());

                m = mapaUsuarios.insert(mapaUsuarios.end(),auxUser,usuario);
                auxUser->write("ok");
                disconnect(auxUser, SIGNAL(readyRead()), this, SLOT(respostaServidor_Login()));
                disconnect(auxUser, SIGNAL(readyRead()), this, SLOT(respostaServidor_Login()));
                connect(auxUser, SIGNAL(readyRead()), this, SLOT(respostaLogin_Chat()));
                connect(auxUser, SIGNAL(disconnected()), this, SLOT(encerrarConexao_Chat()));
                break;
            }
        }
    }
}

void ServidorChatRede_Main::respostaLogin_Chat()
{
    QByteArray bufferUsuario;
    bufferUsuario.resize(200);
    QTcpSocket *auxUser = new QTcpSocket;
    QTcpSocket *auxUser2 = new QTcpSocket;

    for(m=mapaUsuarios.begin(); m!=mapaUsuarios.end(); m++)
    {
        auxUser = m.key();
        bufferUsuario = auxUser->read(200);

        if(!(bufferUsuario.isEmpty()) & !(bufferUsuario.isNull()))
        {
            bufferUsuario.prepend(m.value().toUtf8());
            for(QMap<QTcpSocket*,QString>::iterator n=mapaUsuarios.begin();n!=mapaUsuarios.end();n++)
            {
                auxUser2 = n.key();
                auxUser2->write(bufferUsuario);
            }
        }
    }
}

void ServidorChatRede_Main::encerrarConexao_Servidor()
{
    ui->telaNClientes->append("Conexão com o cliente encerrada");

    countN--;

    if(countN == 1){
        ui->telaNClientes->append(QString::number(countN,10) + " conexão");
    }
    if(countN > 1){
        ui->telaNClientes->append(QString::number(countN,10) + " conexões");
    }
    if(countN == 0){
        ui->telaNClientes->append("Não conectado a nenhum cliente");
    }

    socketConexaoServidor->close();
}

void ServidorChatRede_Main::encerrarConexao_Chat()
{

}

void ServidorChatRede_Main::conexaoServidorCliente()
{
    if(listaConexoes.empty())
    {
        socketConexaoServidor = servidorRede.nextPendingConnection();
        i = listaConexoes.insert(listaConexoes.begin(),socketConexaoServidor);
        connect(socketConexaoServidor, SIGNAL(readyRead()), this, SLOT(respostaServidor_Login()));
        connect(socketConexaoServidor, SIGNAL(disconnected()), this, SLOT(encerrarConexao_Servidor()));
        ui->telaNClientes->append("Conectado a um cliente");
    }

    else
    {
        QTcpSocket *auxConnectionSoc = new QTcpSocket;
        auxConnectionSoc = servidorRede.nextPendingConnection();
        i = listaConexoes.insert(listaConexoes.end(),auxConnectionSoc);
        connect(auxConnectionSoc, SIGNAL(readyRead()), this, SLOT(respostaServidor_Login()) );
        connect(auxConnectionSoc, SIGNAL(disconnected()), this, SLOT(encerrarConexao_Servidor()));
    }

    countN++;
    if(countN == 1){
        ui->telaNClientes->append(QString::number(countN,10) + " conexão");
    }
    if(countN > 1){
        ui->telaNClientes->append(QString::number(countN,10) + " conexões");
    }

}

void ServidorChatRede_Main::on_btStartServer_clicked()
{
    QString portNum = ui->telaPort->text();

    bool status = servidorRede.listen(QHostAddress::LocalHost, portNum.toUShort());

    if( status == true )
    {
        QMessageBox::information(this,"Servidor Iniciado", QString("Servidor ouvindo a porta ")+portNum );
        ui->statusLabel->setText("Status: ON");
        ui->telaNClientes->append("Servidor iniciado");

        ui->btStartServer->setEnabled(false);
        ui->btDisconnect->setEnabled(true);
    }
    else
    {
        QMessageBox::critical(this,"Falha ao iniciar servidor", servidorRede.errorString() );
    }
}

void ServidorChatRede_Main::on_btDisconnect_clicked()
{
    servidorRede.close();
    socketConexaoServidor->close();
    socketLoginServidor->close();
    ui->statusLabel->setText("Status: OFF");
    ui->telaNClientes->append("Servidor desativado");

    ui->btStartServer->setEnabled(true);
    ui->btDisconnect->setEnabled(false);
}

void ServidorChatRede_Main::on_gerenciar_clicked()
{
    gerenciar usuarios;
    usuarios.setModal(true);
    usuarios.exec();
}
