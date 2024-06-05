#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "diceselectionwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(size());
    w_dicesSelection = new DiceSelectionWindow();  // utworzenie nowego okna -> wyboru liczby kostek
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnStart_clicked(bool checked)
{
    close();
    w_dicesSelection->show();
}

