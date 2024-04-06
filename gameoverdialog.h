#ifndef GAMEOVERDIALOG_H
#define GAMEOVERDIALOG_H

#include <QDialog>

namespace Ui {
class GameOverDialog;
}

class GameOverDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GameOverDialog(QWidget *parent = nullptr);
    GameOverDialog(QWidget *parent, char winner, QString name);
    ~GameOverDialog();

private:
    Ui::GameOverDialog *ui;
    char winner;
    QString name;

signals:
    void retry();
    void quit();
private slots:

    void on_retryButton_clicked();
    void on_quitButton_clicked();
};

#endif // GAMEOVERDIALOG_H
