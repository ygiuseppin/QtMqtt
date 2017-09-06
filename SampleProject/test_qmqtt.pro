#-------------------------------------------------
#
# Project created by QtCreator 2017-09-01T10:12:17
#
#-------------------------------------------------

QT       += core gui network #mqtt

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test_qmqtt
TEMPLATE = app

INCLUDEPATH += $$PWD/qmqtt/build/include
INCLUDEPATH += $$PWD/qmqtt/build/include/qmqtt

DEFINES += QT_DEPRECATED_WARNINGS

LIBS += $$PWD/qmqtt/build/lib/libqmqtt.so

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    publisher.cpp \
    subscriber.cpp

HEADERS += \
        mainwindow.h \
    publisher.h \
    subscriber.h

FORMS += \
        mainwindow.ui
