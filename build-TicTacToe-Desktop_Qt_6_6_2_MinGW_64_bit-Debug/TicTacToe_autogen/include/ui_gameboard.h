/********************************************************************************
** Form generated from reading UI file 'gameboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEBOARD_H
#define UI_GAMEBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameBoard
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton3x3;
    QPushButton *pushButton3x2;
    QPushButton *pushButton3x1;
    QPushButton *pushButton2x2;
    QPushButton *pushButton1x2;
    QPushButton *pushButton1x3;
    QPushButton *pushButton2x3;
    QPushButton *pushButton1x1;
    QPushButton *pushButton2x1;

    void setupUi(QWidget *GameBoard)
    {
        if (GameBoard->objectName().isEmpty())
            GameBoard->setObjectName("GameBoard");
        GameBoard->resize(728, 460);
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        GameBoard->setFont(font);
        GameBoard->setWindowOpacity(100.000000000000000);
        verticalLayout = new QVBoxLayout(GameBoard);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(GameBoard);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(GameBoard);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(GameBoard);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{background-color: rgb(0, 0, 0);}\n"
"\n"
"QPushButton {\n"
"	background-color: rgba(255, 255, 255, 255);\n"
"	\n"
"	\n"
"	font: 72pt \"Segoe UI\";\n"
"}\n"
""));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton3x3 = new QPushButton(groupBox);
        pushButton3x3->setObjectName("pushButton3x3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton3x3->sizePolicy().hasHeightForWidth());
        pushButton3x3->setSizePolicy(sizePolicy);
        pushButton3x3->setStyleSheet(QString::fromUtf8(""));
        pushButton3x3->setCheckable(true);

        gridLayout_2->addWidget(pushButton3x3, 6, 3, 1, 1);

        pushButton3x2 = new QPushButton(groupBox);
        pushButton3x2->setObjectName("pushButton3x2");
        sizePolicy.setHeightForWidth(pushButton3x2->sizePolicy().hasHeightForWidth());
        pushButton3x2->setSizePolicy(sizePolicy);
        pushButton3x2->setCheckable(true);

        gridLayout_2->addWidget(pushButton3x2, 6, 2, 1, 1);

        pushButton3x1 = new QPushButton(groupBox);
        pushButton3x1->setObjectName("pushButton3x1");
        sizePolicy.setHeightForWidth(pushButton3x1->sizePolicy().hasHeightForWidth());
        pushButton3x1->setSizePolicy(sizePolicy);
        pushButton3x1->setCheckable(true);
        pushButton3x1->setChecked(false);

        gridLayout_2->addWidget(pushButton3x1, 6, 1, 1, 1);

        pushButton2x2 = new QPushButton(groupBox);
        pushButton2x2->setObjectName("pushButton2x2");
        sizePolicy.setHeightForWidth(pushButton2x2->sizePolicy().hasHeightForWidth());
        pushButton2x2->setSizePolicy(sizePolicy);
        pushButton2x2->setCheckable(true);

        gridLayout_2->addWidget(pushButton2x2, 5, 2, 1, 1);

        pushButton1x2 = new QPushButton(groupBox);
        pushButton1x2->setObjectName("pushButton1x2");
        sizePolicy.setHeightForWidth(pushButton1x2->sizePolicy().hasHeightForWidth());
        pushButton1x2->setSizePolicy(sizePolicy);
        pushButton1x2->setCheckable(true);

        gridLayout_2->addWidget(pushButton1x2, 2, 2, 1, 1);

        pushButton1x3 = new QPushButton(groupBox);
        pushButton1x3->setObjectName("pushButton1x3");
        sizePolicy.setHeightForWidth(pushButton1x3->sizePolicy().hasHeightForWidth());
        pushButton1x3->setSizePolicy(sizePolicy);
        pushButton1x3->setCheckable(true);

        gridLayout_2->addWidget(pushButton1x3, 2, 3, 1, 1);

        pushButton2x3 = new QPushButton(groupBox);
        pushButton2x3->setObjectName("pushButton2x3");
        sizePolicy.setHeightForWidth(pushButton2x3->sizePolicy().hasHeightForWidth());
        pushButton2x3->setSizePolicy(sizePolicy);
        pushButton2x3->setCheckable(true);

        gridLayout_2->addWidget(pushButton2x3, 5, 3, 1, 1);

        pushButton1x1 = new QPushButton(groupBox);
        pushButton1x1->setObjectName("pushButton1x1");
        sizePolicy.setHeightForWidth(pushButton1x1->sizePolicy().hasHeightForWidth());
        pushButton1x1->setSizePolicy(sizePolicy);
        pushButton1x1->setCheckable(true);

        gridLayout_2->addWidget(pushButton1x1, 2, 1, 1, 1);

        pushButton2x1 = new QPushButton(groupBox);
        pushButton2x1->setObjectName("pushButton2x1");
        sizePolicy.setHeightForWidth(pushButton2x1->sizePolicy().hasHeightForWidth());
        pushButton2x1->setSizePolicy(sizePolicy);
        pushButton2x1->setCheckable(true);

        gridLayout_2->addWidget(pushButton2x1, 5, 1, 1, 1);


        verticalLayout->addWidget(groupBox);


        retranslateUi(GameBoard);

        QMetaObject::connectSlotsByName(GameBoard);
    } // setupUi

    void retranslateUi(QWidget *GameBoard)
    {
        GameBoard->setWindowTitle(QCoreApplication::translate("GameBoard", "Board", nullptr));
        pushButton_2->setText(QCoreApplication::translate("GameBoard", "Retry", nullptr));
        pushButton->setText(QCoreApplication::translate("GameBoard", "Quit", nullptr));
        groupBox->setTitle(QString());
        pushButton3x3->setText(QString());
        pushButton3x2->setText(QString());
        pushButton3x1->setText(QString());
        pushButton2x2->setText(QString());
        pushButton1x2->setText(QString());
        pushButton1x3->setText(QString());
        pushButton2x3->setText(QString());
        pushButton1x1->setText(QCoreApplication::translate("GameBoard", "x", nullptr));
        pushButton2x1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameBoard: public Ui_GameBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEBOARD_H
