PathProtobuf = $$PWD/src/google/protobuf
INCLUDEPATH += $$PWD/src
INCLUDEPATH += $$PWD/out
INCLUDEPATH += $$PWD/func

SOURCES += $$files($$PWD/out/*.cc, true)
HEADERS += $$files($$PWD/out/*.h, true)

OTHER_FILES += $$files($$PWD/proto/*.proto, true)
