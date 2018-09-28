#include "SpecialDayInfo.h"

SpecialDayInfo::SpecialDayInfo()
{

}

SpecialDayInfo::SpecialDayInfo(QString id,QString specialdaydate, QString specialdayname)
{
    setId(id);
    setSpecialdaydate(specialdaydate);
    setSpecialdayname(specialdayname);
}

QString SpecialDayInfo::getSpecialdaydate() const
{
    return specialdaydate;
}

void SpecialDayInfo::setSpecialdaydate(const QString &value)
{
    specialdaydate = value;
}

QString SpecialDayInfo::getSpecialdayname() const
{
    return specialdayname;
}

void SpecialDayInfo::setSpecialdayname(const QString &value)
{
    specialdayname = value;
}

QString SpecialDayInfo::getId() const
{
    return id;
}

void SpecialDayInfo::setId(const QString &value)
{
    id = value;
}
