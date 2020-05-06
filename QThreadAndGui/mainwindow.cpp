#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myThread = new MyThread(this);
    connect(myThread, SIGNAL(numberChange(int)), this, SLOT(numberChange(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


// start
void MainWindow::on_pushButton_clicked()
{
    myThread->start();
}

// stop
void MainWindow::on_pushButton_2_clicked()
{
    myThread->isStop = true;
}

void MainWindow::numberChange(int i)
{
    ui->label->setText(QString::number(i));
}
