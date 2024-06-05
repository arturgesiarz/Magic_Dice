#ifndef PREDRAW4WINDOW_H
#define PREDRAW4WINDOW_H

#include <QMainWindow>

namespace Ui {
class PreDraw4Window;
}

class PreDraw4Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreDraw4Window(QWidget *parent = nullptr);
    ~PreDraw4Window();

private:
    Ui::PreDraw4Window *ui;
};

#endif // PREDRAW4WINDOW_H
