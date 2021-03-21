#include <QCoreApplication>
#include <QDebug>
#include <QDir>
//QDir determina daca exista sau nu un director
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//1.  // QDir mDir("C:/Tehnici avansate de programare");
   //qDebug() << mDir.exists();

    QDir mDir("C:/Users/Ela/Desktop/an II/modul II/Tehnici avansate de programare/QT/tutoriale/11 - QDir");

/*2.
    foreach(QFileInfo mItm, mDir.drives())
    // it returns a list of QFileInfo objects containing "C:/", "D:/", ...,etc.
    // On other operating systems, it returns a list containing just one root directory "/"
    {
        qDebug() << mItm.absoluteFilePath();
    }*/

/*3.
    QString mPath = "C:/Tehnici avansate de programare/ZZZ";
    if(mDir.exists(mPath))
    {
       mDir.mkpath(mPath);
       qDebug() << "Created";
    }
    else
    {
        qDebug() << "Already exists";
    }*/

//4.
    foreach(QFileInfo mitm, mDir.entryInfoList())
    {
        if(mitm.isDir())
            qDebug() << "Dir:" << mitm.absoluteFilePath();
        if(mitm.isFile())
            qDebug() << "File:" << mitm.absoluteFilePath();
    }

    return a.exec();
}
