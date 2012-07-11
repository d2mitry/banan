#-------------------------------------------------
#
# Project created by QtCreator 2012-07-10T02:19:25
#
#-------------------------------------------------

QT       += core gui
CONFIG += serialport

TARGET = banan
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    communiqthread.cpp

HEADERS  += mainwindow.h \
    communiqthread.h

FORMS    += mainwindow.ui

INCLUDEPATH += C:/qwt-6.0.1/include
LIBS += C:/qwt-6.0.1/lib/qwtd.lib
