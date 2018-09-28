#ifndef TARPANAODEL_H
#define TARPANAODEL_H
#include <QAbstractListModel>
#include "TarpanaInfo.h"
class TarpanaOdel : public QAbstractListModel
{
public:
    TarpanaOdel();
    enum{DATE,NAME};

    void getTarpanaData(QString date, QString tarpana);
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
protected:
    QHash<int,QByteArray> roleNames() const override;
private:
    QList<TarpanaInfo> tarpanainfo;
};

#endif // TARPANAODEL_H
