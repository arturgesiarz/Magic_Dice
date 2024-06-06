#ifndef PREDRAW6WINDOW_H
#define PREDRAW6WINDOW_H

#include <QMainWindow>
#include <QLabel>

class GlobalConfig;
class ResultWindow;

namespace Ui {
class PreDraw6Window;
}

class PreDraw6Window : public QMainWindow
{
    Q_OBJECT

    void showCorrectName();
    void drawing(QLabel* cube);
    void changeCubesAfterDrawing(int cubeNumber, QLabel* cube);
    void changeStartCube(QLabel* cube);
    void addPoints(int playerID, int score);

public:
    explicit PreDraw6Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw6Window();

private slots:
    void on_btnDraw_clicked(bool checked);

private:
    Ui::PreDraw6Window *ui;
    GlobalConfig* globalConfig;
    int drewPresons = 0;
    ResultWindow *w_result;
};

#endif // PREDRAW6WINDOW_H
