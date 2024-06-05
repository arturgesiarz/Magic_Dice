#ifndef DICESELECTIONWINDOW_H
#define DICESELECTIONWINDOW_H

#include <QMainWindow>

namespace Ui {
class DiceSelectionWindow;
}

class DiceSelectionWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DiceSelectionWindow(QWidget *parent = nullptr);
    ~DiceSelectionWindow();

private:
    Ui::DiceSelectionWindow *ui;
};

#endif // DICESELECTIONWINDOW_H
