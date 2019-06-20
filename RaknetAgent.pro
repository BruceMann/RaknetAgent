#-------------------------------------------------
#
# Project created by QtCreator 2019-06-13T15:27:58
#
#-------------------------------------------------

QT       += core network websockets

QT       -= gui

TARGET = RaknetAgent
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

include(messagecenter/messagecenter.pri)
#include(protobuf-3.7.1-pri/protobuf_lib.pri)  #qt 5.11.1
include(protobuf/protobuf_lib.pri)   #qt 5.4.0

SOURCES += main.cpp \
    udpserver.cpp \
    gloabldata.cpp

HEADERS += \
    udpserver.h \
    gloabldata.h
