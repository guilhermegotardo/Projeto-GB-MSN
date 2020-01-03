#include "chat.h"
#include "ui_chat.h"

chat::chat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);

    tcpSocket = SingletonTcpSocket::getInstance();

    this->setWindowTitle("Chat Publico - Conectado a " + tcpSocket->getTcpSocket()->peerAddress().toString());
    connect(tcpSocket->getTcpSocket(),SIGNAL(readyRead()),this, SLOT(dataArrived()));


    ui->Lista->setStyleSheet("background-color: #e7e7ec");

    ui->Enviar->setEnabled(false);
}

chat::~chat()
{
    delete ui;
}

void chat::on_Enviar_clicked()
{
    if(!(ui->Mensagem->text().isEmpty()))
    {

        QString str = "2/" + ui->Mensagem->text();

        tcpSocket->getTcpSocket()->write(str.toUtf8());

        ui->Mensagem->clear();

        ui->Enviar->setEnabled(false);
    }

}

void chat::dataArrived()
{
    QByteArray buf = tcpSocket->getTcpSocket()->read(200);
    QString mensagem = buf;
    QStringList mensagemDividida = mensagem.split('/');

    list = new QListWidgetItem(ui->Lista);

    ui->Lista->addItem(list);

    QString nome = mensagemDividida[0];
    nome = nome.toUpper();

    if(mensagemDividida[0] == (usuarioLogado + "2"))    //Quem enviou é quem esta logado nesta aplicação
    {

        chatwidget2 *msg2 = new chatwidget2;

        msg2->setTempo(QTime::currentTime().toString());
        msg2->setCorMensagem("background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BCCED6, stop: 1 #B3C3CB);border: 1px; border-radius: 5px;");
        msg2->setNome("VOCÊ");
        msg2->setMsg(mensagemDividida[1]);

        list->setSizeHint(msg2->sizeHint());

        ui->Lista->setItemWidget(list, msg2);

    }
    if((mensagemDividida[0]) != (usuarioLogado + "2"))  //Quem enviou é outra pessoa
    {

        chatwidget *msg = new chatwidget;

        msg->setTempo(QTime::currentTime().toString());
        msg->setCorMensagem("background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6EC5EC, stop: 1 #46A6D1);border: 1px; border-radius: 5px;");
        msg->setNome(nome);
        msg->setMsg(mensagemDividida[1]);

        list->setSizeHint(msg->sizeHint());

        ui->Lista->setItemWidget(list, msg);
    }

    ui->Lista->scrollToBottom();

}

void chat::connectionInit()
{
    this->setWindowTitle("Chat Publico - Conectado a " + tcpSocket->getTcpSocket()->peerAddress().toString());
}


void chat::handleError(QAbstractSocket::SocketError err)
{
    this->setWindowTitle("Chat Publico - Não Conectado");

    QMessageBox::critical(this,"Erro de conexão", tcpSocket->getTcpSocket()->errorString());

    tcpSocket->getTcpSocket()->close();
}

void chat::on_Mensagem_textChanged(const QString &arg1)
{
    ui->Enviar->setEnabled(true);
}
