#ifndef AUTENTICA_H
#define AUTENTICA_H
#include "autenticador.h"


class Autentica : private Autenticador
{
public:
    Autentica();

    void _setNomeCaminhoFile(QString nomeCaminhoFile);
    void _abrirUsuarioSenhaFile();
    void _setMapUsuarioSenha();
    int _getUsuarioAutenticado(QString usuarioSenha);
    int _getUsuarioAutenticado(QString usuario, QString senha);
};

#endif // AUTENTICA_H
