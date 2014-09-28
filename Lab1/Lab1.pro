#-------------------------------------------------
#
# Project created by QtCreator 2014-09-17T22:55:16
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Lab1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sendtransaction.cpp \
    message.cpp

HEADERS  += mainwindow.h \
    sendtransaction.h \
    message.h \
    helpers.h
