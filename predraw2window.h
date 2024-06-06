#ifndef PREDRAW2WINDOW_H
#define PREDRAW2WINDOW_H

#include <QMainWindow>
#include <QLabel>

class GlobalConfig;
class ResultWindow;

namespace Ui {
class PreDraw2Window;
}

class PreDraw2Window : public QMainWindow
{
    Q_OBJECT

    void showCorrectName();
    void drawing(QLabel* cube);
    void changeCubesAfterDrawing(int cubeNumber, QLabel* cube);
    void changeStartCube(QLabel* cube);
    void addPoints(int playerID, int score);

public:
    explicit PreDraw2Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw2Window();

private slots:
    void on_btnDraw_clicked(bool checked);

private:
    Ui::PreDraw2Window *ui;
    GlobalConfig* globalConfig;
    int drewPresons = 0;
    ResultWindow *w_result;
};

#endif // PREDRAW2WINDOW_H
