#include "Galigeinfo.h"

Galigeinfo::Galigeinfo()
{

}
Galigeinfo::Galigeinfo(QString date,QString galige)
{
    setDate(date);
    setGalige(galige);
}

QString Galigeinfo::getDate() const
{
    return date;
}

void Galigeinfo::setDate(const QString &value)
{
    date = value;
}

QString Galigeinfo::getGalige() const
{
    return galige;
}

void Galigeinfo::setGalige(const QString &value)
{
    galige = value;
}
