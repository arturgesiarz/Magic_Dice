#ifndef RESULTWINDOW_H
#define RESULTWINDOW_H

#include <QMainWindow>

class GlobalConfig;
class PreDraw1Window;
class PreDraw2Window;
class PreDraw3Window;
class PreDraw4Window;
class PreDraw5Window;
class PreDraw6Window;


namespace Ui {
class ResultWindow;
}

class ResultWindow : public QMainWindow
{
    Q_OBJECT

    void showNames();
    void showResult();
    void colorBlockedCells();

public:
    explicit ResultWindow(GlobalConfig* globalConfig ,QWidget *parent = nullptr);
    ~ResultWindow();

private slots:
    void on_btnRedraw_clicked(bool checked);

private:
    Ui::ResultWindow *ui;
    GlobalConfig* globalConfig;

    PreDraw1Window* w_predraw_1;
    PreDraw2Window* w_predraw_2;
    PreDraw3Window* w_predraw_3;
    PreDraw4Window* w_predraw_4;
    PreDraw5Window* w_predraw_5;
    PreDraw6Window* w_predraw_6;
};

#endif // RESULTWINDOW_H
