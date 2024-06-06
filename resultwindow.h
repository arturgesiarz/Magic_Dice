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

    void showNames();
    void showResult();
    void colorBlockedCells();

public:
    explicit ResultWindow(GlobalConfig* globalConfig,QWidget *parent = nullptr);
    ~ResultWindow();

private slots:
    void on_btnRedraw_clicked(bool checked);

private:
    Ui::ResultWindow *ui;
    GlobalConfig* globalConfig;
};

#endif // RESULTWINDOW_H
