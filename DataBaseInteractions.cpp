#include "DataBaseInteractions.h"
DataBaseInteractions *DataBaseInteractions::databaseObject=NULL;
DataBaseInteractions::DataBaseInteractions()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QSqlDatabase database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("UmCalendaerDB.db");
    database.open();
    QSqlQuery query;
    query.exec("Create table if not exists MainTable(Date varchar(10) primary key,Sunrise varchar(10),Sunset varchar(10),Ayana varchar(30),Rutu varchar(30),Masa_Niyamaka varchar(30),Masa varchar(30),Paksha varchar(30),Thithi varchar(30),Vasara varchar(30),Nakshatra varchar(30),Yoga varchar(30),Karana varchar(30),Tarpana varchar(30),Galige varchar(10))");
    query.exec("Create table if not exists SpecialDay(Id varchar(10) primary key,DateS varchar(10),Name varchar(40))");
    query.exec("Create table if not exists Event(DateE varchar(10) ,EventName varchar(40))");
    qDebug()<<query.lastError()<<endl;
}

DataBaseInteractions *DataBaseInteractions::databaseSingleton()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    if(databaseObject==NULL){
        databaseObject=new DataBaseInteractions;
    }else{
        return databaseObject;
    }
    return 0;
}

void DataBaseInteractions::insertCalederDetails(QString date, QString sunrise, QString sunset, QString ayana, QString rutu, QString masaniyamaka, QString masa, QString paksha, QString tithi, QString vasara, QString nakshatra, QString yoga,QString karana,QString tarpana,QString galige)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    qDebug()<<date<<sunrise<<endl;
    QSqlQuery query;

    query.prepare("insert into MainTable values (:a, :b, :c,:d,:e,:f,:g,:h,:i,:j,:k,:l,:m,:n,:o)");
    query.bindValue(":a",date);
    query.bindValue(":b",sunrise);
    query.bindValue(":c",sunset);
    query.bindValue(":d",ayana);
    query.bindValue(":e",rutu);
    query.bindValue(":f",masaniyamaka);
    query.bindValue(":g",masa);
    query.bindValue(":h",paksha);
    query.bindValue(":i",tithi);
    query.bindValue(":j",vasara);
    query.bindValue(":k",nakshatra);
    query.bindValue(":l",yoga);
    query.bindValue(":m",karana);
    query.bindValue(":n",tarpana);
    query.bindValue(":o",galige);

    qDebug()<<query.lastError()<<endl;

    query.exec();
}

void DataBaseInteractions::insertSpecialDayDetails(QString id,QString date, QString name)
{
    qDebug()<<Q_FUNC_INFO<<endl;

    QSqlQuery query;
    query.prepare("insert into SpecialDay values (:a, :b,:c)");
    query.bindValue(":a",id);
    query.bindValue(":b",date);
    query.bindValue(":c",name);

    query.exec();
    qDebug()<<query.lastError()<<endl;
}

void DataBaseInteractions::insertEventDetails(QString date, QString eventname)
{
    qDebug()<<Q_FUNC_INFO<<endl;

    QSqlQuery query;
    query.prepare("insert into Event values (:a, :b)");
    query.bindValue(":a",date);
    query.bindValue(":b",eventname);

    query.exec();
    qDebug()<<query.lastError()<<endl;
}

QStringList DataBaseInteractions::getTableData(QString date)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QSqlQuery qry;
    QStringList result;
    qry.prepare("Select * from MainTable where Date=:a");
    qry.bindValue(":a",date);
    qry.exec();


    while(qry.next()){

        QStringList list;
        for(int i=0;i<15;i++){
            list.append(qry.value(i).toString());
        }
        result.append(list);
    }
    qDebug()<<result<<endl;
    return result;
}

QList<QStringList> DataBaseInteractions::getGaligeData()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QSqlQuery qry;
    QList<QStringList> result;
    qry.prepare("Select Date,Galige from MainTable");
    qry.exec();


    while(qry.next()){

        QStringList list;
        for(int i=0;i<=1;i++){
            list.append(qry.value(i).toString());
        }
        result.append(list);
    }
    return result;
}

QList<QStringList> DataBaseInteractions::getTarpanaaData()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QSqlQuery qry;
    QList<QStringList> result;
    qry.prepare("Select Date,Tarpana from MainTable");
    qry.exec();


    while(qry.next()){

        QStringList list;
        for(int i=0;i<=1;i++){
            list.append(qry.value(i).toString());
        }
        result.append(list);
    }
    return result;
}

QStringList DataBaseInteractions::getEventData(QString date)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QSqlQuery qry;
    QStringList result;
    qry.prepare("Select * from MainTable where Date=:a");
    qry.bindValue(":a",date);
    qry.exec();


    while(qry.next()){

        QStringList list;
        for(int i=0;i<15;i++){
            list.append(qry.value(i).toString());
        }
        result.append(list);
    }
    return result;
}

QList<QStringList> DataBaseInteractions::getEventList(QString date)
{
    qDebug()<<Q_FUNC_INFO<<endl;

    QSqlQuery qry;
    QList<QStringList> result;
    qry.prepare("Select * from Event where DateE=:a");
    qry.bindValue(":a",date);
    qry.exec();

    while(qry.next()){
        QStringList list;

        for(int i=0;i<2;i++){
            list.append(qry.value(i).toString());
        }
        result.append(list);
    }
    return result;
}

QList<QStringList> DataBaseInteractions::getSpecialEventList()
{
    qDebug()<<Q_FUNC_INFO<<endl;

    QSqlQuery qry;
    QList<QStringList> result;
    qry.prepare("Select * from SpecialDay order by DateS");
    qry.exec();


    while(qry.next()){

        QStringList list;

        for(int i=0;i<3;i++){
            list.append(qry.value(i).toString());
        }
        result.append(list);

    }
    return result;

}
