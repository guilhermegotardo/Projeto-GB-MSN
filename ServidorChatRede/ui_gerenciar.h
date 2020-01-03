/********************************************************************************
** Form generated from reading UI file 'gerenciar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERENCIAR_H
#define UI_GERENCIAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_gerenciar
{
public:
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelUsuario;
    QLineEdit *Usuario;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelSenha;
    QLineEdit *Senha;
    QPushButton *MostrarSenha;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *Editar;
    QPushButton *Salvar;
    QPushButton *Novo;
    QListWidget *lista;

    void setupUi(QDialog *gerenciar)
    {
        if (gerenciar->objectName().isEmpty())
            gerenciar->setObjectName(QStringLiteral("gerenciar"));
        gerenciar->resize(540, 400);
        gerenciar->setMaximumSize(QSize(540, 700));
        QIcon icon;
        icon.addFile(QStringLiteral("editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        gerenciar->setWindowIcon(icon);
        horizontalLayout_5 = new QHBoxLayout(gerenciar);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelUsuario = new QLabel(gerenciar);
        labelUsuario->setObjectName(QStringLiteral("labelUsuario"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelUsuario->sizePolicy().hasHeightForWidth());
        labelUsuario->setSizePolicy(sizePolicy);
        labelUsuario->setMinimumSize(QSize(81, 21));
        labelUsuario->setMaximumSize(QSize(81, 21));
        QFont font;
        font.setPointSize(11);
        labelUsuario->setFont(font);
        labelUsuario->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(labelUsuario);

        Usuario = new QLineEdit(gerenciar);
        Usuario->setObjectName(QStringLiteral("Usuario"));
        Usuario->setMinimumSize(QSize(162, 21));
        Usuario->setMaximumSize(QSize(164, 21));

        horizontalLayout_2->addWidget(Usuario);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelSenha = new QLabel(gerenciar);
        labelSenha->setObjectName(QStringLiteral("labelSenha"));
        sizePolicy.setHeightForWidth(labelSenha->sizePolicy().hasHeightForWidth());
        labelSenha->setSizePolicy(sizePolicy);
        labelSenha->setMinimumSize(QSize(81, 21));
        labelSenha->setMaximumSize(QSize(81, 21));
        labelSenha->setFont(font);
        labelSenha->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_3->addWidget(labelSenha);

        Senha = new QLineEdit(gerenciar);
        Senha->setObjectName(QStringLiteral("Senha"));
        Senha->setMinimumSize(QSize(125, 21));
        Senha->setMaximumSize(QSize(162, 21));
        Senha->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        Senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(Senha);

        MostrarSenha = new QPushButton(gerenciar);
        MostrarSenha->setObjectName(QStringLiteral("MostrarSenha"));
        MostrarSenha->setMinimumSize(QSize(30, 23));
        MostrarSenha->setMaximumSize(QSize(45, 23));
        QIcon icon1;
        icon1.addFile(QStringLiteral("olho.png"), QSize(), QIcon::Normal, QIcon::Off);
        MostrarSenha->setIcon(icon1);
        MostrarSenha->setIconSize(QSize(18, 18));

        horizontalLayout_3->addWidget(MostrarSenha);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Editar = new QPushButton(gerenciar);
        Editar->setObjectName(QStringLiteral("Editar"));
        sizePolicy.setHeightForWidth(Editar->sizePolicy().hasHeightForWidth());
        Editar->setSizePolicy(sizePolicy);
        Editar->setMinimumSize(QSize(75, 23));
        Editar->setMaximumSize(QSize(75, 23));

        horizontalLayout->addWidget(Editar);

        Salvar = new QPushButton(gerenciar);
        Salvar->setObjectName(QStringLiteral("Salvar"));
        sizePolicy.setHeightForWidth(Salvar->sizePolicy().hasHeightForWidth());
        Salvar->setSizePolicy(sizePolicy);
        Salvar->setMinimumSize(QSize(75, 23));
        Salvar->setMaximumSize(QSize(75, 23));

        horizontalLayout->addWidget(Salvar);

        Novo = new QPushButton(gerenciar);
        Novo->setObjectName(QStringLiteral("Novo"));
        sizePolicy.setHeightForWidth(Novo->sizePolicy().hasHeightForWidth());
        Novo->setSizePolicy(sizePolicy);
        Novo->setMinimumSize(QSize(75, 23));

        horizontalLayout->addWidget(Novo);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout_2);

        lista = new QListWidget(gerenciar);
        lista->setObjectName(QStringLiteral("lista"));
        lista->setMinimumSize(QSize(256, 350));
        lista->setMaximumSize(QSize(256, 700));

        horizontalLayout_4->addWidget(lista);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        retranslateUi(gerenciar);

        QMetaObject::connectSlotsByName(gerenciar);
    } // setupUi

    void retranslateUi(QDialog *gerenciar)
    {
        gerenciar->setWindowTitle(QApplication::translate("gerenciar", "Gerenciar Usu\303\241rios", Q_NULLPTR));
        labelUsuario->setText(QApplication::translate("gerenciar", "Usu\303\241rio:", Q_NULLPTR));
        labelSenha->setText(QApplication::translate("gerenciar", "Senha:", Q_NULLPTR));
        MostrarSenha->setText(QString());
        Editar->setText(QApplication::translate("gerenciar", "Editar", Q_NULLPTR));
        Salvar->setText(QApplication::translate("gerenciar", "Salvar", Q_NULLPTR));
        Novo->setText(QApplication::translate("gerenciar", "Novo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gerenciar: public Ui_gerenciar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERENCIAR_H
