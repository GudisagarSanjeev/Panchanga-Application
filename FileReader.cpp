#include "FileReader.h"
static DataBaseInteractions  *database=NULL;

FileReader::FileReader()
{
    database=DataBaseInteractions::databaseSingleton();
}

FileReader::~FileReader()
{
    delete database;
}

void FileReader::readFile()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QFile file(":/ContentFile/Panchanga.txt");
    QFile specialdayfile(":/ContentFile/Festivals.txt");

    if(!file.open(QIODevice::ReadOnly)) {
        //QMessageBox::information(0, "error", file.errorString());
    }
    if(!specialdayfile.open(QIODevice::ReadOnly)) {
//        QMessageBox::information(0, "error", specialdayfile.errorString());
    }

    QTextStream in(&file);
    QTextStream inspecialday(&specialdayfile);

    while(!in.atEnd()) {
        str = in.readLine();
        list = str.split(",");
        date=list.at(0);
        sunrise=list.at(1);
        sunset=list.at(2);
        ayana=list.at(3);
        rutu=list.at(4);
        masaniyamaka=list.at(5);
        masa=list.at(6);
        paksha=list.at(7);
        tithi=list.at(8);
        vasara=list.at(9);
        nakshatra=list.at(10);
        yoga=list.at(11);
        karana=list.at(12);
        tarpana=list.at(13);
        galige=list.at(14);

        database->insertCalederDetails(date,sunrise,sunset,ayana,rutu,masaniyamaka,masa,paksha,tithi,vasara,nakshatra,yoga,karana,tarpana,galige);
    }

    while(!inspecialday.atEnd()) {
        strspecialday = inspecialday.readLine();
        listspecialday = strspecialday.split(",");

        id=listspecialday.at(0);
        specialdaydate=listspecialday.at(1);
        specialdayname=listspecialday.at(2);

        database->insertSpecialDayDetails(id,specialdaydate,specialdayname);
    }

    file.close();
    specialdayfile.close();
}

