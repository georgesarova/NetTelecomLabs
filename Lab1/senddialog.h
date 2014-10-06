#ifndef SENDDIALOG_H
#define SENDDIALOG_H

#include <QDialog>

namespace Ui {
class SendDialog;
}

class SendDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SendDialog(QWidget *parent = 0);
    ~SendDialog();

private slots:
    void on_SendEditTool_clicked();

    void on_SendDialog_accepted();

    void on_SendEditOk_clicked();

private:
    Ui::SendDialog *ui;
};

#endif // SENDDIALOG_H
