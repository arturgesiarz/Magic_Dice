#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "diceselectionwindow.h"
#include "GlobalConfig.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(size());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnStart_clicked(bool checked)
{
    w_dicesSelection = new DiceSelectionWindow(new GlobalConfig());
    close();
    w_dicesSelection->show();
}

