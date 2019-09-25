#-------------------------------------------------
#
# Project created by QtCreator 2016-10-20T10:18:24
#
#-------------------------------------------------

QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testtool
TEMPLATE = app

RCC_DIR += ./tmp
MOC_DIR += ./tmp
UI_DIR  += ./tmp
OBJECTS_DIR += ./tmp

SOURCES += main.cpp\
        mainwindow.cpp \
    mainwidget.cpp \
    mapwidget.cpp \
    userdefinelabel.cpp



HEADERS  += mainwindow.h \
    mainwidget.h \
    mapwidget.h \
    userdefinelabel.h

  
RESOURCES += \
    ./img/terminalmanagetool.qrc

INCLUDEPATH+= ./img/

include(./base/base.pri)
include(./pubgui/pubgui.pri)
include(./platformvars/platformvars.pri)


