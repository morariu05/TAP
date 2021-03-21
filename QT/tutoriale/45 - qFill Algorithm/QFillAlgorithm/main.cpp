#include <QtCore/QCoreApplication>
#include <QDebug>
#include <QVector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<QString> Vect(3);

    //qFill(Vect, "hello world");
    qFill(Vect.begin() + 1, Vect.end() - 1, "LOL");

    foreach(QString itm, Vect)
    {
        qDebug() << itm;
    }

    return a.exec();
}
