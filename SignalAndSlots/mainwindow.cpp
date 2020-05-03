#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 信号与插槽的连接
    // https://github.com/januwA/qt-code2ui/blob/master/qwdlgmanual.cpp#L67
    connect(
                ui->horizontalSlider, SIGNAL(valueChanged(int)), // 发送者
                ui->progressBar,    SLOT(setValue(int)) // 接收者
                );

    // 断开连接
    //    disconnect(
    //     ui->horizontalSlider, SIGNAL(valueChanged(int)), // 发送者
    //     ui->progressBar,    SLOT(setValue(int)) // 接收者
    //   );
}

MainWindow::~MainWindow()
{
    delete ui;
}

