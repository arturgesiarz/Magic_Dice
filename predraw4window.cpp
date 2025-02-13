#include "predraw4window.h"
#include "ui_predraw4window.h"

#include "randomengine.h"
#include "resultwindow.h"
#include "GlobalConfig.h"

PreDraw4Window::PreDraw4Window(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw4Window)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
    setFixedSize(size());
    PreDraw4Window::showCorrectName();
}

PreDraw4Window::~PreDraw4Window()
{
    delete ui;
}

// Funkcja wyswietla aktualne nazwy
void PreDraw4Window::showCorrectName()
{
    std::string actName = globalConfig->getNameOfPlayer(drewPresons);
    ui->playerName->setText(QString::fromStdString(actName));
}

void PreDraw4Window::drawing(QLabel* cube) {
    int cubeNumber = RandomEngine::randomNumber(1,6);
    PreDraw4Window::addPoints(drewPresons, cubeNumber);
    PreDraw4Window::changeCubesAfterDrawing(cubeNumber,cube);
}

void PreDraw4Window::changeCubesAfterDrawing(int cubeNumber, QLabel* cube)
{

    switch(cubeNumber) {
    case 1:
        cube->setPixmap(QPixmap(":/cube/res/dice-1.png"));
        break;
    case 2:
        cube->setPixmap(QPixmap(":/cube/res/dice-2.png"));
        break;
    case 3:
        cube->setPixmap(QPixmap(":/cube/res/dice-3.png"));
        break;
    case 4:
        cube->setPixmap(QPixmap(":/cube/res/dice-4.png"));
        break;
    case 5:
        cube->setPixmap(QPixmap(":/cube/res/dice-5.png"));
        break;
    case 6:
        cube->setPixmap(QPixmap(":/cube/res/dice-6.png"));
        break;
    }
}

void PreDraw4Window::changeStartCube(QLabel *cube)
{
    cube->setPixmap(QPixmap(":/cube/res/dice-?.png"));
}

void PreDraw4Window::addPoints(int playerID, int score)
{
    globalConfig->setScoreOfPlayer(playerID, score);
}


void PreDraw4Window::on_btnDraw_clicked(bool checked)
{
    int selectedNumberOfPlayers = globalConfig->getNumberOfPlayers();

    if (ui->btnDraw->text() == QString("RESULTS")) {
        w_result = new ResultWindow(globalConfig);

        close();
        w_result->show();

        delete this;
    }

    // losowanie
    else if (ui->btnDraw->text() == QString("DRAW")) {

        PreDraw4Window::drawing(ui->dice1);
        PreDraw4Window::drawing(ui->dice2);
        PreDraw4Window::drawing(ui->dice3);
        PreDraw4Window::drawing(ui->dice4);

        drewPresons++;

        if (drewPresons == selectedNumberOfPlayers) {
            ui->btnDraw->setText(QString("RESULTS"));
        } else {
            ui->btnDraw->setText(QString("NEXT \n PERSON"));
        }
    }

    // przechodzimy tylko do nastepnej osoby
    else if (ui->btnDraw->text() == QString("NEXT \n PERSON")) {
        PreDraw4Window::showCorrectName();

        changeStartCube(ui->dice1);
        changeStartCube(ui->dice2);
        changeStartCube(ui->dice3);
        changeStartCube(ui->dice4);

        ui->btnDraw->setText(QString("DRAW"));
    }
}


