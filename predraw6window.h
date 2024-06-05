#ifndef PREDRAW6WINDOW_H
#define PREDRAW6WINDOW_H

#include <QMainWindow>

namespace Ui {
class PreDraw6Window;
}

class PreDraw6Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreDraw6Window(QWidget *parent = nullptr);
    ~PreDraw6Window();

private:
    Ui::PreDraw6Window *ui;
};

#endif // PREDRAW6WINDOW_H
