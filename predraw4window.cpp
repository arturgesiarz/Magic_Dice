#include "predraw4window.h"
#include "ui_predraw4window.h"

PreDraw4Window::PreDraw4Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDraw4Window)
{
    ui->setupUi(this);
}

PreDraw4Window::~PreDraw4Window()
{
    delete ui;
}
