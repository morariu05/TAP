#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // se instaleaza EventFilter
    LinkFilter *filter = new LinkFilter(this);
    this->installEventFilter(filter);

    //set signal and slots
    connect(filter, SIGNAL(linkClicked(QString)), this, SLOT(ShowLink(QString)));

    //ui->pushButton->setWhatsThis("Hello <b>World</b>");
    //ui->pushButton->setWhatsThis("Let the dogs out for a walk");

    ui->pushButton->setWhatsThis("For more information <a href='www.google.com'>Click here</a>");
}

void Dialog::ShowLink(const QString &Link)
{
    QMessageBox::information(this,"Link Clicked",Link);
}

Dialog::~Dialog()
{
    delete ui;
}



