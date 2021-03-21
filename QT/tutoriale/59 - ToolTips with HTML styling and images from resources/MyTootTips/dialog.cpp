#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->pushButton1->setToolTip("Hello <font color='red'><b>World</b></font>"
                                "<u1>"
                                "<li>Item 1</li>"
                                "<li>Item 2</li>"
                                "<li>Item 3</li>"
                                "<u1>");

    ui->pushButton2->setToolTip("<img src=':/files/images/add.png'> Hello world");
}

Dialog::~Dialog()
{
    delete ui;
}

