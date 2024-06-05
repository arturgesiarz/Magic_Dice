#include "playerswindow.h"
#include "ui_playerswindow.h"

PlayersWindow::PlayersWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlayersWindow)
{
    ui->setupUi(this);
}

PlayersWindow::~PlayersWindow()
{
    delete ui;
}
