#ifndef CHATWIDGET_H
#define CHATWIDGET_H

#include <QWidget>
#include <QGraphicsDropShadowEffect>

namespace Ui {
class chatwidget;
}

class chatwidget : public QWidget
{
    Q_OBJECT

public:
    explicit chatwidget(QWidget *parent = 0);

    ~chatwidget();

    void setMsg(QString text);

    void setTempo(QString time);

    void setNome(QString name);

    void setCorMensagem(QString color){cor = color;}

private:
    Ui::chatwidget *ui;

    QString cor;
};

#endif // CHATWIDGET_H
