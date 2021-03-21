#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    mThread = new MyThread(parent); // create the thread
    connect(mThread,SIGNAL(NumberChanged(int)), this, SLOT(onNumberChanged(int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onNumberChanged(int Number)
{
    ui->label1->setText(QString::number(Number));
}

void Dialog::on_pushButton_2_clicked()
{
    //Started
    mThread->start();
}

void Dialog::on_pushButton_clicked()
{
    //Stopped
    mThread->Stop = true;
}
