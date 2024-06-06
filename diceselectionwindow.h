#ifndef DICESELECTIONWINDOW_H
#define DICESELECTIONWINDOW_H

#include <QMainWindow>

class PlayersWindow;
class GlobalConfig;

namespace Ui {
class DiceSelectionWindow;
}

class DiceSelectionWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DiceSelectionWindow(GlobalConfig *globalConfig, QWidget *parent = nullptr);
    ~DiceSelectionWindow();

private slots:
    void on_numberDices_valueChanged(int newNumberDices);
    void on_btnNext_clicked(bool checked);

private:
    Ui::DiceSelectionWindow *ui;
    PlayersWindow *w_playerSelection;
    GlobalConfig *globalConfig;
};

#endif // DICESELECTIONWINDOW_H
