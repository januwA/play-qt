#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 用编程的方式加载图片
    QPixmap pix("C:\\Users\\ajanuw\\Pictures\\gFXmSqETHQU7zdP.jpg");
    ui->label_pic->setPixmap(pix.scaled(100, 100, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password == "test") {
        QMessageBox::information(this, "登录", "登录成功");
        hide();
        homeDialog = new HomeDialog(this);
        homeDialog->setWindowTitle("Home");
        homeDialog->show();
        homeDialog->setWelcomeText("Hello "+ username);
    }else{
        QMessageBox::warning(this, "登录", "登录失败，账号或密码错误");
    }
}
