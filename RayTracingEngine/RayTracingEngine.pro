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
    source/Utils/vectorf2d.cpp \
    source/Utils/vectorf3d.cpp

HEADERS  += mainwindow.h\
    include/Core/orthographiccamera.h \
    include/Core/camera.h \
    include/Core/ray.h \
    include/Utils/vectorbase.h \
    include/Utils/vectorf2d.h \
    include/Utils/vectorf3d.h

FORMS    += mainwindow.ui
