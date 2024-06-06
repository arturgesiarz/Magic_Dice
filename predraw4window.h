#ifndef PREDRAW4WINDOW_H
#define PREDRAW4WINDOW_H

#include <QMainWindow>

class GlobalConfig;

namespace Ui {
class PreDraw4Window;
}

class PreDraw4Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreDraw4Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw4Window();

private:
    Ui::PreDraw4Window *ui;
    GlobalConfig* globalConfig;
};

#endif // PREDRAW4WINDOW_H
