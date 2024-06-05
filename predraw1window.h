#ifndef PREDRAW1WINDOW_H
#define PREDRAW1WINDOW_H

#include <QMainWindow>

namespace Ui {
class PreDraw1Window;
}

class PreDraw1Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreDraw1Window(QWidget *parent = nullptr);
    ~PreDraw1Window();

private:
    Ui::PreDraw1Window *ui;
};

#endif // PREDRAW1WINDOW_H
