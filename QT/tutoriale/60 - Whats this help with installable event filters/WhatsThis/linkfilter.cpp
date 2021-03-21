#include "linkfilter.h"

LinkFilter::LinkFilter(QObject *parent) : QObject(parent)
{
}

bool LinkFilter::eventFilter(QObject *, QEvent *event)
{


    if(event->type() == QEvent::WhatsThisClicked)
    {
        QWhatsThisClickedEvent *wtcEvent = static_cast<QWhatsThisClickedEvent*>(event);
        emit linkClicked(wtcEvent->href());
        return true;
    }
    return false;
}
