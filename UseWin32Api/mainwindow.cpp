#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>
#include <QFileDialog>
#include <QProcess>
#include <QtDebug>

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


// https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messageboxw
void MainWindow::on_pushButton_clicked()
{
    QString body = "Hello World";
    QString title = "标题";
    MessageBoxW(0, (LPCTSTR)body.utf16(), (LPCTSTR)title.utf16(), MB_OK);
}

void MainWindow::on_pushButton_2_clicked()
{
    QFileDialog dialog(this);
    QString filePath =  dialog.getOpenFileName();
    if(filePath.isEmpty())return;
    QProcess process;
    QString command = "notepad "+ filePath;
    int r = process.execute(command);
    qDebug() << r;
}
