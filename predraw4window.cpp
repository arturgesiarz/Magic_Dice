#include "predraw4window.h"
#include "ui_predraw4window.h"

PreDraw4Window::PreDraw4Window(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw4Window)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
    setFixedSize(size());
}

PreDraw4Window::~PreDraw4Window()
{
    delete ui;
}
