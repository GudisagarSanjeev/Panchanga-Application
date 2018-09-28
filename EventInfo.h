#ifndef EVENTINFO_H
#define EVENTINFO_H

#include <QString>
class EventInfo
{
public:
    EventInfo();
    EventInfo(QString,QString);
    QString getEventdate() const;
    void setEventdate(const QString &value);

    QString getEventname() const;
    void setEventname(const QString &value);

private:
    QString eventdate;
    QString eventname;
};

#endif // EVENTINFO_H
