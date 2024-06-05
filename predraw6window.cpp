#include "predraw6window.h"
#include "ui_predraw6window.h"

PreDraw6Window::PreDraw6Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw6Window)
{
    ui->setupUi(this);
}

PreDraw6Window::~PreDraw6Window()
{
    delete ui;
}
