#include "sockettest.h"

SocketTest::SocketTest(QObject *parent) : QObject(parent)
{
}

void SocketTest::Connect()
{
    socket = new QTcpSocket(this);

    //connected
    socket->connectToHost("google.com",80);

    if(socket->waitForConnected(3000))
    {
        qDebug() << "Connected!";

        //send data
        socket->write("Hello server\r\n\r\n\r\n");

        //got data
        socket->waitForBytesWritten(1000);
        socket->waitForReadyRead(3000);
        qDebug() << "Reading: " << socket->bytesAvailable();

        qDebug() << socket->readAll();

        //disconnect
        socket->close();
    }
    else
    {
        qDebug() << "Not Connected!";
    }

    //got data

}
