#include "namedialog.h"
#include "ui_namedialog.h"

NameDialog::NameDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NameDialog)
{
    ui->setupUi(this);
}

NameDialog::~NameDialog()
{
    delete ui;
}

void NameDialog::on_buttonBox_accepted()
{
    if(ui->player1LineEdit->isModified())
    {
        emit player1Changed(ui->player1LineEdit->text());
    }
    if(ui->player2LineEdit->isModified())
    {
        emit player2Changed(ui->player2LineEdit->text());
    }
}


void NameDialog::on_buttonBox_rejected()
{
    close();
}

