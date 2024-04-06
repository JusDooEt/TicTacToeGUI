#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    playerX = "X";
    playerO = "O";
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_changeNameButton_clicked()
{
    nameChangedDialog = new NameDialog(this);
    nameChangedDialog->setWindowModality(Qt::ApplicationModal);
    nameChangedDialog->show();
    connect(nameChangedDialog, &NameDialog::player1Changed, this, [&](QString playerName){
        playerX = playerName;
        qDebug() << "playerX name = " << playerX;
    });

    connect(nameChangedDialog, &NameDialog::player2Changed, this, [&](QString playerName){
        playerO = playerName;
        qDebug() << "playerO name = " << playerO;
    });
}





void Widget::on_playButton_clicked()
{
    //hide();
    gameBoard = new GameBoard(this, playerX, playerO, ui->comboBox->currentIndex());
    gameBoard->setGeometry(0,0,this->width(),this->height());
    ui->ComponentsGroup->hide();
    gameBoard->show();
    connect(gameBoard, &GameBoard::quittingGame, this, [&](){
        ui->ComponentsGroup->show();
    });
}


void Widget::on_exitButton_clicked()
{
    close();
}

