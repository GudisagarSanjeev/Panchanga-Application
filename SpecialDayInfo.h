#ifndef SPECIALDAYINFO_H
#define SPECIALDAYINFO_H
#include <QString>

class SpecialDayInfo
{
public:
    SpecialDayInfo();
    SpecialDayInfo(QString,QString,QString);
    QString getSpecialdaydate() const;
    void setSpecialdaydate(const QString &value);

    QString getSpecialdayname() const;
    void setSpecialdayname(const QString &value);

    QString getId() const;
    void setId(const QString &value);

private:
    QString id;
    QString specialdaydate;
    QString specialdayname;
};

#endif // SPECIALDAYINFO_H
