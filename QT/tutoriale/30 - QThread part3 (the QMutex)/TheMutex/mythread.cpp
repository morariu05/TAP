#include "mythread.h"
#include <QtCore>
#include <QDebug>

MyThread::MyThread()
{

}

void MyThread::run()
{
    //ran
    qDebug() << this->name << " Running";

    for(int i = 0; i < 1000; i++)
    {
        QMutex mutex; // creare mutex
        mutex.lock(); // locking this thread
        if(this->Stop) // just this thread could be modified or read
        {
            break;
        }
        mutex.unlock(); // unlock
        this->sleep(100);
        qDebug() << this->name << i;
    }
}
