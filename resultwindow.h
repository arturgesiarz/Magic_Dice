#ifndef RESULTWINDOW_H
#define RESULTWINDOW_H

#include <QMainWindow>
#include "GlobalConfig.h"

namespace Ui {
class ResultWindow;
}

class ResultWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ResultWindow(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~ResultWindow();

private:
    Ui::ResultWindow *ui;
    GlobalConfig* globalConfig;
};

#endif // RESULTWINDOW_H
