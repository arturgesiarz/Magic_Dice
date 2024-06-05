#ifndef PLAYERSWINDOW_H
#define PLAYERSWINDOW_H

#include <QMainWindow>

namespace Ui {
class PlayersWindow;
}

class PlayersWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayersWindow(QWidget *parent = nullptr);
    ~PlayersWindow();

private:
    Ui::PlayersWindow *ui;
};

#endif // PLAYERSWINDOW_H
