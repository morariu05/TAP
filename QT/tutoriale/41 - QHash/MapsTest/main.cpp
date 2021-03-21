#include <QCoreApplication>
#include <QHash>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QHash<int,QString> Employees;

    Employees.insert(1, "Bob");
    Employees.insert(2, "Chad");

    qDebug() << "1 = " << Employees.values(1);
    qDebug() << "2 = " << Employees.values(2);

    return a.exec();
}
