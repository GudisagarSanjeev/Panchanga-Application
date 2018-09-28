#include "MainTableInfo.h"

MainTableInfo::MainTableInfo()
{

}

MainTableInfo::MainTableInfo(QString date, QString sunrise, QString sunset, QString ayana, QString rutu, QString masaniyamaka, QString masa, QString paksha, QString tithi, QString vasara, QString nakshatra, QString yoga, QString karana, QString tarpana, QString galige)
{
    setDate(date);
    setSunrise(sunrise);
    setSunset(sunset);
    setAyana(ayana);
    setRutu(rutu);
    setMasaniyamaka(masaniyamaka);
    setMasa(masa);
    setPaksha(paksha);
    setTithi(tithi);
    setVasara(vasara);
    setNakshatra(nakshatra);
    setYoga(yoga);
    setKarana(karana);
    setTarpana(tarpana);
    setGalige(galige);
}

QString MainTableInfo::getDate() const
{
    return date;
}

void MainTableInfo::setDate(const QString &value)
{
    date = value;
}

QString MainTableInfo::getSunrise() const
{
    return sunrise;
}

void MainTableInfo::setSunrise(const QString &value)
{
    sunrise = value;
}

QString MainTableInfo::getSunset() const
{
    return sunset;
}

void MainTableInfo::setSunset(const QString &value)
{
    sunset = value;
}

QString MainTableInfo::getAyana() const
{
    return ayana;
}

void MainTableInfo::setAyana(const QString &value)
{
    ayana = value;
}

QString MainTableInfo::getRutu() const
{
    return rutu;
}

void MainTableInfo::setRutu(const QString &value)
{
    rutu = value;
}

QString MainTableInfo::getMasaniyamaka() const
{
    return masaniyamaka;
}

void MainTableInfo::setMasaniyamaka(const QString &value)
{
    masaniyamaka = value;
}

QString MainTableInfo::getMasa() const
{
    return masa;
}

void MainTableInfo::setMasa(const QString &value)
{
    masa = value;
}

QString MainTableInfo::getPaksha() const
{
    return paksha;
}

void MainTableInfo::setPaksha(const QString &value)
{
    paksha = value;
}

QString MainTableInfo::getTithi() const
{
    return tithi;
}

void MainTableInfo::setTithi(const QString &value)
{
    tithi = value;
}

QString MainTableInfo::getVasara() const
{
    return vasara;
}

void MainTableInfo::setVasara(const QString &value)
{
    vasara = value;
}

QString MainTableInfo::getNakshatra() const
{
    return nakshatra;
}

void MainTableInfo::setNakshatra(const QString &value)
{
    nakshatra = value;
}

QString MainTableInfo::getYoga() const
{
    return yoga;
}

void MainTableInfo::setYoga(const QString &value)
{
    yoga = value;
}

QString MainTableInfo::getKarana() const
{
    return karana;
}

void MainTableInfo::setKarana(const QString &value)
{
    karana = value;
}

QString MainTableInfo::getTarpana() const
{
    return tarpana;
}

void MainTableInfo::setTarpana(const QString &value)
{
    tarpana = value;
}

QString MainTableInfo::getGalige() const
{
    return galige;
}

void MainTableInfo::setGalige(const QString &value)
{
    galige = value;
}
