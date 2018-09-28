#include "TarpanaOdel.h"

TarpanaOdel::TarpanaOdel()
{

}

void TarpanaOdel::getTarpanaData(QString date, QString tarpana)
{
    beginInsertRows(QModelIndex(), tarpanainfo.count(), tarpanainfo.count());
    tarpanainfo << TarpanaInfo(date,tarpana);
    endInsertRows();
}

int TarpanaOdel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return tarpanainfo.count();
}

QVariant TarpanaOdel::data(const QModelIndex &index, int role) const
{
    if(index.row()<0 || index.row()>=tarpanainfo.count())
        return QVariant();

    const TarpanaInfo &info=tarpanainfo[index.row()];
    if(role==DATE)
        return info.getDate();
    else if(role==NAME)
        return info.getName();

    return QVariant();
}

QHash<int, QByteArray> TarpanaOdel::roleNames() const
{
    QHash<int ,QByteArray> roles;
    roles[DATE]="date";
    roles[NAME]="name";
    return roles;
}
