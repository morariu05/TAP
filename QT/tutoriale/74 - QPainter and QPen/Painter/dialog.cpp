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



void Dialog::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QPen pointpen(Qt::black);
    pointpen.setWidth(6); //6 pixels

    QPen linepen(Qt::red);
    linepen.setWidth(2);

    QPoint p1;
    p1.setX(10); // 10 across
    p1.setY(10); // 10 down

    QPoint p2;
    p2.setX(100); // 100 across
    p2.setY(100); // 300 down

    painter.setPen(linepen);

   //painter.drawLine(10,10,100,100);
    painter.drawLine(p1, p2);

    painter.setPen(pointpen);
    painter.drawPoint(p1);
    painter.drawPoint(p2);
}
