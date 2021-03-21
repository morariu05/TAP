#include <QtCore/QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;
    List << 1 << 5 << 15 << 23;

    QList<int>::const_iterator Iter = qFind(List.begin(),List.end(), 15 ); // 15-elem. cautat

    if(Iter != List.end())
    {
        qDebug() << "Found: " << *Iter;
    }
    else
    {
        qDebug() << "Not Found!";
    }

    return a.exec();
}
