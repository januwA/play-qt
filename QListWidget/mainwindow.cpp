#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->addItem("1");

    QListWidgetItem *item2 = new QListWidgetItem("2");
    ui->listWidget->addItem(item2);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->currentItem()->setBackgroundColor(Qt::black);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}
