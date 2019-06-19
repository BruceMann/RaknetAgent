include(protobuf_common.pri)

CONFIG(debug, debug|release) {
    win32 {
        LIBS    += -L$$PWD -llibprotobufd
    }
}


CONFIG(release, debug|release) {
    win32 {
        LIBS    += -L$$PWD -llibprotobuf
    }
}
