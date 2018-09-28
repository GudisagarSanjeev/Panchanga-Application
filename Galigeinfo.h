#ifndef GALIGEINFO_H
#define GALIGEINFO_H
#include <QString>
class Galigeinfo
{
public:
    Galigeinfo();
    Galigeinfo(QString,QString);

    QString getDate() const;
    void setDate(const QString &value);

    QString getGalige() const;
    void setGalige(const QString &value);

private:
    QString date;
    QString galige;
};

#endif // GALIGEINFO_H
