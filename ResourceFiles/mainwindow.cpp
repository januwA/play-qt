#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/EZc5awyF3vJSOR9.jpg");
    ui->label->setPixmap(pix.scaled(200, 200, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

