#ifndef GALIGEMODEL_H
#define GALIGEMODEL_H
#include "Galigeinfo.h"

#include <QAbstractListModel>
class GaligeModel : public QAbstractListModel
{
public:
    GaligeModel();

    enum{DATE,GALIGE};

    void getGaligeData(QString,QString);
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
protected:
    QHash<int,QByteArray> roleNames() const override;
private:
    QList<Galigeinfo> galigeinfo;
};

#endif // GALIGEMODEL_H
