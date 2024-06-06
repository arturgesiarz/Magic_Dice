#include "predraw5window.h"
#include "ui_predraw5window.h"

PreDraw5Window::PreDraw5Window(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw5Window)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
    setFixedSize(size());
}

PreDraw5Window::~PreDraw5Window()
{
    delete ui;
}
