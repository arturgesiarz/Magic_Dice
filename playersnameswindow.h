#ifndef PLAYERSNAMESWINDOW_H
#define PLAYERSNAMESWINDOW_H

#include <QMainWindow>
#include <QTextEdit>

class GlobalConfig;
class PreDraw1Window;
class PreDraw2Window;
class PreDraw3Window;
class PreDraw4Window;
class PreDraw5Window;
class PreDraw6Window;

namespace Ui {
class PlayersNamesWindow;
}

class PlayersNamesWindow : public QMainWindow
{
    Q_OBJECT

    void textChanged(QTextEdit* player, int playerID);

public:
    explicit PlayersNamesWindow(GlobalConfig* globalConfig, QWidget *parent = nullptr);
    void blockCells();
    void colorBlockedCells();
    ~PlayersNamesWindow();


private slots:
    void on_player1_textChanged();

    void on_player2_textChanged();

    void on_player3_textChanged();

    void on_player4_textChanged();

    void on_player5_textChanged();

    void on_btnNext_clicked(bool checked);

private:
    Ui::PlayersNamesWindow *ui;
    GlobalConfig* globalConfig;

    // odpowiednie okna w zlaznosci jakie wybralismy losowania
    PreDraw1Window* w_predraw_1;
    PreDraw2Window* w_predraw_2;
    PreDraw3Window* w_predraw_3;
    PreDraw4Window* w_predraw_4;
    PreDraw5Window* w_predraw_5;
    PreDraw6Window* w_predraw_6;


};

#endif // PLAYERSNAMESWINDOW_H
