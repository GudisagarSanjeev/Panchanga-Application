QT += quick sql core
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

RC_ICONS = calenderIcon.ico

OTHER_FILES +=\
$$PWD/Manifest/AndroidManifest.xml
ANDROID_PACKAGE_SOURCE_DIR=$$PWD/Manifest
 DESTDIR=../exeFile

TRANSLATIONS +=kn.ts hindi.ts telugu.ts tamil.ts
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
    DataBaseInteractions.cpp \
    EventInfo.cpp \
    EventModel.cpp \
    Galigeinfo.cpp \
    GaligeModel.cpp \
    MainModel.cpp \
    MainTableInfo.cpp \
    SpecialDayInfo.cpp \
    SpecialDayModel.cpp \
    TarpanaOdel.cpp \
    FileReader.cpp \
    TarpanaInfo.cpp \
    TranslationHandler.cpp

RESOURCES += qml.qrc \
    Images.qrc \
    ContentFiles.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    DataBaseInteractions.h \
    EventInfo.h \
    FileReader.h \
    Galigeinfo.h \
    GaligeModel.h \
    MainModel.h \
    MainTableInfo.h \
    SpecialDayInfo.h \
    SpecialDayModel.h \
    TarpanaOdel.h \
    TarpanaInfo.h \
    EventModel.h \
    TranslationHandler.h
