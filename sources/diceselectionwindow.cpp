#include "../headers/diceselectionwindow.h"
#include "ui_diceselectionwindow.h"

#include "../headers/playerswindow.h"
#include "../headers/GlobalConfig.h"

DiceSelectionWindow::DiceSelectionWindow(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DiceSelectionWindow)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
    setFixedSize(size());
}

DiceSelectionWindow::~DiceSelectionWindow()
{
    delete ui;
}

void DiceSelectionWindow::on_numberDices_valueChanged(int numberOfDices)
{
    globalConfig->setNumberOfDices(numberOfDices);
}


void DiceSelectionWindow::on_btnNext_clicked(bool checked)
{
    w_playerSelection = new PlayersWindow(globalConfig);

    close();
    w_playerSelection->show();

    delete this;
}

