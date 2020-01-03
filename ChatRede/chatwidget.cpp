#include "chatwidget.h"
#include "ui_chatwidget.h"

chatwidget::chatwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatwidget)
{
    ui->setupUi(this);

    QGraphicsDropShadowEffect *bodyShadow = new QGraphicsDropShadowEffect;
    bodyShadow->setBlurRadius(9.0);
    bodyShadow->setColor(QColor(0, 0, 0, 160));
    bodyShadow->setOffset(4.0);
    ui->mensagem->setGraphicsEffect(bodyShadow);

}

chatwidget::~chatwidget()
{
    delete ui;
}

void chatwidget::setMsg(QString text)
{
    QString txt = text;
    ui->mensagem->setText(txt);
    ui->mensagem->setStyleSheet(cor);
    ui->mensagem->adjustSize();

}

void chatwidget::setNome(QString name)
{
    QString nome = name;
    nome = nome.remove("2");
    ui->nome->setText(nome + " DIZ  ");
}

void chatwidget::setTempo(QString time)
{
    QString tempo = time;
    ui->hora->setText(tempo);
    this->setWhatsThis(tempo);
}
