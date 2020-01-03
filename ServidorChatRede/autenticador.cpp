#include "autenticador.h"

Autenticador::Autenticador()
{
    loginSenha = new QFile;
    rwLoginSenha = new QTextStream(loginSenha);
    setNomeCaminhoFile("C:/arquivos/login_senhas.txt");
    abrirUsuarioSenhaFile();
    setMapUsuarioSenha();
}
Autenticador::~Autenticador()
{
    loginSenha->close();
    delete loginSenha;
    delete rwLoginSenha;
}
void Autenticador::setNomeCaminhoFile(QString nomeCaminhoFile)
{
    loginSenha->setFileName(nomeCaminhoFile);
}

void Autenticador::abrirUsuarioSenhaFile()
{
    if(!(loginSenha->exists()))
    {
        QMessageBox::warning(NULL,"Error","Arquivo inexistente");
        return;
    }
    else if(!(loginSenha->open(QIODevice::ReadWrite | QIODevice::Text )))
    {
        QMessageBox::warning(NULL,"Error","Sem permissao para abrir o arquivo");
        return;
    }

    QMessageBox::information(NULL,"Info","Arquivo aberto com sucesso");
}

void Autenticador::setMapUsuarioSenha()
{
    QString usuarioSenha;
    QStringList userPass;
    while(!(rwLoginSenha->atEnd()))
    {
        usuarioSenha = rwLoginSenha->readLine();
        userPass = usuarioSenha.split('/');
        mapUsuarioSenha.insert(userPass[0],userPass[1]);
    }
}

int Autenticador::getUsuarioAutenticado(QString usuarioSenha)
{    
    QStringList userPass = usuarioSenha.split('/');

    if(mapUsuarioSenha.value(userPass[0]) == userPass[1])
    {
        return 1;
    }
    else
        return 0;
}

int Autenticador::getUsuarioAutenticado(QString usuario, QString senha)
{
    if(mapUsuarioSenha.value(usuario) == senha)
    {
        return 1;
    }
    else
        return 0;
}
