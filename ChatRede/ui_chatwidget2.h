/********************************************************************************
** Form generated from reading UI file 'chatwidget2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWIDGET2_H
#define UI_CHATWIDGET2_H

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

class Ui_chatwidget2
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *nome;
    QLabel *hora;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mensagem;

    void setupUi(QWidget *chatwidget2)
    {
        if (chatwidget2->objectName().isEmpty())
            chatwidget2->setObjectName(QStringLiteral("chatwidget2"));
        chatwidget2->resize(450, 72);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chatwidget2->sizePolicy().hasHeightForWidth());
        chatwidget2->setSizePolicy(sizePolicy);
        chatwidget2->setMinimumSize(QSize(450, 70));
        chatwidget2->setMaximumSize(QSize(1920, 150));
        verticalLayout_2 = new QVBoxLayout(chatwidget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        nome = new QLabel(chatwidget2);
        nome->setObjectName(QStringLiteral("nome"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        nome->setFont(font);

        horizontalLayout->addWidget(nome);

        hora = new QLabel(chatwidget2);
        hora->setObjectName(QStringLiteral("hora"));
        hora->setMinimumSize(QSize(0, 0));
        hora->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(9);
        hora->setFont(font1);
        hora->setScaledContents(false);
        hora->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(hora);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        mensagem = new QLabel(chatwidget2);
        mensagem->setObjectName(QStringLiteral("mensagem"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
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


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(chatwidget2);

        QMetaObject::connectSlotsByName(chatwidget2);
    } // setupUi

    void retranslateUi(QWidget *chatwidget2)
    {
        chatwidget2->setWindowTitle(QApplication::translate("chatwidget2", "Form", Q_NULLPTR));
        nome->setText(QApplication::translate("chatwidget2", "Eduardo diz", Q_NULLPTR));
        hora->setText(QString());
        mensagem->setText(QApplication::translate("chatwidget2", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chatwidget2: public Ui_chatwidget2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWIDGET2_H
