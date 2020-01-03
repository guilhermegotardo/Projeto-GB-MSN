/********************************************************************************
** Form generated from reading UI file 'chatwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWIDGET_H
#define UI_CHATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatwidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *nome;
    QLabel *hora;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *mensagem;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *chatwidget)
    {
        if (chatwidget->objectName().isEmpty())
            chatwidget->setObjectName(QStringLiteral("chatwidget"));
        chatwidget->resize(450, 72);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chatwidget->sizePolicy().hasHeightForWidth());
        chatwidget->setSizePolicy(sizePolicy);
        chatwidget->setMinimumSize(QSize(450, 70));
        chatwidget->setMaximumSize(QSize(1920, 150));
        verticalLayout_2 = new QVBoxLayout(chatwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        nome = new QLabel(chatwidget);
        nome->setObjectName(QStringLiteral("nome"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        nome->setFont(font);

        horizontalLayout->addWidget(nome);

        hora = new QLabel(chatwidget);
        hora->setObjectName(QStringLiteral("hora"));
        hora->setMinimumSize(QSize(0, 0));
        hora->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(9);
        hora->setFont(font1);
        hora->setScaledContents(false);
        hora->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(hora);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mensagem = new QLabel(chatwidget);
        mensagem->setObjectName(QStringLiteral("mensagem"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mensagem->sizePolicy().hasHeightForWidth());
        mensagem->setSizePolicy(sizePolicy1);
        mensagem->setMaximumSize(QSize(1000, 200));
        QFont font2;
        font2.setFamily(QStringLiteral("Tahoma"));
        font2.setPointSize(11);
        mensagem->setFont(font2);
        mensagem->setInputMethodHints(Qt::ImhNone);
        mensagem->setTextFormat(Qt::AutoText);
        mensagem->setScaledContents(true);
        mensagem->setWordWrap(true);
        mensagem->setMargin(7);

        horizontalLayout_6->addWidget(mensagem);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(chatwidget);

        QMetaObject::connectSlotsByName(chatwidget);
    } // setupUi

    void retranslateUi(QWidget *chatwidget)
    {
        chatwidget->setWindowTitle(QApplication::translate("chatwidget", "Form", Q_NULLPTR));
        nome->setText(QApplication::translate("chatwidget", "Eduardo diz:", Q_NULLPTR));
        hora->setText(QString());
        mensagem->setText(QApplication::translate("chatwidget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chatwidget: public Ui_chatwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWIDGET_H
