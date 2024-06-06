#include "resultwindow.h"
#include "ui_resultwindow.h"

ResultWindow::ResultWindow(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ResultWindow)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
}

ResultWindow::~ResultWindow()
{
    delete ui;
}
