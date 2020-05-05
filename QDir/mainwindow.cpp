#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDir dir;

    // 返回此系统上根目录的列表
    foreach(QFileInfo it, dir.drives()){
        ui->comboBox->addItem(it.absoluteFilePath());
    }

    // 打开指定目录
    QDir dir2("D:\\ajanuw");

    // 返回目录中所有文件和目录的QFileInfo对象的列表
    foreach(QFileInfo it, dir2.entryInfoList()){
        if(it.isDir())
         ui->listWidget->addItem("-> "+it.absoluteFilePath());
        if(it.isFile())
         ui->listWidget->addItem("- "+it.absoluteFilePath());
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

