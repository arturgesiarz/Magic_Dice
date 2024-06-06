#ifndef PREDRAW3WINDOW_H
#define PREDRAW3WINDOW_H

#include <QMainWindow>
#include <QLabel>

class GlobalConfig;
class ResultWindow;

namespace Ui {
class PreDraw3Window;
}

class PreDraw3Window : public QMainWindow
{
    Q_OBJECT

    void showCorrectName();
    void drawing(QLabel* cube);
    void changeCubesAfterDrawing(int cubeNumber, QLabel* cube);
    void changeStartCube(QLabel* cube);
    void addPoints(int playerID, int score);

public:
    explicit PreDraw3Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw3Window();

private slots:
    void on_btnDraw_clicked(bool checked);

private:
    Ui::PreDraw3Window *ui;
    GlobalConfig* globalConfig;
    int drewPresons = 0;
    ResultWindow *w_result;
};

#endif // PREDRAW3WINDOW_H
