/********************************************************************************
** Form generated from reading UI file 'servidorchatrede_main.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVIDORCHATREDE_MAIN_H
#define UI_SERVIDORCHATREDE_MAIN_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServidorChatRede_Main
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPorta;
    QLineEdit *telaPort;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *labelIP;
    QLabel *IP;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btStartServer;
    QPushButton *btDisconnect;
    QPushButton *gerenciar;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *telaNClientes;

    void setupUi(QWidget *ServidorChatRede_Main)
    {
        if (ServidorChatRede_Main->objectName().isEmpty())
            ServidorChatRede_Main->setObjectName(QStringLiteral("ServidorChatRede_Main"));
        ServidorChatRede_Main->resize(536, 450);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ServidorChatRede_Main->sizePolicy().hasHeightForWidth());
        ServidorChatRede_Main->setSizePolicy(sizePolicy);
        ServidorChatRede_Main->setMinimumSize(QSize(530, 450));
        ServidorChatRede_Main->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral("servericon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ServidorChatRede_Main->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(ServidorChatRede_Main);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelPorta = new QLabel(ServidorChatRede_Main);
        labelPorta->setObjectName(QStringLiteral("labelPorta"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelPorta->sizePolicy().hasHeightForWidth());
        labelPorta->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(labelPorta);

        telaPort = new QLineEdit(ServidorChatRede_Main);
        telaPort->setObjectName(QStringLiteral("telaPort"));
        sizePolicy1.setHeightForWidth(telaPort->sizePolicy().hasHeightForWidth());
        telaPort->setSizePolicy(sizePolicy1);
        telaPort->setMinimumSize(QSize(100, 0));
        telaPort->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(telaPort);

        statusLabel = new QLabel(ServidorChatRede_Main);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        sizePolicy1.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(statusLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelIP = new QLabel(ServidorChatRede_Main);
        labelIP->setObjectName(QStringLiteral("labelIP"));
        sizePolicy1.setHeightForWidth(labelIP->sizePolicy().hasHeightForWidth());
        labelIP->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(labelIP);

        IP = new QLabel(ServidorChatRede_Main);
        IP->setObjectName(QStringLiteral("IP"));

        horizontalLayout->addWidget(IP);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btStartServer = new QPushButton(ServidorChatRede_Main);
        btStartServer->setObjectName(QStringLiteral("btStartServer"));
        sizePolicy1.setHeightForWidth(btStartServer->sizePolicy().hasHeightForWidth());
        btStartServer->setSizePolicy(sizePolicy1);
        btStartServer->setMinimumSize(QSize(165, 23));
        QIcon icon1;
        icon1.addFile(QStringLiteral("verde.png"), QSize(), QIcon::Normal, QIcon::Off);
        btStartServer->setIcon(icon1);
        btStartServer->setIconSize(QSize(14, 14));
        btStartServer->setCheckable(false);

        horizontalLayout_2->addWidget(btStartServer);

        btDisconnect = new QPushButton(ServidorChatRede_Main);
        btDisconnect->setObjectName(QStringLiteral("btDisconnect"));
        sizePolicy1.setHeightForWidth(btDisconnect->sizePolicy().hasHeightForWidth());
        btDisconnect->setSizePolicy(sizePolicy1);
        btDisconnect->setMinimumSize(QSize(165, 23));
        QIcon icon2;
        icon2.addFile(QStringLiteral("vermelho.png"), QSize(), QIcon::Normal, QIcon::Off);
        btDisconnect->setIcon(icon2);
        btDisconnect->setIconSize(QSize(14, 14));

        horizontalLayout_2->addWidget(btDisconnect);

        gerenciar = new QPushButton(ServidorChatRede_Main);
        gerenciar->setObjectName(QStringLiteral("gerenciar"));
        sizePolicy1.setHeightForWidth(gerenciar->sizePolicy().hasHeightForWidth());
        gerenciar->setSizePolicy(sizePolicy1);
        gerenciar->setMinimumSize(QSize(165, 23));
        QIcon icon3;
        icon3.addFile(QStringLiteral("editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        gerenciar->setIcon(icon3);
        gerenciar->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(gerenciar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        groupBox = new QGroupBox(ServidorChatRede_Main);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        groupBox->setMinimumSize(QSize(511, 371));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        telaNClientes = new QTextEdit(groupBox);
        telaNClientes->setObjectName(QStringLiteral("telaNClientes"));
        telaNClientes->setMinimumSize(QSize(491, 338));

        horizontalLayout_3->addWidget(telaNClientes);


        verticalLayout_2->addWidget(groupBox);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(ServidorChatRede_Main);

        QMetaObject::connectSlotsByName(ServidorChatRede_Main);
    } // setupUi

    void retranslateUi(QWidget *ServidorChatRede_Main)
    {
        ServidorChatRede_Main->setWindowTitle(QApplication::translate("ServidorChatRede_Main", "Servidor", Q_NULLPTR));
        labelPorta->setText(QApplication::translate("ServidorChatRede_Main", "Porta:", Q_NULLPTR));
        telaPort->setText(QApplication::translate("ServidorChatRede_Main", "4242", Q_NULLPTR));
        statusLabel->setText(QApplication::translate("ServidorChatRede_Main", "Status: OFF", Q_NULLPTR));
        labelIP->setText(QApplication::translate("ServidorChatRede_Main", "IP do Servidor:", Q_NULLPTR));
        IP->setText(QApplication::translate("ServidorChatRede_Main", "TextLabel", Q_NULLPTR));
        btStartServer->setText(QApplication::translate("ServidorChatRede_Main", "Iniciar Servidor", Q_NULLPTR));
        btDisconnect->setText(QApplication::translate("ServidorChatRede_Main", "Desativar Servidor", Q_NULLPTR));
        gerenciar->setText(QApplication::translate("ServidorChatRede_Main", "Gerenciar Usu\303\241rios", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ServidorChatRede_Main", "Logs", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ServidorChatRede_Main: public Ui_ServidorChatRede_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVIDORCHATREDE_MAIN_H
