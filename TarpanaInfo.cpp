#include "TarpanaInfo.h"

TarpanaInfo::TarpanaInfo()
{

}

TarpanaInfo::TarpanaInfo(QString date,QString name)
{
    setDate(date);
    setName(name);
}
QString TarpanaInfo::getDate() const
{
    return date;
}

void TarpanaInfo::setDate(const QString &value)
{
    date = value;
}

QString TarpanaInfo::getName() const
{
    return name;
}

void TarpanaInfo::setName(const QString &value)
{
    name = value;
}
