#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

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
    // https://doc.qt.io/qt-5/qmessagebox.html
    QMessageBox::StandardButton rep = QMessageBox::information(this, "标题", "内容", QMessageBox::Save, QMessageBox::Cancel);
    if(rep == QMessageBox::Save){
        QMessageBox::about(this, "ok", "点击了确定");
    }else{
        qDebug() << "点击了取消";
    }
}
