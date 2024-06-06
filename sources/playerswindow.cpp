#include "../headers/playerswindow.h"
#include "ui_playerswindow.h"

#include "../headers/GlobalConfig.h"
#include "../headers/playersnameswindow.h"

PlayersWindow::PlayersWindow(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlayersWindow)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
    setFixedSize(size());

}

PlayersWindow::~PlayersWindow()
{
    delete ui;
}

void PlayersWindow::on_numberPlayers_valueChanged(int newNumberOfPlayers)
{
    globalConfig->setNumberOfPlayers(newNumberOfPlayers);
}


void PlayersWindow::on_btnNext_clicked(bool checked)
{
    w_playerNameSelection = new PlayersNamesWindow(globalConfig);

    close();
    w_playerNameSelection->show();

    delete this;
}

