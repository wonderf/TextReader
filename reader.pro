#-------------------------------------------------
#
# Project created by QtCreator 2016-05-18T13:46:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = reader
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    openfiledialog.cpp \
    about.cpp

HEADERS  += mainwindow.h \
    openfiledialog.h \
    about.h

FORMS    += mainwindow.ui \
    openfiledialog.ui \
    about.ui
