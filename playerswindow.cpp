#include "playerswindow.h"
#include "ui_playerswindow.h"
#include "GlobalConfig.h"

PlayersWindow::PlayersWindow(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlayersWindow)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);

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
}

