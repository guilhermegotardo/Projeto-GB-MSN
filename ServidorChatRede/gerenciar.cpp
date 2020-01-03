#include "gerenciar.h"
#include "ui_gerenciar.h"

gerenciar::gerenciar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gerenciar)
{
    ui->setupUi(this);

    movi = new QFile;
    rwMovi = new QTextStream(movi);

    movi->setFileName("C:/arquivos/login_senhas.txt");

    movi->open(QIODevice::ReadOnly|QIODevice::Text);

    rwMovi->seek(0);

    while(!(rwMovi->atEnd())){
        QString linha = rwMovi->readLine();
        QStringList dividido = linha.split('/');
        ui->lista->addItem(dividido[0]);
    }

    movi->close();

    ui->Usuario->setEnabled(false);
    ui->Senha->setEnabled(false);
    ui->Editar->setEnabled(false);
    ui->Salvar->setEnabled(false);

    ui->MostrarSenha->setEnabled(false);

}

gerenciar::~gerenciar()
{
    delete ui;
}

void gerenciar::on_Editar_clicked()
{
    ui->Usuario->setEnabled(true);
    ui->Senha->setEnabled(true);
    ui->MostrarSenha->setEnabled(true);

    ui->Editar->setEnabled(false);
    ui->Salvar->setEnabled(true);

    movi->open(QIODevice::ReadOnly|QIODevice::Text);

    rwMovi->seek(0);

    int j = 0;
    j = ui->lista->currentRow();
    z = j+1;

    QString linha2;

    for(int i = 0; i < z; i++){
        linha2 = rwMovi->readLine();
    }

    QStringList dividido2 = linha2.split('/');

    ui->Usuario->setText(dividido2[0]);
    ui->Senha->setText(dividido2[1]);

    movi->close();

    usuarioAntigo = ui->Usuario->text();
    senhaAntiga = ui->Senha->text();
}

void gerenciar::on_Salvar_clicked()
{
    if(novo == 1){

        movi->open(QIODevice::WriteOnly|QIODevice::Append);
        rwMovi->readLine();
        while(!rwMovi->atEnd())
            rwMovi->readLine();
        *rwMovi << endl << ui->Usuario->text() << "/" << ui->Senha->text();

        rwMovi->flush();

        movi->close();

        movi->open(QIODevice::ReadOnly|QIODevice::Text);

        rwMovi->seek(0);

        ui->lista->clear();

        while(!(rwMovi->atEnd()))
        {
            QString linha = rwMovi->readLine();
            QStringList dividido = linha.split('/');
            ui->lista->addItem(dividido[0]);
        }

        ui->Usuario->clear();
        ui->Senha->clear();
        ui->lista->setEnabled(true);
        ui->Usuario->setEnabled(false);
        ui->Senha->setEnabled(false);
        ui->MostrarSenha->setEnabled(false);
        ui->Editar->setEnabled(false);
        ui->Salvar->setEnabled(false);
        ui->Novo->setEnabled(true);

        novo = 0;

        movi->close();

    }

    if(novo == 0)
    {

        movi->open(QIODevice::ReadOnly|QIODevice::Text);

        rwMovi->seek(0);

        QString arquivo;

        arquivo = rwMovi->readAll();

        arquivo.replace(usuarioAntigo, ui->Usuario->text());
        arquivo.replace(senhaAntiga, ui->Senha->text());

        movi->close();

        movi->open(QIODevice::WriteOnly|QIODevice::Text);

        *rwMovi << arquivo;

        movi->close();

        ui->lista->clear();

        movi->open(QIODevice::ReadOnly|QIODevice::Text);

        rwMovi->seek(0);

        while(!(rwMovi->atEnd()))
        {
            QString linha = rwMovi->readLine();
            QStringList dividido = linha.split('/');
            ui->lista->addItem(dividido[0]);
        }

        movi->close();

        ui->Salvar->setEnabled(false);
        ui->Editar->setEnabled(false);
        ui->Novo->setEnabled(true);

        ui->Usuario->clear();
        ui->Senha->clear();

        ui->Usuario->setEnabled(false);
        ui->Senha->setEnabled(false);
        ui->MostrarSenha->setEnabled(false);
    }
}

void gerenciar::on_Novo_clicked()
{
    novo = 1;

    ui->Usuario->clear();
    ui->Senha->clear();

    ui->lista->clearSelection();

    ui->Usuario->setFocus();

    ui->Usuario->setEnabled(true);
    ui->Senha->setEnabled(true);
    ui->MostrarSenha->setEnabled(true);
    ui->Novo->setEnabled(false);
    ui->Salvar->setEnabled(true);

    ui->lista->setEnabled(false);
}

void gerenciar::on_lista_clicked(const QModelIndex &index)
{
    ui->Novo->setEnabled(false);
    ui->Salvar->setEnabled(false);
    ui->Editar->setEnabled(true);
}

void gerenciar::on_MostrarSenha_pressed()
{
    ui->Senha->setEchoMode(QLineEdit::Normal);
}

void gerenciar::on_MostrarSenha_released()
{
    ui->Senha->setEchoMode(QLineEdit::Password);
}
