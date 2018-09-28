#ifndef TARPANAINFO_H
#define TARPANAINFO_H
#include <QString>

class TarpanaInfo
{
public:
    TarpanaInfo();
    TarpanaInfo(QString,QString);
    QString getDate() const;
    void setDate(const QString &value);

    QString getName() const;
    void setName(const QString &value);

private:
    QString date;
    QString name;
};

#endif // TARPANAINFO_H
