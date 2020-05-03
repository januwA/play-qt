#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secdialog.h"

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
    // 使用这种方法，如果子窗口被打开，那么无法与父窗口交互，必须等待子窗口关闭
    //    SecDialog secDialog;
    //    secDialog.setWindowTitle("子窗口");
    //    secDialog.setModal(true);
    //    secDialog.exec();

    // 使用这种指针的方式，就能同时访问子窗口和父窗口
    secDialog = new SecDialog(this);
    secDialog->setWindowTitle("子窗口");
    secDialog->show();
}
