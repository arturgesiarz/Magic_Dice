#include "predraw2window.h"
#include "ui_predraw2window.h"

PreDraw2Window::PreDraw2Window(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw2Window)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
}

PreDraw2Window::~PreDraw2Window()
{
    delete ui;
}
