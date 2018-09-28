#include "MainModel.h"
static DataBaseInteractions *database=NULL;
MainModel::MainModel()
{
    database=DataBaseInteractions::databaseSingleton();
    date=(QDate::currentDate());
}

void MainModel::addData(QString date, QString sunrise, QString sunset, QString ayana, QString rutu, QString masaniyamaka, QString masa, QString paksha, QString tithi, QString vasara, QString nakshatra, QString yoga, QString karana, QString tarpana, QString galige)
{
    beginInsertRows(QModelIndex(), tableinfo.count(), tableinfo.count());
    tableinfo << MainTableInfo(date, sunrise,sunset,ayana,rutu,masaniyamaka,masa,paksha,tithi,vasara,nakshatra,yoga,karana,tarpana,galige);
    endInsertRows();
}


int MainModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return tableinfo.count();
}

QVariant MainModel::data(const QModelIndex &index, int role) const
{
    if(index.row()<0 || index.row()>=tableinfo.count())
        return QVariant();

    const MainTableInfo &info=tableinfo[index.row()];
    if(role==DATE)
        return info.getDate();
    else if(role==SUNRISE)
        return info.getSunrise();
    else if(role==SUNSET)
        return info.getSunset();
    else if(role==AYANA)
        return info.getAyana();
    else if(role==RUTU)
        return info.getRutu();
    else if(role==MASANIYAMAKA)
        return info.getMasaniyamaka();
    else if(role==MASA)
        return info.getMasa();
    else if(role==PAKSHA)
        return info.getPaksha();
    else if(role==TITHI)
        return info.getTithi();
    else if(role==VASARA)
        return info.getVasara();
    else if(role==NAKSHATRA)
        return info.getNakshatra();
    else if(role==YOGA)
        return info.getYoga();
    else if(role==KARANA)
        return info.getKarana();
    else if(role==TARPANA)
        return info.getTarpana();
    else if(role==GALIGE)
        return info.getGalige();

    return QVariant();
}

//void MainModel::getGalege()
//{
//    qDebug()<<Q_FUNC_INFO<<endl;
//    QList<QStringList> list=database->getSpecialEventList();

//    QStringList list=database->getTableData(s);
//    for(int i=0;i<list.size();i++)
//        addData(list.at(0),list.at(1),list.at(2),list.at(3),list.at(4),list.at(5),list.at(6),list.at(7),list.at(8),list.at(9),list.at(10),list.at(11),list.at(12),list.at(13),list.at(14));
//}

void MainModel::currentDate()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    tableinfo.clear();
    date=QDate::currentDate();
    QString s=date.toString("dd MMM yyyy");
    qDebug()<<s<<endl;
    QStringList list=database->getTableData(s);
    this->beginResetModel();
    this->addData(list.at(0),list.at(1),list.at(2),list.at(3),list.at(4),list.at(5),list.at(6),list.at(7),list.at(8),list.at(9),list.at(10),list.at(11),list.at(12),list.at(13),list.at(14));
    this->endResetModel();
}

void MainModel::nextDate()
{

    if(date.toString("dd/MM/yyyy").compare("04/04/2019")==0){
        qDebug()<<"Maximun date limit reached"<<endl;
    }else{
        tableinfo.clear();
        QDate d=date.addDays(1);
        date=d;
        QString s=date.toString("dd MMM yyyy");
        QStringList list=database->getTableData(s);
        this->beginResetModel();
        addData(list.at(0),list.at(1),list.at(2),list.at(3),list.at(4),list.at(5),list.at(6),list.at(7),list.at(8),list.at(9),list.at(10),list.at(11),list.at(12),list.at(13),list.at(14));
        this->endResetModel();

    }
}

void MainModel::previousDate()
{

    if(date.toString("dd/MM/yyyy").compare("20/08/2018")==0){
        qDebug()<<"Manimun date limit reached"<<endl;
    }else{
        tableinfo.clear();
        QDate d=date.addDays(-1);
        date=d;
        QString s=date.toString("dd MMM yyyy");
        QStringList list=database->getTableData(s);
        this->beginResetModel();
        addData(list.at(0),list.at(1),list.at(2),list.at(3),list.at(4),list.at(5),list.at(6),list.at(7),list.at(8),list.at(9),list.at(10),list.at(11),list.at(12),list.at(13),list.at(14));
        this->endResetModel();
    }
}

void MainModel::dateSelected(QString date)
{
    tableinfo.clear();
    QStringList list=database->getTableData(date);
    this->beginResetModel();
    addData(list.at(0),list.at(1),list.at(2),list.at(3),list.at(4),list.at(5),list.at(6),list.at(7),list.at(8),list.at(9),list.at(10),list.at(11),list.at(12),list.at(13),list.at(14));
    this->endResetModel();
}

QHash<int, QByteArray> MainModel::roleNames() const
{
    QHash<int ,QByteArray> roles;
    roles[DATE]="date";
    roles[SUNRISE]="sunrise";
    roles[SUNSET]="sunset";
    roles[AYANA]="ayana";
    roles[RUTU]="rutu";
    roles[MASANIYAMAKA]="masan";
    roles[MASA]="masa";
    roles[PAKSHA]="paksha";
    roles[TITHI]="tithi";
    roles[VASARA]="vasara";
    roles[NAKSHATRA]="nakshatra";
    roles[YOGA]="yoga";
    roles[KARANA]="karana";
    roles[TARPANA]="tarpana";
    roles[GALIGE]="galige";

    return roles;
}
