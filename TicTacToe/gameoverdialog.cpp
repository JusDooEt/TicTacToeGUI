#include "gameoverdialog.h"
#include "ui_gameoverdialog.h"

GameOverDialog::GameOverDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GameOverDialog)
{
    ui->setupUi(this);
}

GameOverDialog::GameOverDialog(QWidget *parent, char winner, QString name)
    : QDialog(parent)
    , ui(new Ui::GameOverDialog)
{
    ui->setupUi(this);
    this->winner = winner;
    this->name = name;
    if(winner == 'T')
    {
        ui->label->setText("Tie!");
    }
    else
    {
        ui->label->setText(name + " Wins!!!");
    }
}

GameOverDialog::~GameOverDialog()
{
    delete ui;
}




void GameOverDialog::on_retryButton_clicked()
{
    emit retry();
    close();
}


void GameOverDialog::on_quitButton_clicked()
{
    emit quit();
    close();
}

