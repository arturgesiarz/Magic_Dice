#include "predraw3window.h"
#include "ui_predraw3window.h"

PreDraw3Window::PreDraw3Window(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw3Window)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
    setFixedSize(size());
}

PreDraw3Window::~PreDraw3Window()
{
    delete ui;
}

void PreDraw3Window::on_btnDraw_clicked(bool checked)
{

}

