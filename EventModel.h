#ifndef EVENTMODEL_H
#define EVENTMODEL_H
#include <QAbstractListModel>
#include "DataBaseInteractions.h"
#include "EventInfo.h"
#include <QDebug>
#include <QObject>
#include <QDate>
class EventModel : public QAbstractListModel
{
    Q_OBJECT
public:
    EventModel();

    enum{DATE,EVENTNAME};

    void getEventData(QString date, QString event);
    Q_INVOKABLE void addEventData(QString date, QString event);
    Q_INVOKABLE void viewData(QString);
    Q_INVOKABLE void viewData1(QString);
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;

protected:
    QHash<int,QByteArray> roleNames() const override;
private:
    QList<EventInfo> eventinfo;
};

#endif // EVENTMODEL_H
