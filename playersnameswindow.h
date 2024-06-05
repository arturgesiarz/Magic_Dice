#ifndef PLAYERSNAMESWINDOW_H
#define PLAYERSNAMESWINDOW_H

#include <QMainWindow>

namespace Ui {
class PlayersNamesWindow;
}

class PlayersNamesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayersNamesWindow(QWidget *parent = nullptr);
    ~PlayersNamesWindow();

private:
    Ui::PlayersNamesWindow *ui;
};

#endif // PLAYERSNAMESWINDOW_H
