#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void Write(QString Filename)
{
    QFile mFile(Filename); // obiectul QFile cu referinta catre Filename

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
        //daca nu putem deschide fisierul pentru Write ...
    {
        qDebug() << "could not open file or writing";
        return;
    }

    QTextStream out(&mFile);
    out << "Hello World!";

    mFile.flush();
    mFile.close();
}

void Read(QString Filename)
{
    QFile mFile(Filename);

    if(!mFile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "could not open file or reading";
        return;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();

    qDebug() << mText;

    mFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mFilename = "C:/Users/Ela/Desktop/an II/modul II/Tehnici avansate de programare/QT/tutoriale/12 - QFile/myfile.txt";

    Write(mFilename);
    Read(mFilename);

    return a.exec();
}
