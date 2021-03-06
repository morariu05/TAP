#include "dialog.h"
#include "ui_dialog.h"

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

void Dialog::paintEvent(QPainter *)
{
    QPainter painter(this);

    QRect rec(10,10,100,100); // rectangle
    QPen framepen(Qt::red);
    framepen.setWidth(6);

    QBrush brush(Qt::yellow, Qt::SolidPattern);

    painter.fillRect(rec,brush);

    painter.setPen(framepen);
    painter.drawRect(rec);

    painter.drawEllipse(rec);


}

