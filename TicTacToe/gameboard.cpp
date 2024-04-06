#include "gameboard.h"
#include "ui_gameboard.h"

GameBoard::GameBoard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameBoard)
{
    ui->setupUi(this);

    buttonGrid[0][0] = ui->pushButton1x1;
    buttonGrid[0][1] = ui->pushButton1x2;
    buttonGrid[0][2] = ui->pushButton1x3;
    buttonGrid[1][0] = ui->pushButton2x1;
    buttonGrid[1][1] = ui->pushButton2x2;
    buttonGrid[1][2] = ui->pushButton2x3;
    buttonGrid[2][0] = ui->pushButton3x1;
    buttonGrid[2][1] = ui->pushButton3x2;
    buttonGrid[2][2] = ui->pushButton3x3;
    InitBoard();
    connect(this, &GameBoard::selectSpot, this, &GameBoard::spotSelected);
    srand(time(NULL));

}

GameBoard::GameBoard(QWidget *parent, QString playerX, QString playerO, int mode)
    : QWidget(parent)
    , ui(new Ui::GameBoard)
{
    ui->setupUi(this);

    buttonGrid[0][0] = ui->pushButton1x1;
    buttonGrid[0][1] = ui->pushButton1x2;
    buttonGrid[0][2] = ui->pushButton1x3;
    buttonGrid[1][0] = ui->pushButton2x1;
    buttonGrid[1][1] = ui->pushButton2x2;
    buttonGrid[1][2] = ui->pushButton2x3;
    buttonGrid[2][0] = ui->pushButton3x1;
    buttonGrid[2][1] = ui->pushButton3x2;
    buttonGrid[2][2] = ui->pushButton3x3;
    InitBoard();
    showBoardAr();
    connect(this, &GameBoard::selectSpot, this, &GameBoard::spotSelected);
    srand(time(NULL));
    this->mode = mode;

    this->playerX = playerX;
    if(mode == 0)
        this->playerO = "Computer";
    else
        this->playerO = playerO;

}

GameBoard::~GameBoard()
{
    delete ui;
}

bool GameBoard::CheckWin()
{
    char winner; //OUT  - Token of the winner of the game
    int  row;	 //CALC - Row of array
    int  col;	 //CALC - Column of array

    winner = 'T';

    if (!isspace(boardAr[1][1]) &&
        ((boardAr[0][0] == boardAr[1][1] && boardAr[1][1] == boardAr[2][2]) ||
         (boardAr[0][2] == boardAr[1][1] && boardAr[1][1] == boardAr[2][0])))
    {
        winner = boardAr[1][1];
        gameOverDialog = new GameOverDialog(this, winner, winner == 'X' ? playerX : playerO);
        return true;
    }

    //Check rows
    for (row = 0; row < NUM_ROWS; row++)
    {
        if (!isspace(boardAr[row][0]) &&
            boardAr[row][0] == boardAr[row][1] &&
            boardAr[row][1] == boardAr[row][2])
        {
            winner = boardAr[row][0];
            gameOverDialog = new GameOverDialog(this, winner, winner == 'X' ? playerX : playerO);
            return true;
        }
    }

    //check columns
    for (col = 0; col < NUM_COLS; col++)
    {
        if (!isspace(boardAr[0][col]) &&
            boardAr[0][col] == boardAr[1][col] &&
            boardAr[1][col] == boardAr[2][col])
        {
            winner = boardAr[0][col];
            gameOverDialog = new GameOverDialog(this, winner, winner == 'X' ? playerX : playerO);
            return true;
        }
    }
    return false;
}

void GameBoard::showBoardAr()
{
    qDebug() << "boardAr:";
    QString rowStr;
    for(int row = 0; row < NUM_ROWS; row++)
    {
        rowStr = "";
        for(int col = 0; col < NUM_COLS; col++)
        {
            rowStr += QString(boardAr[row][col]) + ", ";
        }
        qDebug() << rowStr;
    }
}

