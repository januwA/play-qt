#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 下载地址
// https://ffmpeg.zeranoe.com/builds/

void MainWindow::on_pushButton_clicked()
{
    qDebug() << avcodec_configuration();
    unsigned version = avcodec_version();
    qDebug() << QString::number(version, 10);
}
