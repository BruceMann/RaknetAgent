QT       -= gui

TARGET = protobuf
TEMPLATE = lib
CONFIG += staticlib
CONFIG += build_all

CONFIG(debug, debug|release) {
    TARGET = $${TARGET}d
}

contains(CONFIG, iphonesimulator) {
CONFIG -= iphonesimulator
CONFIG += iphoneos
}

DEFINES += COMPILE_PROTOBUF_LIB

include(protobuf_src.pri)

INCLUDEPATH += .
HEADERS += config.h
