#include <Qtcore/QCoreApplication>
#include <QDebug>
#include <QStringList>
#include <QVector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList List;
    List << "a" << "b" << "c";

    QVector<QString> Vect(3);

    qCopy(List.begin() + 1, List.end(),Vect.begin() + 1);

    foreach(QString itm, Vect)
    {
        qDebug() << itm;
    }

    return a.exec();
}
