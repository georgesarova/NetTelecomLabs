#-------------------------------------------------
#
# Project created by QtCreator 2014-10-05T10:55:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TCP_GUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    senddialog.cpp \
    configuredialog.cpp

HEADERS  += mainwindow.h \
    senddialog.h \
    configuredialog.h

FORMS    += mainwindow.ui \
    senddialog.ui \
    configuredialog.ui
