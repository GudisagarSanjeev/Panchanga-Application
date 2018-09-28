#ifndef MAINMODEL_H
#define MAINMODEL_H
#include <QAbstractListModel>
#include "DataBaseInteractions.h"
#include "MainTableInfo.h"
#include <QDate>
#include <QObject>
class MainModel :public QAbstractListModel
{
    Q_OBJECT
public:
    MainModel();

    enum{DATE,SUNRISE,SUNSET,AYANA,RUTU,MASANIYAMAKA,MASA,PAKSHA,TITHI,VASARA,NAKSHATRA,YOGA,KARANA,TARPANA,GALIGE};

    void addData(QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString);
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;

    //Q_INVOKABLE void getGalege();

    Q_INVOKABLE void currentDate();
    Q_INVOKABLE void nextDate();
    Q_INVOKABLE void previousDate();
    Q_INVOKABLE void dateSelected(QString date);
protected:
    QHash<int,QByteArray> roleNames() const override;
private:
    QList<MainTableInfo> tableinfo;
    QDate date;

};

#endif // MAINMODEL_H
