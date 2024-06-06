#ifndef PREDRAW5WINDOW_H
#define PREDRAW5WINDOW_H

#include <QMainWindow>

class GlobalConfig;

namespace Ui {
class PreDraw5Window;
}

class PreDraw5Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreDraw5Window(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~PreDraw5Window();

private slots:
    void on_btnDraw_clicked(bool checked);

private:
    Ui::PreDraw5Window *ui;
    GlobalConfig* globalConfig;
};

#endif // PREDRAW5WINDOW_H
