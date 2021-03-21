#include "downloader.h"

downloader::downloader(QObject *parent) : QObject(parent)
{

}

void downloader::Do_Download()
{
    http = new QHttpMultiPart(this);

    connect(http,SIGNAL(stateChanged(int)),this,SLOT(stateChanged(int)));
    connect(http,SIGNAL(responseHeaderReceived(QSHttpResponseHeader)),this,SLOT(responseHeader));
    connect(http,SIGNAL(requestFinished(int,bool)),this,SLOT(requestFinished));

//    http->setHost("voidrealms.com");
 //   http->get("/index.html");
}

void downloader::stateChanged(int state)
{
    switch (state)
    {
        case 0:
            qDebug() << "Unnconnected";
            break;
    case 1:
        qDebug() << "Host Lookup";
        break;
    case 2:
        qDebug() << "Connecting";
        break;
    case 3:
        qDebug() << "Sending";
        break;
    case 4:
        qDebug() << "Reading";
        break;
    case 5:
        qDebug() << "Connect";
        break;
    case 6:
        qDebug() << "Closing";
        break;
    }
}

/*void responseHeaderReceived(const QHttpResponseHeader &resp)
{
    qDebug() << "Size" << resp.contentLenght();
    qDebug() << "Type" << resp.contentType();
    qDebug() << "Status" << resp.statusCode();
}*/

void downloader::requestFinished(int id, bool error)
{
    if(error)
    {
        qDebug() << "ERROR!";
    }
    else
    {
        qDebug() << "OK!";

        QFile *file = new QFile("C:/test.txt");

        if(file->open(QFile::Append))
        {
           // file->write(http->readAll());
            file->flush();
            file->close();
        }
    }
}
