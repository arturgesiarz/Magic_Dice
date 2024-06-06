#ifndef PLAYERSWINDOW_H
#define PLAYERSWINDOW_H

#include <QMainWindow>

class PlayersNamesWindow;
class GlobalConfig;

namespace Ui {
class PlayersWindow;
}

class PlayersWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayersWindow(GlobalConfig* globalConfig, QWidget *parent = nullptr);
    ~PlayersWindow();

private slots:
    void on_numberPlayers_valueChanged(int newNumberPlayers);

    void on_btnNext_clicked(bool checked);

private:
    Ui::PlayersWindow *ui;
    PlayersNamesWindow *w_playerNameSelection;
    GlobalConfig* globalConfig;
};

#endif // PLAYERSWINDOW_H
