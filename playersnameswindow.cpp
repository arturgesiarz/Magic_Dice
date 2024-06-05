#include "playersnameswindow.h"
#include "ui_playersnameswindow.h"
#include "GlobalConfig.h"

PlayersNamesWindow::PlayersNamesWindow(GlobalConfig* globalConfig,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlayersNamesWindow)
    , globalConfig(globalConfig)
{
    ui->setupUi(this);

    blockCells();
    colorBlockedCells();
}

// Funkcja blokuje wpisywanie do poszczegolnych okienek
void PlayersNamesWindow::blockCells()
{
    int selectedNumberOfPlayers = globalConfig->getNumberOfPlayers();

    if (selectedNumberOfPlayers == 1) {
        ui->player2->setReadOnly(true);
        ui->player3->setReadOnly(true);
        ui->player4->setReadOnly(true);
        ui->player5->setReadOnly(true);
    }
    if (selectedNumberOfPlayers == 2) {
        ui->player3->setReadOnly(true);
        ui->player4->setReadOnly(true);
        ui->player5->setReadOnly(true);
    }
    if (selectedNumberOfPlayers == 3) {
        ui->player4->setReadOnly(true);
        ui->player5->setReadOnly(true);
    }
    if (selectedNumberOfPlayers == 4) {
        ui->player5->setReadOnly(true);
    }
}

// Funkcja zmienia kolor zablokowanych okienek
void PlayersNamesWindow::colorBlockedCells()
{
    if (ui->player2->isReadOnly()) {
        ui->player2->setStyleSheet("background-color: #495057; border-radius: 10px;");
    }
    if (ui->player3->isReadOnly()) {
        ui->player3->setStyleSheet("background-color: #495057; border-radius: 10px;");
    }
    if (ui->player4->isReadOnly()) {
        ui->player4->setStyleSheet("background-color: #495057; border-radius: 10px;");
    }
    if (ui->player5->isReadOnly()) {
        ui->player5->setStyleSheet("background-color: #495057; border-radius: 10px;");
    }
}

void PlayersNamesWindow::textChanged(QTextEdit *player, int playerID)
{
    QString playerNameQT = player->toPlainText();
    std::string playerName = playerNameQT.toStdString();
    globalConfig->setNamesOfPlayers(playerID, playerName);
}


void PlayersNamesWindow::on_player1_textChanged()
{
    PlayersNamesWindow::textChanged(ui->player1, 0);
}


void PlayersNamesWindow::on_player2_textChanged()
{
    PlayersNamesWindow::textChanged(ui->player2, 1);
}


void PlayersNamesWindow::on_player3_textChanged()
{
     PlayersNamesWindow::textChanged(ui->player3, 2);
}


void PlayersNamesWindow::on_player4_textChanged()
{
     PlayersNamesWindow::textChanged(ui->player4, 3);
}


void PlayersNamesWindow::on_player5_textChanged()
{
     PlayersNamesWindow::textChanged(ui->player5, 4);
}


void PlayersNamesWindow::on_btnNext_clicked(bool checked)
{
    // w_playerSelection = new PlayersWindow(globalConfig);

    // close();
    // Qt::ReplaceSelection->show();

    const int selectedNumberOfDices = globalConfig->getNumberOfDices();

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

}

PlayersNamesWindow::~PlayersNamesWindow()
{
    delete ui;
}


