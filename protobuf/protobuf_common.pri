PathProtobuf = $$PWD/src/google/protobuf
INCLUDEPATH += $$PWD/src
INCLUDEPATH += $$PWD/out
INCLUDEPATH += $$PWD/func

!win32 {
    DEFINES += HAVE_PTHREAD
}

SOURCES += $$files($$PWD/out/*.cc, true)
HEADERS += $$files($$PWD/out/*.h, true)

#SOURCES += $$PWD/func/ProtobufTrans.cpp
#HEADERS += $$PWD/func/ProtobufTrans.h

OTHER_FILES += $$files($$PWD/proto/*.proto, true)
