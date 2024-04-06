/********************************************************************************
** Form generated from reading UI file 'gameoverdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVERDIALOG_H
#define UI_GAMEOVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GameOverDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *retryButton;
    QPushButton *quitButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *GameOverDialog)
    {
        if (GameOverDialog->objectName().isEmpty())
            GameOverDialog->setObjectName("GameOverDialog");
        GameOverDialog->resize(188, 120);
        verticalLayout = new QVBoxLayout(GameOverDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(GameOverDialog);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("System")});
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        retryButton = new QPushButton(GameOverDialog);
        retryButton->setObjectName("retryButton");

        horizontalLayout->addWidget(retryButton);

        quitButton = new QPushButton(GameOverDialog);
        quitButton->setObjectName("quitButton");

        horizontalLayout->addWidget(quitButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(GameOverDialog);

        QMetaObject::connectSlotsByName(GameOverDialog);
    } // setupUi

    void retranslateUi(QDialog *GameOverDialog)
    {
        GameOverDialog->setWindowTitle(QCoreApplication::translate("GameOverDialog", "Game Over", nullptr));
        label->setText(QCoreApplication::translate("GameOverDialog", "Player X Wins!!!", nullptr));
        retryButton->setText(QCoreApplication::translate("GameOverDialog", "Retry", nullptr));
        quitButton->setText(QCoreApplication::translate("GameOverDialog", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameOverDialog: public Ui_GameOverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVERDIALOG_H
