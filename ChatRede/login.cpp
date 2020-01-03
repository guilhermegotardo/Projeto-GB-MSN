#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->Login->setEnabled(false);
    ui->labelConexao->setText("Não conectado ao servidor");

    //------------------------------PADRÃO SINGLETON---------------------------------------------
    tcpSocket = SingletonTcpSocket::getInstance();


    //------------------------------PADRÃO TEMPLATE METHOD---------------------------------------------
    QString *configs = new QString;
    TempMethodBaseI txtRead;
    txtRead.executeTMethod(configs);

    QStringList configs2 = configs->split('/');
    ui->IP->setText(configs2[0]);
    ui->Porta->setText(configs2[1]);


    //------------------------------CONEXÃO---------------------------------------------
    connect(tcpSocket->getTcpSocket(),SIGNAL(connected()), this, SLOT(connectionInit()));

    connect(tcpSocket->getTcpSocket(),SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(handleError(QAbstractSocket::SocketError)));

    connect(tcpSocket->getTcpSocket(),SIGNAL(readyRead()),this, SLOT(dataArrived()));

}

login::~login()
{
    delete ui;
}

void login::on_IP_textChanged(const QString &arg1)
{
    ip = ui->IP->text();

}

void login::on_Porta_textChanged(const QString &arg1)
{
    porta = ui->Porta->text();
}

void login::on_Usuario_textChanged(const QString &arg1)
{
    usuario = ui->Usuario->text();
}

void login::on_Senha_textChanged(const QString &arg1)
{
    senha = ui->Senha->text();
}

void login::on_Conectar_clicked()
{
    //------------------------------PADRÃO TEMPLATE METHOD---------------------------------------------
    QString *ipPorta = new QString (ui->IP->text() + "/" + ui->Porta->text());
    TempMethodBaseII txtRead;
    txtRead.executeTMethod(ipPorta);


    //-----------------------------------CONEXÃO--------------------------------
    QHostAddress addr(ui->IP->text());
    tcpSocket->getTcpSocket()->connectToHost(addr, ui->Porta->text().toUShort());

}

void login::on_Login_clicked()
{
    QString str = "1/" + ui->Usuario->text() + "/" + ui->Senha->text();

    tcpSocket->getTcpSocket()->write(str.toUtf8());

}

void login::dataArrived()
{
    QByteArray buf = tcpSocket->getTcpSocket()->read(200);

    QString server = buf;

    if(server == "ok")
    {
        chat *c = new chat();
        disconnect(tcpSocket->getTcpSocket(),SIGNAL(readyRead()),this, SLOT(dataArrived()));
        c->setUsuario(ui->Usuario->text());
        c->setVisible(true);
        this->hide();
    }

    else
    {
        ui->Usuario->clear();
        ui->Senha->clear();
        QMessageBox::critical(this, "Não foi possivel realizar login", "Usuário e/ou Senha incorretos");
    }
}

void login::connectionInit()
{
    ui->labelConexao->setText("Conectado ao Servidor");
    ui->Login->setEnabled(true);
    ui->Conectar->setEnabled(false);
}


void login::handleError(QAbstractSocket::SocketError err)
{
    QMessageBox::critical(this,"Erro de conexão", tcpSocket->getTcpSocket()->errorString());

    ui->Conectar->setEnabled(true);

    ui->Login->setEnabled(false);

    tcpSocket->getTcpSocket()->close();
}
