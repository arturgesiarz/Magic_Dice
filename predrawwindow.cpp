#include "predrawwindow.h"
#include "ui_predrawwindow.h"

PreDrawWindow::PreDrawWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PreDrawWindow)
{
    ui->setupUi(this);
}

PreDrawWindow::~PreDrawWindow()
{
    delete ui;
}
