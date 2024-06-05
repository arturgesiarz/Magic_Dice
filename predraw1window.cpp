#include "predraw1window.h"
#include "ui_predraw1window.h"

PreDraw1Window::PreDraw1Window(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw1Window)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
    PreDraw1Window::showCorrectName();
}

// Funkcja wyswietla aktualne nazwy
void PreDraw1Window::showCorrectName()
{
    std::string actName = globalConfig->getNameOfPlayer(drewPresons);
    ui->playerName->setText(QString::fromStdString(actName));
}

void PreDraw1Window::drawing()
{
    // losowanie
    drewPresons++;
}


void PreDraw1Window::on_btnDraw_clicked(bool checked)
{
    int selectedNumberOfPlayers = globalConfig->getNumberOfPlayers();

    // przechodzimy do wynikow
    if (ui->btnDraw->text() == QString("RESULTS")) {
        // go to result!
    }

    // losowanie
    else if (ui->btnDraw->text() == QString("DRAW")) {
        PreDraw1Window::drawing();
        if (drewPresons == selectedNumberOfPlayers) {
             ui->btnDraw->setText(QString("RESULTS"));
        } else {
            ui->btnDraw->setText(QString("NEXT \n PERSON"));
        }
    }

    // przechodzimy tylko do nastepnej osoby
    else if (ui->btnDraw->text() == QString("NEXT \n PERSON")) {
        PreDraw1Window::showCorrectName();
        ui->btnDraw->setText(QString("DRAW"));
    }
}


PreDraw1Window::~PreDraw1Window()
{
    delete ui;
}



