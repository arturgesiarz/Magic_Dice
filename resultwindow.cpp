#include "resultwindow.h"
#include "ui_resultwindow.h"

#include "GlobalConfig.h"

#include "predraw1window.h"
#include "predraw2window.h"
#include "predraw3window.h"
#include "predraw4window.h"
#include "predraw5window.h"
#include "predraw6window.h"


ResultWindow::ResultWindow(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ResultWindow)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);
    setFixedSize(size());
    colorBlockedCells();
    showNames();
    showResult();
}

void ResultWindow::showNames()
{
    if (globalConfig->getNumberOfPlayers() >= 1) {
        ui->player1->setText(QString::fromStdString(globalConfig->getNameOfPlayer(0)));
        ui->player1->setAlignment(Qt::AlignCenter);
    }
    if (globalConfig->getNumberOfPlayers() >= 2) {
        ui->player2->setText(QString::fromStdString(globalConfig->getNameOfPlayer(1)));
        ui->player2->setAlignment(Qt::AlignCenter);
    }
    if (globalConfig->getNumberOfPlayers() >= 3) {
        ui->player3->setText(QString::fromStdString(globalConfig->getNameOfPlayer(2)));
        ui->player3->setAlignment(Qt::AlignCenter);
    }
    if (globalConfig->getNumberOfPlayers() >= 4) {
        ui->player4->setText(QString::fromStdString(globalConfig->getNameOfPlayer(3)));
        ui->player4->setAlignment(Qt::AlignCenter);
    }
    if (globalConfig->getNumberOfPlayers() >= 5) {
        ui->player5->setText(QString::fromStdString(globalConfig->getNameOfPlayer(4)));
        ui->player5->setAlignment(Qt::AlignCenter);
    }
}

void ResultWindow::showResult()
{
    if (globalConfig->getNumberOfPlayers() >= 1) {
        ui->sumPlayer1->setText(QString::fromStdString(std::to_string(globalConfig->getScoreOfPlayer(0))));
        ui->sumPlayer1->setAlignment(Qt::AlignCenter);
    }
    if (globalConfig->getNumberOfPlayers() >= 2) {
        ui->sumPlayer2->setText(QString::fromStdString(std::to_string(globalConfig->getScoreOfPlayer(1))));
        ui->sumPlayer2->setAlignment(Qt::AlignCenter);
    }
    if (globalConfig->getNumberOfPlayers() >= 3) {
        ui->sumPlayer3->setText(QString::fromStdString(std::to_string(globalConfig->getScoreOfPlayer(2))));
        ui->sumPlayer3->setAlignment(Qt::AlignCenter);
    }
    if (globalConfig->getNumberOfPlayers() >= 4) {
        ui->sumPlayer4->setText(QString::fromStdString(std::to_string(globalConfig->getScoreOfPlayer(3))));
        ui->sumPlayer4->setAlignment(Qt::AlignCenter);
    }
    if (globalConfig->getNumberOfPlayers() >= 5) {
        ui->sumPlayer5->setText(QString::fromStdString(std::to_string(globalConfig->getScoreOfPlayer(4))));
        ui->sumPlayer5->setAlignment(Qt::AlignCenter);
    }
}

void ResultWindow::colorBlockedCells()
{

    if (globalConfig->getNumberOfPlayers() < 2) {
        ui->sumPlayer2->setStyleSheet("background-color: #495057; border-radius: 10px;");
        ui->player2->setStyleSheet("background-color: #495057; border-radius: 10px;");

    }
    if (globalConfig->getNumberOfPlayers() < 3) {
        ui->sumPlayer3->setStyleSheet("background-color: #495057; border-radius: 10px;");
        ui->player3->setStyleSheet("background-color: #495057; border-radius: 10px;");
    }
    if (globalConfig->getNumberOfPlayers() < 4) {
        ui->sumPlayer4->setStyleSheet("background-color: #495057; border-radius: 10px;");
        ui->player4->setStyleSheet("background-color: #495057; border-radius: 10px;");
    }
    if (globalConfig->getNumberOfPlayers() < 5) {
        ui->sumPlayer5->setStyleSheet("background-color: #495057; border-radius: 10px;");
        ui->player5->setStyleSheet("background-color: #495057; border-radius: 10px;");
    }

}

void ResultWindow::on_btnRedraw_clicked(bool checked)
{
    const int selectedNumberOfDices = globalConfig->getNumberOfDices();
    globalConfig->clear();

    switch(selectedNumberOfDices) {

    case 1:
        w_predraw_1 = new PreDraw1Window(globalConfig);
        close();
        w_predraw_1->show();
        break;

    case 2:
        w_predraw_2 = new PreDraw2Window(globalConfig);
        close();
        w_predraw_2->show();
        break;

    case 3:
        w_predraw_3 = new PreDraw3Window(globalConfig);
        close();
        w_predraw_3->show();
        break;

    case 4:
        w_predraw_4 = new PreDraw4Window(globalConfig);
        close();
        w_predraw_4->show();
        break;

    case 5:
        w_predraw_5 = new PreDraw5Window(globalConfig);
        close();
        w_predraw_5->show();
        break;

    case 6:
        w_predraw_6 = new PreDraw6Window(globalConfig);
        close();
        w_predraw_6->show();
        break;
    }

    delete this;
}


ResultWindow::~ResultWindow()
{
    delete ui;
}


