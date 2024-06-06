#include "predraw1window.h"
#include "ui_predraw1window.h"

#include "randomengine.h"
#include "resultwindow.h"
#include "GlobalConfig.h"

PreDraw1Window::PreDraw1Window(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw1Window)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
    setFixedSize(size());
    PreDraw1Window::showCorrectName();
}

// Funkcja wyswietla aktualne nazwy
void PreDraw1Window::showCorrectName()
{
    std::string actName = globalConfig->getNameOfPlayer(drewPresons);
    ui->playerName->setText(QString::fromStdString(actName));
}

void PreDraw1Window::drawing(QLabel* cube) {
    int cubeNumber = RandomEngine::randomNumber(1,6);
    PreDraw1Window::addPoints(drewPresons, cubeNumber);
    PreDraw1Window::changeCubesAfterDrawing(cubeNumber,cube);
    drewPresons++;
}

void PreDraw1Window::changeCubesAfterDrawing(int cubeNumber, QLabel* cube)
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

void PreDraw1Window::changeStartCube(QLabel *cube)
{
    cube->setPixmap(QPixmap(":/cube/res/dice-?.png"));
}

void PreDraw1Window::addPoints(int playerID, int score)
{
    globalConfig->setScoreOfPlayer(playerID, score);
}


void PreDraw1Window::on_btnDraw_clicked(bool checked)
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
        PreDraw1Window::drawing(ui->dice1);

        if (drewPresons == selectedNumberOfPlayers) {
             ui->btnDraw->setText(QString("RESULTS"));
        } else {
            ui->btnDraw->setText(QString("NEXT \n PERSON"));
        }
    }

    // przechodzimy tylko do nastepnej osoby
    else if (ui->btnDraw->text() == QString("NEXT \n PERSON")) {
        PreDraw1Window::showCorrectName();

        changeStartCube(ui->dice1);
        ui->btnDraw->setText(QString("DRAW"));
    }
}


PreDraw1Window::~PreDraw1Window()
{
    delete ui;
}



