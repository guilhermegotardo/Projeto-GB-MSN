/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *Lista;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *Mensagem;
    QPushButton *Enviar;

    void setupUi(QWidget *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QStringLiteral("chat"));
        chat->resize(500, 350);
        chat->setMinimumSize(QSize(500, 350));
        chat->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral("chat.png"), QSize(), QIcon::Normal, QIcon::Off);
        chat->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(chat);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Lista = new QListWidget(chat);
        Lista->setObjectName(QStringLiteral("Lista"));
        Lista->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        Lista->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Lista->setAutoScroll(true);
        Lista->setSelectionMode(QAbstractItemView::NoSelection);
        Lista->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(Lista);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Mensagem = new QLineEdit(chat);
        Mensagem->setObjectName(QStringLiteral("Mensagem"));
        QFont font;
        font.setPointSize(9);
        Mensagem->setFont(font);
        Mensagem->setMaxLength(150);

        horizontalLayout_2->addWidget(Mensagem);

        Enviar = new QPushButton(chat);
        Enviar->setObjectName(QStringLiteral("Enviar"));
        Enviar->setMinimumSize(QSize(80, 23));
        Enviar->setMaximumSize(QSize(80, 23));
        QIcon icon1;
        icon1.addFile(QStringLiteral("enviar1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Enviar->setIcon(icon1);

        horizontalLayout_2->addWidget(Enviar);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QWidget *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "Form", Q_NULLPTR));
        Mensagem->setPlaceholderText(QApplication::translate("chat", "Mensagem", Q_NULLPTR));
        Enviar->setText(QApplication::translate("chat", "Enviar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        Enviar->setShortcut(QApplication::translate("chat", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
