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

public:
    explicit PreDraw1Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw1Window();

private:
    Ui::PreDraw1Window *ui;
    GlobalConfig* globalConfig;
};

#endif // PREDRAW1WINDOW_H
