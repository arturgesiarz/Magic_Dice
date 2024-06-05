#include "predraw1window.h"
#include "ui_predraw1window.h"

PreDraw1Window::PreDraw1Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw1Window)
{
    ui->setupUi(this);
}

PreDraw1Window::~PreDraw1Window()
{
    delete ui;
}
