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

//Linear Gradient

    QLinearGradient grad1(25, 100, 150, 175);
/*
    grad1.setColorAt(0.0, Qt::white);
    grad1.setColorAt(0.5, Qt::green);
    grad1.setColorAt(1.0, Qt::black);

    QRect rec(10, 10, 200, 200);
    painter.fillRect(rec,grad1);
*/

// Radial Gradient

    QRadialGradient grad2(QPoint(100,100), 100);
/*
    grad2.setColorAt(0.0, Qt::white);
    grad2.setColorAt(0.5, Qt::green);
    grad2.setColorAt(1.0, Qt::black);

    QRect rec(10, 10, 200, 200);
    painter.fillRect(rec,grad2);
*/

// Conical Gradient
    QConicalGradient grad3(QPoint(100,100),10);

    grad3.setColorAt(0.0, Qt::white);
    grad3.setColorAt(0.5, Qt::green);
    grad3.setColorAt(1.0, Qt::black);

    QRect rec(10, 10, 200, 200);
    painter.fillRect(rec,grad3);

}

