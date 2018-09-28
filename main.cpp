#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QObject>
#include "DataBaseInteractions.h"
#include "FileReader.h"
#include "MainModel.h"
#include "SpecialDayModel.h"
#include "EventModel.h"
#include "GaligeModel.h"
#include "TarpanaOdel.h"
#include "TranslationHandler.h"


int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    //    QTranslator tr;
    //    tr.load(":/kn.qm");
    //    app.installTranslator(&tr);
    QQmlApplicationEngine engine;

    TranslationHandler handler(&engine);
    //    engine.retranslate();

    static DataBaseInteractions *d=NULL;
    d=DataBaseInteractions::databaseSingleton();

    QQmlContext *context=engine.rootContext();
    MainModel *model=new MainModel;
    SpecialDayModel *smodel=new SpecialDayModel;
    EventModel *emodel=new EventModel;
    GaligeModel *gmodel=new GaligeModel;
    TarpanaOdel *tmodel=new TarpanaOdel;

    FileReader reader;
    reader.readFile();


    QStringList info=d->getTableData(QDate::currentDate().toString("dd MMM yyyy"));
    model->addData(info.at(0),info.at(1),info.at(2),info.at(3),info.at(4),info.at(5),info.at(6),info.at(7),info.at(8),info.at(9),info.at(10),info.at(11),info.at(12),info.at(13),info.at(14));

    QList<QStringList> infoo=d->getSpecialEventList();
    for(int i=0;i<infoo.size();i++){
        smodel->addData(infoo.at(i).at(0),infoo.at(i).at(1),infoo.at(i).at(2));

    }

    QList<QStringList> ginfo=d->getGaligeData();
    for(int i=0;i<ginfo.size();i++){
        gmodel->getGaligeData(ginfo.at(i).at(0),ginfo.at(i).at(1));
    }

    QList<QStringList> tinfo=d->getTarpanaaData();
    qDebug()<<tinfo<<endl;
    for(int i=0;i<tinfo.size();i++){
        tmodel->getTarpanaData(tinfo.at(i).at(0),tinfo.at(i).at(1));
    }

    context->setContextProperty("modell",model);
    context->setContextProperty("smodell",smodel);
    context->setContextProperty("emodell",emodel);
    context->setContextProperty("gmodell",gmodel);
    context->setContextProperty("tmodell",tmodel);
    context->setContextProperty("translator",&handler);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
