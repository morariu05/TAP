#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    // information
    QMessageBox::information(this,"Title here", "Text here");
}

void Dialog::on_pushButton_2_clicked()
{
    // question
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Title here", "do you like cats?", QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes)
    {
        QMessageBox::information(this,"Title here", "You love cats");
    }
    else
    {
        QMessageBox::information(this,"Title here", "You hate cats");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    // warning
    QMessageBox::warning(this,"Title here", "You love cats");
}

void Dialog::on_pushButton_4_clicked()
{
    // custom
     QMessageBox::StandardButton reply;
     reply =  QMessageBox::question(this, "My title", "My text here", QMessageBox::YesToAll | QMessageBox::Yes | QMessageBox::No | QMessageBox::NoToAll);


}
