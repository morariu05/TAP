#include "mythread.h"
#include <QtCore>

MyThread::MyThread(QObject *parent) :
    QThread(parent)
{
}


void MyThread::run()
{
    for(int i = 0; i < 1000; i++)
    {
        QMutex mutex;
        mutex.lock();

        if(this->Stop)
        {
            break;
        }

        mutex.unlock();

        emit NumberChanged(i); // emiterea semnalelor

        this->msleep(100);
    }
}
