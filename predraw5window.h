#ifndef PREDRAW5WINDOW_H
#define PREDRAW5WINDOW_H

#include <QMainWindow>
#include <QLabel>

class GlobalConfig;
class ResultWindow;

namespace Ui {
class PreDraw5Window;
}

class PreDraw5Window : public QMainWindow
{
    Q_OBJECT

    void showCorrectName();
    void drawing(QLabel* cube);
    void changeCubesAfterDrawing(int cubeNumber, QLabel* cube);
    void changeStartCube(QLabel* cube);
    void addPoints(int playerID, int score);

public:
    explicit PreDraw5Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw5Window();

private slots:
    void on_btnDraw_clicked(bool checked);

private:
    Ui::PreDraw5Window *ui;
    GlobalConfig* globalConfig;
    int drewPresons = 0;
    ResultWindow *w_result;
};

#endif // PREDRAW5WINDOW_H
