#ifndef PLAYERSNAMESWINDOW_H
#define PLAYERSNAMESWINDOW_H

#include <QMainWindow>
#include "GlobalConfig.h"

namespace Ui {
class PlayersNamesWindow;
}

class PlayersNamesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayersNamesWindow(GlobalConfig* globalConfig, QWidget *parent = nullptr);
    void blockCells();
    ~PlayersNamesWindow();

private:
    Ui::PlayersNamesWindow *ui;
    GlobalConfig* globalConfig;
};

#endif // PLAYERSNAMESWINDOW_H
