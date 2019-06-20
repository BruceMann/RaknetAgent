include(protobuf_common.pri)

CONFIG(debug, debug|release) {
    win32 {
        LIBS    += -L$$PWD -lprotobufd
    }
    android {
        LIBS    += $$PWD/libprotobufd.a
    }
}

CONFIG(release, debug|release) {
    win32 {
        LIBS    += -L$$PWD -lprotobuf
    }
    android {
        LIBS    += $$PWD/libprotobuf.a
    }
}
