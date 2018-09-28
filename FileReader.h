#ifndef FILEREADER_H
#define FILEREADER_H
#include <QFile>
#include <QDebug>
#include "DataBaseInteractions.h"

class FileReader:public QObject
{
    Q_OBJECT

public:
    FileReader();
    ~FileReader();
     void readFile();
private:
     QString str;
     QStringList list;

     QString strevent;
     QStringList listevent;

     QString strspecialday;
     QStringList listspecialday;


     QString date;
     QString sunrise;
     QString sunset;
     QString ayana;
     QString rutu;
     QString masaniyamaka;
     QString masa;
     QString paksha;
     QString tithi;
     QString vasara;
     QString nakshatra;
     QString yoga;
     QString karana;
     QString tarpana;
     QString galige;

     QString eventdate;
     QString eventname;

     QString id;
     QString specialdaydate;
     QString specialdayname;
};

#endif
