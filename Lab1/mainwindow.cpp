#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "senddialog.h"
#include "configuredialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSend_triggered()
{
    SendDialog SendWindow;
    SendWindow.setModal(true);
    SendWindow.exec();
}



void MainWindow::on_actionConfigure_triggered()
{
    ConfigureDialog ConfigureWindow;
    ConfigureWindow.setModal(true);
    ConfigureWindow.exec();
}

