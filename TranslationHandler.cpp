#include "TranslationHandler.h"

TranslationHandler::TranslationHandler(QQmlApplicationEngine *engines)
{
    translator = new QTranslator;
    engine = engines;
}

TranslationHandler::~TranslationHandler()
{

}

void TranslationHandler::selectLanguage(QString language) {

    if(language == "kn") {
        translator->load(":/kn.qm");
        QCoreApplication::instance()->installTranslator(translator);
        engine->retranslate();
    }
    else if(language == "eng") {
        translator->load("");
        QCoreApplication::instance()->installTranslator(translator);
        engine->retranslate();
    }
    else if(language == "hindi") {
        translator->load(":/hindi.qm");
        QCoreApplication::instance()->installTranslator(translator);
        engine->retranslate();
    }
    else if(language == "telugu") {
        translator->load(":/telugu.qm");
        QCoreApplication::instance()->installTranslator(translator);
        engine->retranslate();
    }
    else if(language == "tamil") {
        translator->load(":/tamil.qm");
        QCoreApplication::instance()->installTranslator(translator);
        engine->retranslate();
    }
}
