#include "dialog.h"
#include "ui_dialog.h"
#include <QString>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

   // ui->comboBox->addItem("Hello");
   // ui->comboBox->addItem("world");

    for(int i = 0; i < 9; i++)
    {
        //ui->comboBox->addItem((i + " item"));
        ui->comboBox->addItem((QString::number(i) + " item"));
    }
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Title", ui->comboBox->currentText());
}
