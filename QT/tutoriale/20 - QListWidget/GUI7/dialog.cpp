#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //ui->listWidget->addItem("Hello");

    for(int i = 0; i < 9; i++)
    {
        ui->listWidget->addItem(QString::number(i) + " item here");
    }
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    //ui->listWidget->currentItem()->setText("Fuzzy Bunny");
    QListWidgetItem *itm = ui->listWidget->currentItem();
    itm->setText("Fuzzy bunnys of doom");
    itm->setTextColor(Qt::green);
    itm->setBackgroundColor(Qt::black);
}
