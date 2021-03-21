#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QtCore>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Statlabel = new QLabel(this);
    StatProgress = new QProgressBar(this);

    ui->statusbar->addPermanentWidget(Statlabel);
    ui->statusbar->addPermanentWidget(StatProgress,1);

    StatProgress->setTextVisible(false);
    Statlabel->setText("Hello");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionDo_Something_triggered()
{
    ui->statusbar->showMessage("Hello");

    StatProgress->setValue(45);
}
