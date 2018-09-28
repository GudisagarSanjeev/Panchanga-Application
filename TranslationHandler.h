#ifndef TRANSLATIONHANDLER_H
#define TRANSLATIONHANDLER_H

#include <QObject>
#include <QTranslator>
#include <QCoreApplication>
#include <QQmlEngine>
#include <QDebug>
#include <QQmlApplicationEngine>

class TranslationHandler : public QObject
{
    Q_OBJECT
public:
    TranslationHandler(QQmlApplicationEngine *);
    ~TranslationHandler();

signals:
    void languageChanged();

public slots:
    Q_INVOKABLE void selectLanguage(QString language);

private:
    QTranslator *translator;
    QQmlApplicationEngine *engine;
};

#endif
