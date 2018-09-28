#include "SpecialDayModel.h"
static DataBaseInteractions *database=NULL;
SpecialDayModel::SpecialDayModel()
{
    database=DataBaseInteractions::databaseSingleton();
}

void SpecialDayModel::addData(QString id,QString date, QString name)
{
    beginInsertRows(QModelIndex(), specialdayinfo.count(), specialdayinfo.count());
    specialdayinfo << SpecialDayInfo(id,date,name);
    endInsertRows();
}
void SpecialDayModel::getSpecialDays()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QList<QStringList> list=database->getSpecialEventList();

    for(int i=0;i<list.size();i++)
        addData(list.at(i).at(0),list.at(i).at(1),list.at(i).at(2));
}

int SpecialDayModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return specialdayinfo.count();
}

QVariant SpecialDayModel::data(const QModelIndex &index, int role) const
{
    if(index.row()<0 || index.row()>=specialdayinfo.count())
        return QVariant();

    const SpecialDayInfo &info=specialdayinfo[index.row()];
    if(role==ID)
        return info.getId();
    if(role==DATE)
        return info.getSpecialdaydate();
    else if(role==NAME)
        return info.getSpecialdayname();

    return QVariant();
}

QHash<int, QByteArray> SpecialDayModel::roleNames() const
{
    QHash<int ,QByteArray> roles;
    roles[ID]="id";
    roles[DATE]="date";
    roles[NAME]="name";
    return roles;
}
