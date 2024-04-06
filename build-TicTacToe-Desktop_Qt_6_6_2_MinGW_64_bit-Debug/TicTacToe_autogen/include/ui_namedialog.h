/********************************************************************************
** Form generated from reading UI file 'namedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMEDIALOG_H
#define UI_NAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NameDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *player1Label;
    QLineEdit *player1LineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *player2Label;
    QLineEdit *player2LineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NameDialog)
    {
        if (NameDialog->objectName().isEmpty())
            NameDialog->setObjectName("NameDialog");
        NameDialog->resize(313, 138);
        verticalLayout = new QVBoxLayout(NameDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        player1Label = new QLabel(NameDialog);
        player1Label->setObjectName("player1Label");

        horizontalLayout->addWidget(player1Label);

        player1LineEdit = new QLineEdit(NameDialog);
        player1LineEdit->setObjectName("player1LineEdit");

        horizontalLayout->addWidget(player1LineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        player2Label = new QLabel(NameDialog);
        player2Label->setObjectName("player2Label");

        horizontalLayout_2->addWidget(player2Label);

        player2LineEdit = new QLineEdit(NameDialog);
        player2LineEdit->setObjectName("player2LineEdit");

        horizontalLayout_2->addWidget(player2LineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(NameDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox, 0, Qt::AlignHCenter);


        retranslateUi(NameDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NameDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NameDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NameDialog);
    } // setupUi

    void retranslateUi(QDialog *NameDialog)
    {
        NameDialog->setWindowTitle(QCoreApplication::translate("NameDialog", "Change Player Names", nullptr));
        player1Label->setText(QCoreApplication::translate("NameDialog", "Name of Player 1:", nullptr));
        player2Label->setText(QCoreApplication::translate("NameDialog", "Name of Player 2:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NameDialog: public Ui_NameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMEDIALOG_H
