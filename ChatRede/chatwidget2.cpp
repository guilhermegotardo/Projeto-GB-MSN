#include "chatwidget2.h"
#include "ui_chatwidget2.h"

chatwidget2::chatwidget2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatwidget2)
{
    ui->setupUi(this);

    QGraphicsDropShadowEffect *bodyShadow = new QGraphicsDropShadowEffect;
    bodyShadow->setBlurRadius(9.0);
    bodyShadow->setColor(QColor(0, 0, 0, 160));
    bodyShadow->setOffset(4.0);
    ui->mensagem->setGraphicsEffect(bodyShadow);

}

chatwidget2::~chatwidget2()
{
    delete ui;
}

void chatwidget2::setMsg(QString text)
{
    QString txt = text;
    ui->mensagem->setText(txt);
    ui->mensagem->setStyleSheet(cor);
    ui->mensagem->adjustSize();

}

void chatwidget2::setNome(QString name)
{
    QString nome = name;
    nome = nome.remove("2");
    ui->nome->setText(nome + " DIZ  ");
}

void chatwidget2::setTempo(QString time)
{
    QString tempo = time;
    ui->hora->setText(tempo);

}
