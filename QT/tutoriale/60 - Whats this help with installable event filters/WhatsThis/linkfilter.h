#ifndef LINKFILTER_H
#define LINKFILTER_H

#include <QObject>
#include <QtCore>
#include <QtGui>

class LinkFilter : public QObject
{
    Q_OBJECT
public:
    explicit LinkFilter(QObject *parent = nullptr);

signals:
    void linkClicked(const QString&);

protected:
    bool eventFilter(QObject *, QEvent *);

};

#endif // LINKFILTER_H
