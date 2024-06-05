#ifndef PREDRAW2WINDOW_H
#define PREDRAW2WINDOW_H

#include <QMainWindow>

namespace Ui {
class PreDraw2Window;
}

class PreDraw2Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreDraw2Window(QWidget *parent = nullptr);
    ~PreDraw2Window();

private:
    Ui::PreDraw2Window *ui;
};

#endif // PREDRAW2WINDOW_H
