QT += gui
QT += widgets

INCLUDEPATH += $$PWD/ \
            $$PWD/singleApplication/

DEPENDPATH += $$PWD

HEADERS += $$PWD/coreappsetting.h \
    $$PWD/appsetting.h \
    $$PWD/singleApplication/qsingleapplication.h

SOURCES += $$PWD/coreappsetting.cpp \
    $$PWD/appsetting.cpp \
    $$PWD/singleApplication/qsingleapplication.cpp

