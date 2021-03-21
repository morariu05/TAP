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

    //Make our polygon
    QPolygon poly;
    poly << QPoint(10,10);
    poly << QPoint(10,100);
    poly << QPoint(100,10);
    poly << QPoint(100,100);


    //Make a pen
    QPen linepen;
    linepen.setWidth(8);
    linepen.setColor(Qt::red);
    linepen.setJoinStyle(Qt::RoundJoin); // conturi rotunde
    //linepen.setJoinStyle(Qt::MiterJoin); // colturi ascutite
    linepen.setStyle(Qt::DotLine); // "punctat"
    painter.setPen(linepen);

    //Make a brush
    QBrush fillbrush;
    fillbrush.setColor(Qt::green);
    fillbrush.setStyle(Qt::SolidPattern);


    //Fill the polygon
    QPainterPath path;
    path.addPolygon(poly);


    painter.fillPath(path, fillbrush);



    //Draw polygon
    painter.drawPolygon(poly);



}

