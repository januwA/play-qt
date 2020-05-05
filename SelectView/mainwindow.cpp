#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("1");
    ui->comboBox->addItem("2");
    for (int i = 0; i < 10; i++) {
       ui->comboBox->addItem(QString::number(i)+" Item");
    }
     ui->comboBox->insertItem(2, "3");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "title", ui->comboBox->currentText());
}
