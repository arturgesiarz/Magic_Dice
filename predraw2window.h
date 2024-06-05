#ifndef PREDRAW2WINDOW_H
#define PREDRAW2WINDOW_H

#include <QMainWindow>
#include "GlobalConfig.h"

namespace Ui {
class PreDraw2Window;
}

class PreDraw2Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreDraw2Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw2Window();

private:
    Ui::PreDraw2Window *ui;
    GlobalConfig *globalConfig;
};

#endif // PREDRAW2WINDOW_H
