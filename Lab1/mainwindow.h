#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionSend_triggered();

    void on_actionConfigure_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
