#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QObject>
#include <QHttp2Configuration>
#include <QHttpMultiPart>
#include <QHttpPart>
#include <QtNetwork>
#include <QFile>
#include <QDebug>

class downloader : public QObject
{
    Q_OBJECT
public:
    explicit downloader(QObject *parent = nullptr);

    void Do_Download();
signals:

public slots:

public slots:
    void stateChanged(int state);
    //void responseHeaderReceived(const QHttpResponseHeader &resp);
    void requestFinished(int id, bool error);
private:
    QHttpMultiPart *http;


};

#endif // DOWNLOADER_H
