#include "senddialog.h"
#include "ui_senddialog.h"
#include "QFileDialog"
#include "QDialog"

SendDialog::SendDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SendDialog)
{
    ui->setupUi(this);

    QRegExp IpExp("[1-9]{1}[0-9]{0,2}[.]{1}[0-9]{1,3}[.]{1}[0-9]{1,3}[.]{1}[0-9]{1,3}");
    ui->SendEditIp->setValidator(new QRegExpValidator(IpExp, this));

}
SendDialog::~SendDialog()
{
    delete ui;
}

void SendDialog::on_SendEditTool_clicked()
{

    QString filename = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "C:\\",
                "All files (*.*);;Text File (*.txt)");
    ui->SendEditFile->setText(filename);
}



void SendDialog::on_SendEditOk_clicked()
{
    close();
}
// //////////////////////////////////
