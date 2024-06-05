#ifndef PREDRAW3WINDOW_H
#define PREDRAW3WINDOW_H

#include <QMainWindow>
#include "GlobalConfig.h"

namespace Ui {
class PreDraw3Window;
}

class PreDraw3Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreDraw3Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw3Window();

private:
    Ui::PreDraw3Window *ui;
    GlobalConfig* globalConfig;
};

#endif // PREDRAW3WINDOW_H
