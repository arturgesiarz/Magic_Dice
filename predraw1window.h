#ifndef PREDRAW1WINDOW_H
#define PREDRAW1WINDOW_H

#include <QMainWindow>
#include "GlobalConfig.h"

namespace Ui {
class PreDraw1Window;
}

class PreDraw1Window : public QMainWindow
{
    Q_OBJECT

    void showCorrectName();
    void drawing();

public:
    explicit PreDraw1Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw1Window();

private slots:
    void on_btnDraw_clicked(bool checked);

private:
    Ui::PreDraw1Window *ui;
    GlobalConfig* globalConfig;
    int drewPresons = 0;
};

#endif // PREDRAW1WINDOW_H
