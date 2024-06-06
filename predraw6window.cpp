#include "predraw6window.h"
#include "ui_predraw6window.h"

PreDraw6Window::PreDraw6Window(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw6Window)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
    setFixedSize(size());
}

PreDraw6Window::~PreDraw6Window()
{
    delete ui;
}
