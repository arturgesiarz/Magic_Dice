#include "playersnameswindow.h"
#include "ui_playersnameswindow.h"

PlayersNamesWindow::PlayersNamesWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlayersNamesWindow)
{
    ui->setupUi(this);
}

PlayersNamesWindow::~PlayersNamesWindow()
{
    delete ui;
}
