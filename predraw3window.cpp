#include "predraw3window.h"
#include "ui_predraw3window.h"

PreDraw3Window::PreDraw3Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw3Window)
{
    ui->setupUi(this);
}

PreDraw3Window::~PreDraw3Window()
{
    delete ui;
}
