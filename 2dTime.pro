#-------------------------------------------------
#
# Project created by QtCreator 2013-11-16T09:49:19
#
#-------------------------------------------------

QT       += core gui uitools

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 2dTime
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++0x

SOURCES += main.cpp\
        Graphics/interface.cpp \
    eventcontroller.cpp \
    fieldcell.cpp \
    fieldcellabstract.cpp \
    gamecontroller.cpp \
    TimeController/timecontrollertreenode.cpp \
    TimeController/timecontrollertree.cpp \
    field.cpp \
    TimeController/timecontroller.cpp \
    Graphics/grid.cpp \
    Graphics/graphicscell.cpp \
    Graphics/customview.cpp

HEADERS  += Graphics/interface.h \
    eventcontroller.h \
    fieldcell.h \
    fieldcellabstract.h \
    gamecontroller.h \
    TimeController/timecontrollertreenode.h \
    TimeController/timecontrollertree.h \
    field.h \
    TimeController/timecontroller.h \
    Graphics/grid.h \
    Graphics/graphicscell.h \
    Graphics/customview.h

FORMS    += Graphics/interface.ui \
    Graphics/mainwindow.ui
