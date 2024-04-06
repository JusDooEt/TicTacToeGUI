#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QWidget>
#include <QPushButton>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <cctype>
#include "gameoverdialog.h"

const int NUM_COLS = 3;
const int NUM_ROWS = 3;
const int MAX_ROUNDS = 9;

namespace Ui {
class GameBoard;
}

class GameBoard : public QWidget
{
    Q_OBJECT

public:
    explicit GameBoard(QWidget *parent = nullptr);
    GameBoard(QWidget *parent, QString playerX, QString playerO, int mode);
    ~GameBoard();



private:
    Ui::GameBoard *ui;
    QPushButton* buttonGrid[NUM_COLS][NUM_ROWS];
    GameOverDialog* gameOverDialog;
    char boardAr[NUM_COLS][NUM_ROWS];
    char token;
    int rounds;
    QString playerX;
    QString playerO;
    int mode;
    bool CheckWin();
    void showBoardAr();




signals:
    void selectSpot(int row, int col);
    void quittingGame();

private slots:
    void GetCompPlay();
    void spotSelected(int row, int col);
    void on_pushButton1x1_clicked();
    void switchToken();
    void InitBoard();
    void on_pushButton1x2_clicked();

    void on_pushButton1x3_clicked();
    void on_pushButton2x1_clicked();
    void on_pushButton2x2_clicked();
    void on_pushButton3x3_clicked();
    void on_pushButton3x1_clicked();
    void on_pushButton3x2_clicked();
    void on_pushButton2x3_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // GAMEBOARD_H
