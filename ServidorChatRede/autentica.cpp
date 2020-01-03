#include "autentica.h"

Autentica::Autentica()
{

}

void Autentica::_setNomeCaminhoFile(QString nomeCaminhoFile){
    setNomeCaminhoFile(nomeCaminhoFile);
}
void Autentica::_abrirUsuarioSenhaFile(){
    abrirUsuarioSenhaFile();
}
void Autentica::_setMapUsuarioSenha(){
    setMapUsuarioSenha();
}
int Autentica::_getUsuarioAutenticado(QString usuarioSenha){
    return getUsuarioAutenticado(usuarioSenha);
}
int Autentica::_getUsuarioAutenticado(QString usuario, QString senha){
    return getUsuarioAutenticado(usuario, senha);
}
