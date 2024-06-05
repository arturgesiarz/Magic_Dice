#include "predraw1window.h"
#include "ui_predraw1window.h"

PreDraw1Window::PreDraw1Window(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw1Window)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
}

PreDraw1Window::~PreDraw1Window()
{
    delete ui;
}
