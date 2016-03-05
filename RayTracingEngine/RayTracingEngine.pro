#-------------------------------------------------
#
# Project created by QtCreator 2016-03-05T12:11:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RayTracingEngine
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++14

INCLUDEPATH = $$PWD/include

SOURCES += main.cpp\
        mainwindow.cpp\
    source/Utils/VectorF2D.cpp \
    source/Utils/VectorF3D.cpp

HEADERS  += mainwindow.h\
    include/Utils/VectorF2D.h \
    include/Utils/VectorF3D.h \
    include/Utils/VectorBase.h

FORMS    += mainwindow.ui
