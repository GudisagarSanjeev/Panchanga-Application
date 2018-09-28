#include "GaligeModel.h"

GaligeModel::GaligeModel()
{

}

void GaligeModel::getGaligeData(QString date, QString galige)
{
    beginInsertRows(QModelIndex(), galigeinfo.count(), galigeinfo.count());
    galigeinfo << Galigeinfo(date,galige);
    endInsertRows();
}

int GaligeModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return galigeinfo.count();
}

QVariant GaligeModel::data(const QModelIndex &index, int role) const
{
    if(index.row()<0 || index.row()>=galigeinfo.count())
        return QVariant();

    const Galigeinfo &info=galigeinfo[index.row()];
    if(role==DATE)
        return info.getDate();
    else if(role==GALIGE)
        return info.getGalige();

    return QVariant();
}

QHash<int, QByteArray> GaligeModel::roleNames() const
{
    QHash<int ,QByteArray> roles;
    roles[DATE]="date";
    roles[GALIGE]="galigename";
    return roles;
}
