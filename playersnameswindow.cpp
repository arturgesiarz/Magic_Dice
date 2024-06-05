#include "playersnameswindow.h"
#include "ui_playersnameswindow.h"
#include "GlobalConfig.h"
#include <iostream>

PlayersNamesWindow::PlayersNamesWindow(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlayersNamesWindow)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
    blockCells();
}

// Funkcja blokuje wpisywanie do poszczegolnych okienek
void PlayersNamesWindow::blockCells()
{
    int selectedNumberOfPlayers = globalConfig->getNumberOfPlayers();

    if (selectedNumberOfPlayers == 1) {
        ui->player2->setReadOnly(true);
        ui->player3->setReadOnly(true);
        ui->player4->setReadOnly(true);
        ui->player5->setReadOnly(true);
    }
    if (selectedNumberOfPlayers == 2) {
        ui->player3->setReadOnly(true);
        ui->player4->setReadOnly(true);
        ui->player5->setReadOnly(true);
    }
    if (selectedNumberOfPlayers == 3) {
        ui->player4->setReadOnly(true);
        ui->player5->setReadOnly(true);
    }
    if (selectedNumberOfPlayers == 4) {
        ui->player5->setReadOnly(true);
    }
}

PlayersNamesWindow::~PlayersNamesWindow()
{
    delete ui;
}
