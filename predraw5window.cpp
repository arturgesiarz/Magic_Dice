#include "predraw5window.h"
#include "ui_predraw5window.h"

PreDraw5Window::PreDraw5Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw5Window)
{
    ui->setupUi(this);
}

PreDraw5Window::~PreDraw5Window()
{
    delete ui;
}
