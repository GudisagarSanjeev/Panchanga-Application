#ifndef DATABASEINTERACTIONS_H
#define DATABASEINTERACTIONS_H
#include<QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QList>
#include <QString>
#include <QDebug>
#include <QObject>

class DataBaseInteractions
{
    DataBaseInteractions();
public:
    static DataBaseInteractions* databaseSingleton();
    static DataBaseInteractions *databaseObject;

    void insertCalederDetails(QString date, QString sunrise, QString sunset, QString ayana, QString rutu, QString masaniyamaka, QString masa, QString paksha, QString tithi, QString vasara, QString nakshatra, QString yoga, QString karana, QString tarpana, QString galige);
    void insertSpecialDayDetails(QString id,QString date,QString name);
    void insertEventDetails(QString date,QString eventname);

public slots:
    QStringList getTableData(QString date);
    QList<QStringList> getGaligeData();
    QList<QStringList> getTarpanaaData();
    QStringList getEventData(QString date);
    QList<QStringList> getEventList(QString date);
    QList<QStringList> getSpecialEventList();

};

#endif // DATABASEINTERACTIONS_H
