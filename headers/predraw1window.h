#ifndef PREDRAW1WINDOW_H
#define PREDRAW1WINDOW_H

#include <QMainWindow>
#include <QLabel>

class GlobalConfig;
class ResultWindow;

namespace Ui {
class PreDraw1Window;
}

class PreDraw1Window : public QMainWindow
{
    Q_OBJECT

    void showCorrectName();
    void drawing(QLabel* cube);
    void changeCubesAfterDrawing(int cubeNumber, QLabel* cube);
    void changeStartCube(QLabel* cube);
    void addPoints(int playerID, int score);

public:
    explicit PreDraw1Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw1Window();

private slots:
    void on_btnDraw_clicked(bool checked);

private:
    Ui::PreDraw1Window *ui;
    GlobalConfig* globalConfig;
    int drewPresons = 0;
    ResultWindow *w_result;
};

#endif // PREDRAW1WINDOW_H