void GameBoard::InitBoard()
{
    int row;	//CALC - Row of array
    int col;	//CALC - Column of array

    // if(gameOverDialog != nullptr)
    //     delete gameOverDialog;
    gameOverDialog = nullptr;
    token = 'X';
    rounds = 0;
    ui->groupBox->setEnabled(true);
    for (row = 0; row < NUM_ROWS; row++)
    {
        for (col = 0; col < NUM_COLS; col++)
        {
            boardAr[row][col] = ' ';
            buttonGrid[row][col]->setEnabled(true);
            buttonGrid[row][col]->setChecked(false);
            buttonGrid[row][col]->setText(QString(boardAr[row][col]));
        }
    }

}

void GameBoard::switchToken()
{

    if (token == 'X')
    {
        token = 'O';
    }
    else
    {
        token = 'X';
    }
}

void GameBoard::GetCompPlay()
{
    int row;	  //CALC - Row of array
    int col;	  //CALC - Column of array
    bool played;  //CALC - If the computer has played or not
    //cerr << "/nGetCompPlay\n";

    played = false;


    if (!played &&
        !isspace(boardAr[0][0]) &&
        !isspace(boardAr[2][2]) &&
        isspace(boardAr[1][1]) &&
        boardAr[0][0] == boardAr[2][2])
    {
        //cerr << "1\n";
        //boardAr[1][1] = 'O';
        row = 1;
        col = 1;
        played = true;
    }
    else if (!played &&
             !isspace(boardAr[1][1]) &&
             !isspace(boardAr[2][2]) &&
             isspace(boardAr[0][0]) &&
             boardAr[1][1] == boardAr[2][2])
    {
        //cerr << "2\n";
        //boardAr[0][0] = 'O';
        row = 0;
        col = 0;
        played = true;
    }
    else if (!played &&
             !isspace(boardAr[0][0]) &&
             !isspace(boardAr[1][1]) &&
             isspace(boardAr[2][2]) &&
             boardAr[0][0] == boardAr[1][1])
    {
        //cerr << "3\n";
        //boardAr[2][2] = 'O';
        row = 2;
        col = 2;
        played = true;
    }
    else if (!played &&
             !isspace(boardAr[0][2]) &&
             !isspace(boardAr[2][0]) &&
             isspace(boardAr[1][1]) &&
             boardAr[0][2] == boardAr[2][0])
    {
        //cerr << "4\n";
        //boardAr[1][1] = 'O';
        row = 1;
        col = 1;
        played = true;

    }
    else if (!played &&
             !isspace(boardAr[1][1]) &&
             !isspace(boardAr[2][0]) &&
             isspace(boardAr[0][2]) &&
             boardAr[1][1] == boardAr[2][0])
    {
        //cerr << "5\n";
        //boardAr[0][2] = 'O';
        row = 0;
        col = 2;
        played = true;

    }
    else if (!played &&
             !isspace(boardAr[0][2]) &&
             !isspace(boardAr[1][1]) &&
             isspace(boardAr[2][0]) &&
             boardAr[0][2] == boardAr[1][1])
    {
        //cerr << "6\n";
        //boardAr[2][0] = 'O';
        row = 2;
        col = 0;
        played = true;

    }
    else
    {
        for (int r = 0; r < NUM_ROWS; r++)
        {
            //cerr << "row\n";
            if (!played &&
                !isspace(boardAr[r][0]) &&
                !isspace(boardAr[r][1]) &&
                isspace(boardAr[r][2]) &&
                boardAr[r][0] == boardAr[r][1])
            {
                //cerr << "7\n";
                //boardAr[r][2] = 'O';
                row = r;
                col = 2;
                played = true;

            }
            else if (!played &&
                     !isspace(boardAr[r][1]) &&
                     !isspace(boardAr[r][2]) &&
                     isspace(boardAr[r][0]) &&
                     boardAr[r][1] == boardAr[r][2])
            {
                //cerr << "8\n";
                //boardAr[r][0] = 'O';
                row = r;
                col = 0;
                played = true;

            }
            else if (!played &&
                     !isspace(boardAr[r][0]) &&
                     !isspace(boardAr[r][2]) &&
                     isspace(boardAr[r][1]) &&
                     boardAr[r][0] == boardAr[r][2])
            {
                //cerr << "9\n";
                //boardAr[r][1] = 'O';
                row = r;
                col = 1;
                played = true;

            }
        }



        for (int c = 0; c < NUM_COLS; c++)
        {
            //cerr << "col\n";
            if (!played &&
                !isspace(boardAr[0][c]) &&
                !isspace(boardAr[1][c]) &&
                isspace(boardAr[2][c]) &&
                boardAr[0][c] == boardAr[1][c])
            {
                //cerr << "10\n";
                //boardAr[2][c] = 'O';
                row = 2;
                col = c;
                played = true;

            }
            else if (!played &&
                     !isspace(boardAr[1][c]) &&
                     !isspace(boardAr[2][c]) &&
                     isspace(boardAr[0][c]) &&
                     boardAr[1][c] == boardAr[2][c])
            {
                //cerr << "11\n";
                //boardAr[0][c] = 'O';
                row = 0;
                col = c;
                played = true;

            }
            else if (!played &&
                     !isspace(boardAr[0][c]) &&
                     !isspace(boardAr[2][c]) &&
                     isspace(boardAr[1][c]) &&
                     boardAr[0][c] == boardAr[2][c])
            {
                //cerr << "12\n";
                //boardAr[1][c] = 'O';
                row = 1;
                col = c;
                played = true;

            }

        }



        while (!played)
        {
            qDebug() << "13\n";

            row = rand() % 3;
            col = rand() % 3;
            qDebug() << "row = " << row;
            qDebug() << "col = " << col;
            qDebug() << "boardAr[row][col] = '" << boardAr[row][col] << "'";
            //cerr << row << endl;
            //cerr << col << endl;
            if (boardAr[row][col] == ' ')
            {
                //cerr << "14\n";
                //boardAr[row][col] = 'O';
                played = true;
            }
        }
    }
    emit selectSpot(row, col);
}

