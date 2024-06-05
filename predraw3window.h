#ifndef PREDRAW3WINDOW_H
#define PREDRAW3WINDOW_H

#include <QMainWindow>

namespace Ui {
class PreDraw3Window;
}

class PreDraw3Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreDraw3Window(QWidget *parent = nullptr);
    ~PreDraw3Window();

private:
    Ui::PreDraw3Window *ui;
};

#endif // PREDRAW3WINDOW_H
