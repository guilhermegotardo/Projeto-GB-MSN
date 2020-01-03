#ifndef AUTENTICADOR_H
#define AUTENTICADOR_H
#include <QDebug>
#include <QWidget>
#include <QMap>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
class Autenticador
{
public:
    Autenticador();

    ~Autenticador();

    void setNomeCaminhoFile(QString nomeCaminhoFile);

    void abrirUsuarioSenhaFile();

    void setMapUsuarioSenha();

    int getUsuarioAutenticado(QString usuarioSenha);

    int getUsuarioAutenticado(QString usuario, QString senha);

private:
    QFile *loginSenha;
    QTextStream *rwLoginSenha;
    QMap<QString,QString> mapUsuarioSenha;
    QMap<QString,QString>::iterator m;
};

#endif // AUTENTICADOR_H
