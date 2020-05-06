#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT
public:
    MyThread(QObject *parent = nullptr);
    void run() override;
    bool isStop;

signals:
    void numberChange(int);

public slots:

};

#endif // MYTHREAD_H
