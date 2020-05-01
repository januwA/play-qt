#include "mainwindow.h"
#include "ui_mainwindow.h"

// 在这里实现头文件的定义
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


void MainWindow::on_pushButton_clicked()
{
    // this->close(); // 点击按钮关闭窗口

    // 获取ui中的label并改变文本
    ui->label->setText("Button is Clicked");

}
