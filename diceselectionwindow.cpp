#include "diceselectionwindow.h"
#include "ui_diceselectionwindow.h"

DiceSelectionWindow::DiceSelectionWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DiceSelectionWindow)
{
    ui->setupUi(this);
}

DiceSelectionWindow::~DiceSelectionWindow()
{
    delete ui;
}
