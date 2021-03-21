#ifndef MYTASK_H
#define MYTASK_H

#include <QRunnable>
#include <QDebug>
#include <QObject>

class MyTask : public QObject, public QRunnable
{
    Q_OBJECT
public:
    MyTask();

protected:
    void run();

signals:
    void Result(int Number);


};

#endif // MYTASK_H
