#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // 创建主程序
    MainWindow w; // 创建视图
    w.show();
    w.setWindowTitle("My First GUI");
    return a.exec();
}