void GameBoard::spotSelected(int row, int col)
{
    boardAr[row][col] = token;
    showBoardAr();
    buttonGrid[row][col]->setDisabled(true);
    buttonGrid[row][col]->setChecked(true);
    buttonGrid[row][col]->setText(QString(boardAr[row][col]));
    rounds++;
    if(rounds > 2 && rounds < MAX_ROUNDS)
    {
        CheckWin();
    }
    if(rounds == MAX_ROUNDS)
    {
        if(!CheckWin())
        {
            gameOverDialog = new GameOverDialog(this, 'T', "");
        }
    }
    if(rounds < MAX_ROUNDS)
        switchToken();

    if(mode == 0 && token == 'O' && rounds < MAX_ROUNDS && gameOverDialog == nullptr)
    {
        GetCompPlay();
    }
    if(gameOverDialog != nullptr)
    {
        gameOverDialog->show();
        connect(gameOverDialog, &GameOverDialog::quit, this, [&](){
            emit quittingGame();
            close();
            });
        connect(gameOverDialog, &GameOverDialog::retry, this, &GameBoard::InitBoard);
    }
}

void GameBoard::on_pushButton1x1_clicked()
{
    emit selectSpot(0, 0);
}


void GameBoard::on_pushButton1x2_clicked()
{
    emit selectSpot(0, 1);
}


void GameBoard::on_pushButton1x3_clicked()
{
    emit selectSpot(0, 2);
}


void GameBoard::on_pushButton2x1_clicked()
{
    emit selectSpot(1, 0);
}


void GameBoard::on_pushButton2x2_clicked()
{
    emit selectSpot(1, 1);
}


void GameBoard::on_pushButton2x3_clicked()
{
    emit selectSpot(1, 2);
}


void GameBoard::on_pushButton3x1_clicked()
{
    emit selectSpot(2, 0);
}


void GameBoard::on_pushButton3x2_clicked()
{
    emit selectSpot(2, 1);
}


void GameBoard::on_pushButton3x3_clicked()
{
    emit selectSpot(2, 2);
}


void GameBoard::on_pushButton_clicked()
{
    emit quittingGame();
    close();
}


void GameBoard::on_pushButton_2_clicked()
{
    InitBoard();
}

