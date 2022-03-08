TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle


SOURCES += \
        main.cpp


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../VeriKatmani/release/ -lVeriKatmani
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../VeriKatmani/debug/ -lVeriKatmani
else:unix: LIBS += -L$$OUT_PWD/../VeriKatmani/ -lVeriKatmani

INCLUDEPATH += $$PWD/../VeriKatmani
DEPENDPATH += $$PWD/../VeriKatmani
