#ifndef PREDRAW4WINDOW_H
#define PREDRAW4WINDOW_H

#include <QMainWindow>
#include <QLabel>

class GlobalConfig;
class ResultWindow;


namespace Ui {
class PreDraw4Window;
}

class PreDraw4Window : public QMainWindow
{
    Q_OBJECT

    void showCorrectName();
    void drawing(QLabel* cube);
    void changeCubesAfterDrawing(int cubeNumber, QLabel* cube);
    void changeStartCube(QLabel* cube);
    void addPoints(int playerID, int score);

public:
    explicit PreDraw4Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw4Window();

private slots:    
    void on_btnDraw_clicked(bool checked);

private:
    Ui::PreDraw4Window *ui;
    GlobalConfig* globalConfig;
    int drewPresons = 0;
    ResultWindow *w_result;
};

#endif // PREDRAW4WINDOW_H
