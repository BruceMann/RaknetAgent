win32{
        LIBS += -lws2_32
}

CONFIG(debug,debug|release){
	win32{
#                LIBS += -L$$PWD/raknet/libs -lRakNet_VS2008_LibStatic_Debug_x64    #vs2017 lib
                 LIBS += -L$$PWD/raknet/libs -lRakNetLibDebug
	}
}

CONFIG(release,debug|release){
	win32{
#                LIBS += -L$$PWD/raknet/libs -lRakNet_VS2008_LibStatic_Release_x64    #vs2017 lib
                 LIBS += -L$$PWD/raknet/libs -lRakNetLibRelease
	}
}

INCLUDEPATH += $$PWD/raknet/include/

HEADERS += $$files($$PWD/raknet/include/*.h, true) \
    $$PWD/netthread.h

SOURCES += \
    $$PWD/netthread.cpp
