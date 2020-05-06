#include "mythread.h"
#include <QtCore>

MyThread::MyThread(QObject *parent):QThread(parent)
{

}

void MyThread::run()
{
    for(int i = 0; i < 100; i++){
        QMutex mutex;
        mutex.lock();
        if(this->isStop) break;
        mutex.unlock();

        // 发出信号
        this->msleep(100);
        emit numberChange(i);
    }
}
