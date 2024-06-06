#include "../headers/predraw6window.h"
#include "ui_predraw6window.h"

#include "../headers/randomengine.h"
#include "../headers/resultwindow.h"
#include "../headers/GlobalConfig.h"

PreDraw6Window::PreDraw6Window(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw6Window)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
    setFixedSize(size());
    PreDraw6Window::showCorrectName();
}

PreDraw6Window::~PreDraw6Window()
{
    delete ui;
}

// Funkcja wyswietla aktualne nazwy
void PreDraw6Window::showCorrectName()
{
    std::string actName = globalConfig->getNameOfPlayer(drewPresons);
    ui->playerName->setText(QString::fromStdString(actName));
}

void PreDraw6Window::drawing(QLabel* cube) {
    int cubeNumber = RandomEngine::randomNumber(1,6);
    PreDraw6Window::addPoints(drewPresons, cubeNumber);
    PreDraw6Window::changeCubesAfterDrawing(cubeNumber,cube);
}

void PreDraw6Window::changeCubesAfterDrawing(int cubeNumber, QLabel* cube)
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

void PreDraw6Window::changeStartCube(QLabel *cube)
{
    cube->setPixmap(QPixmap(":/cube/res/dice-?.png"));
}

void PreDraw6Window::addPoints(int playerID, int score)
{
    globalConfig->setScoreOfPlayer(playerID, score);
}


void PreDraw6Window::on_btnDraw_clicked(bool checked)
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

        drawing(ui->dice1);
        drawing(ui->dice2);
        drawing(ui->dice3);
        drawing(ui->dice4);
        drawing(ui->dice5);
        drawing(ui->dice6);

        drewPresons++;

        if (drewPresons == selectedNumberOfPlayers) {
            ui->btnDraw->setText(QString("RESULTS"));
        } else {
            ui->btnDraw->setText(QString("NEXT \n PERSON"));
        }
    }

    // przechodzimy tylko do nastepnej osoby
    else if (ui->btnDraw->text() == QString("NEXT \n PERSON")) {
        showCorrectName();

        changeStartCube(ui->dice1);
        changeStartCube(ui->dice2);
        changeStartCube(ui->dice3);
        changeStartCube(ui->dice4);
        changeStartCube(ui->dice5);
        changeStartCube(ui->dice6);

        ui->btnDraw->setText(QString("DRAW"));
    }
}
