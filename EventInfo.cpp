#include "EventInfo.h"

EventInfo::EventInfo()
{

}
EventInfo::EventInfo(QString eventdate, QString eventname)
{
    setEventdate(eventdate);
    setEventname(eventname);
}

QString EventInfo::getEventdate() const
{
    return eventdate;
}

void EventInfo::setEventdate(const QString &value)
{
    eventdate = value;
}

QString EventInfo::getEventname() const
{
    return eventname;
}

void EventInfo::setEventname(const QString &value)
{
    eventname = value;
}
