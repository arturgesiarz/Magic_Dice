#ifndef PREDRAWWINDOW_H
#define PREDRAWWINDOW_H

#include <QMainWindow>

namespace Ui {
class PreDrawWindow;
}

class PreDrawWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreDrawWindow(QWidget *parent = nullptr);
    ~PreDrawWindow();

private:
    Ui::PreDrawWindow *ui;
};

#endif // PREDRAWWINDOW_H
