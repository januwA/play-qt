#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mythread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    MyThread *myThread;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void numberChange(int); // 接收子线程的emit

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
