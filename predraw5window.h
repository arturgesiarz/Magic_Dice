#ifndef PREDRAW5WINDOW_H
#define PREDRAW5WINDOW_H

#include <QMainWindow>

namespace Ui {
class PreDraw5Window;
}

class PreDraw5Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreDraw5Window(QWidget *parent = nullptr);
    ~PreDraw5Window();

private:
    Ui::PreDraw5Window *ui;
};

#endif // PREDRAW5WINDOW_H
