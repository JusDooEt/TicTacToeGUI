#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDialog>
#include <QDebug>
#include "namedialog.h"
#include "gameboard.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_changeNameButton_clicked();



    void on_playButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::Widget *ui;
    NameDialog *nameChangedDialog;
    GameBoard  *gameBoard;
    QString playerX;
    QString playerO;

};
#endif // WIDGET_H
