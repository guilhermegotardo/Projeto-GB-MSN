#ifndef GERENCIAR_H
#define GERENCIAR_H

#include <QDialog>
#include <QFile>
#include <QTextStream>

namespace Ui {
class gerenciar;
}

class gerenciar : public QDialog
{
    Q_OBJECT

public:
    explicit gerenciar(QWidget *parent = 0);
    ~gerenciar();

private slots:
    void on_Editar_clicked();

    void on_Salvar_clicked();

    void on_Novo_clicked();

    void on_lista_clicked(const QModelIndex &index);

    void on_MostrarSenha_pressed();

    void on_MostrarSenha_released();

private:
    Ui::gerenciar *ui;
    QFile *movi;
    QTextStream *rwMovi;
    int novo = 0;
    int z;
    QString usuarioAntigo;
    QString senhaAntiga;
};

#endif // GERENCIAR_H
