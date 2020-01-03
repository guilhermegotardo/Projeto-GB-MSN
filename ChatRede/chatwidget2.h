#ifndef CHATWIDGET2_H
#define CHATWIDGET2_H

#include <QWidget>
#include <QGraphicsDropShadowEffect>

namespace Ui {
class chatwidget2;
}

class chatwidget2 : public QWidget
{
    Q_OBJECT

public:
    explicit chatwidget2(QWidget *parent = 0);

    ~chatwidget2();

    void setMsg(QString text);

    void setTempo(QString time);

    void setNome(QString name);

    void setCorMensagem(QString color){cor = color;}

private:
    Ui::chatwidget2 *ui;

    QString cor;
};

#endif // CHATWIDGET2_H
