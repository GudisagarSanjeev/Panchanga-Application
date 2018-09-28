#ifndef MAINTABLEINFO_H
#define MAINTABLEINFO_H
#include <QString>

class MainTableInfo
{
public:
    MainTableInfo();
    MainTableInfo(QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString);

    QString getDate() const;
    void setDate(const QString &value);

    QString getSunrise() const;
    void setSunrise(const QString &value);

    QString getSunset() const;
    void setSunset(const QString &value);

    QString getAyana() const;
    void setAyana(const QString &value);

    QString getRutu() const;
    void setRutu(const QString &value);

    QString getMasaniyamaka() const;
    void setMasaniyamaka(const QString &value);

    QString getMasa() const;
    void setMasa(const QString &value);

    QString getPaksha() const;
    void setPaksha(const QString &value);

    QString getTithi() const;
    void setTithi(const QString &value);

    QString getVasara() const;
    void setVasara(const QString &value);

    QString getNakshatra() const;
    void setNakshatra(const QString &value);

    QString getYoga() const;
    void setYoga(const QString &value);

    QString getKarana() const;
    void setKarana(const QString &value);

    QString getTarpana() const;
    void setTarpana(const QString &value);

    QString getGalige() const;
    void setGalige(const QString &value);

private:
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
};

#endif // MAINTABLEINFO_H
