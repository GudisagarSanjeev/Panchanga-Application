#ifndef SPECIALDAYMODEL_H
#define SPECIALDAYMODEL_H
#include <QAbstractListModel>
#include "SpecialDayInfo.h"
#include <QDebug>
#include "DataBaseInteractions.h"

class SpecialDayModel : public QAbstractListModel
{
public:
    SpecialDayModel();

    enum{ID,DATE,NAME};

    Q_INVOKABLE void getSpecialDays();
    Q_INVOKABLE void addData(QString id,QString date,QString name);
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
protected:
    QHash<int,QByteArray> roleNames() const override;
private:
    QList<SpecialDayInfo> specialdayinfo;
};

#endif // SPECIALDAYMODEL_H
