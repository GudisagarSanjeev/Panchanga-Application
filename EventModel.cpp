#include "EventModel.h"
static DataBaseInteractions *database=NULL;
EventModel::EventModel()
{
    database=DataBaseInteractions::databaseSingleton();
}

void EventModel::getEventData(QString date, QString event)
{
    beginInsertRows(QModelIndex(), eventinfo.count(), eventinfo.count());
    eventinfo << EventInfo(date,event);
    endInsertRows();
}

int EventModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return eventinfo.count();
}

QVariant EventModel::data(const QModelIndex &index, int role) const
{
    if(index.row()<0 || index.row()>=eventinfo.count())
        return QVariant();

    const EventInfo &info=eventinfo[index.row()];
    if(role==DATE)
        return info.getEventdate();
    else if(role==EVENTNAME)
        return info.getEventname();

    return QVariant();
}

void EventModel::addEventData(QString date, QString event)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    database->insertEventDetails(date,event);
}

void EventModel::viewData(QString date)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    eventinfo.clear();
    this->beginResetModel();
    QList<QStringList> lis=database->getEventList(date);
    qDebug()<<lis<<endl;
    for(int i=0;i<lis.size();i++){
        getEventData(lis.at(i).at(0),lis.at(i).at(1));
    }
    this->endResetModel();
}

void EventModel::viewData1(QString)
{
    qDebug()<<Q_FUNC_INFO<<endl;
}

QHash<int, QByteArray> EventModel::roleNames() const
{
    QHash<int ,QByteArray> roles;
    roles[DATE]="date";
    roles[EVENTNAME]="eventname";
    return roles;
}
