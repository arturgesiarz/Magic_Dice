#include "diceselectionwindow.h"
#include "ui_diceselectionwindow.h"

DiceSelectionWindow::DiceSelectionWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DiceSelectionWindow)
{
    ui->setupUi(this);
    setFixedSize(size());
}

DiceSelectionWindow::~DiceSelectionWindow()
{
    delete ui;
}
