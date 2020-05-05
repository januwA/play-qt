#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>

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
    // 只能选择文件
    QString filters = "全部 (*.*) ;; TXT文件 (*.txt) ;; js文件 (*.js)";
    QString filePath = QFileDialog::getOpenFileName(this, "Open File", "D://",filters);
    // QMessageBox::information(this, "", filePath);
    if(filePath == "") return;

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
             return;

    QByteArray body =  file.readAll();
    QMessageBox::information(this, "", QString::fromStdString(body.toStdString()));
}
