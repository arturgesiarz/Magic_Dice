#ifndef PREDRAW6WINDOW_H
#define PREDRAW6WINDOW_H

#include <QMainWindow>

class GlobalConfig;

namespace Ui {
class PreDraw6Window;
}

class PreDraw6Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreDraw6Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw6Window();

private:
    Ui::PreDraw6Window *ui;
    GlobalConfig* globalConfig;
};

#endif // PREDRAW6WINDOW_H
