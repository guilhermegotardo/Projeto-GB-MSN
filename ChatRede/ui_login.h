/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelIP;
    QLineEdit *IP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPorta;
    QLineEdit *Porta;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelUsuario;
    QLineEdit *Usuario;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelSenha;
    QLineEdit *Senha;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelConexao;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *Conectar;
    QPushButton *Login;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(300, 220);
        login->setMinimumSize(QSize(300, 220));
        login->setMaximumSize(QSize(300, 220));
        QIcon icon;
        icon.addFile(QStringLiteral("login.png"), QSize(), QIcon::Normal, QIcon::Off);
        login->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(login);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox = new QGroupBox(login);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelIP = new QLabel(groupBox);
        labelIP->setObjectName(QStringLiteral("labelIP"));
        labelIP->setMinimumSize(QSize(120, 20));
        labelIP->setAutoFillBackground(false);

        horizontalLayout->addWidget(labelIP);

        IP = new QLineEdit(groupBox);
        IP->setObjectName(QStringLiteral("IP"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(IP->sizePolicy().hasHeightForWidth());
        IP->setSizePolicy(sizePolicy);
        IP->setMinimumSize(QSize(120, 20));

        horizontalLayout->addWidget(IP);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelPorta = new QLabel(groupBox);
        labelPorta->setObjectName(QStringLiteral("labelPorta"));
        labelPorta->setMinimumSize(QSize(120, 20));

        horizontalLayout_2->addWidget(labelPorta);

        Porta = new QLineEdit(groupBox);
        Porta->setObjectName(QStringLiteral("Porta"));
        sizePolicy.setHeightForWidth(Porta->sizePolicy().hasHeightForWidth());
        Porta->setSizePolicy(sizePolicy);
        Porta->setMinimumSize(QSize(120, 20));

        horizontalLayout_2->addWidget(Porta);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelUsuario = new QLabel(groupBox);
        labelUsuario->setObjectName(QStringLiteral("labelUsuario"));
        labelUsuario->setMinimumSize(QSize(120, 20));

        horizontalLayout_3->addWidget(labelUsuario);

        Usuario = new QLineEdit(groupBox);
        Usuario->setObjectName(QStringLiteral("Usuario"));
        sizePolicy.setHeightForWidth(Usuario->sizePolicy().hasHeightForWidth());
        Usuario->setSizePolicy(sizePolicy);
        Usuario->setMinimumSize(QSize(120, 20));

        horizontalLayout_3->addWidget(Usuario);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelSenha = new QLabel(groupBox);
        labelSenha->setObjectName(QStringLiteral("labelSenha"));
        labelSenha->setMinimumSize(QSize(120, 20));

        horizontalLayout_4->addWidget(labelSenha);

        Senha = new QLineEdit(groupBox);
        Senha->setObjectName(QStringLiteral("Senha"));
        sizePolicy.setHeightForWidth(Senha->sizePolicy().hasHeightForWidth());
        Senha->setSizePolicy(sizePolicy);
        Senha->setMinimumSize(QSize(120, 20));
        Senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(Senha);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelConexao = new QLabel(groupBox);
        labelConexao->setObjectName(QStringLiteral("labelConexao"));
        QFont font;
        font.setPointSize(11);
        labelConexao->setFont(font);
        labelConexao->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelConexao);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Conectar = new QPushButton(groupBox);
        Conectar->setObjectName(QStringLiteral("Conectar"));
        Conectar->setMinimumSize(QSize(120, 20));
        QIcon icon1;
        icon1.addFile(QStringLiteral("conectar.png"), QSize(), QIcon::Normal, QIcon::Off);
        Conectar->setIcon(icon1);
        Conectar->setFlat(false);

        horizontalLayout_5->addWidget(Conectar);

        Login = new QPushButton(groupBox);
        Login->setObjectName(QStringLiteral("Login"));
        Login->setMinimumSize(QSize(120, 20));
        QIcon icon2;
        icon2.addFile(QStringLiteral("seta.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setIcon(icon2);

        horizontalLayout_5->addWidget(Login);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addWidget(groupBox);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Login", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("login", "Identifica\303\247\303\243o de Usu\303\241rio e Conex\303\243o com Servidor", Q_NULLPTR));
        labelIP->setText(QApplication::translate("login", "IP do Servidor:", Q_NULLPTR));
        IP->setText(QString());
        labelPorta->setText(QApplication::translate("login", "Porta do Servidor:", Q_NULLPTR));
        Porta->setText(QString());
        labelUsuario->setText(QApplication::translate("login", "Usu\303\241rio:", Q_NULLPTR));
        Usuario->setText(QString());
        labelSenha->setText(QApplication::translate("login", "Senha:", Q_NULLPTR));
        Senha->setText(QString());
        labelConexao->setText(QApplication::translate("login", "TextLabel", Q_NULLPTR));
        Conectar->setText(QApplication::translate("login", "Conectar ao Servidor", Q_NULLPTR));
        Login->setText(QApplication::translate("login", "Login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
