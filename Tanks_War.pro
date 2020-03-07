QT += widgets gui multimedia

SOURCES += \
    main.cpp \
    TankClient.cpp \
    Bullet.cpp \
    Tank.cpp \
    Explode.cpp \
    Wall.cpp \
    Map.cpp \
    setMaps.cpp \
    Prop.cpp

HEADERS += \
    TankClient.h \
    Bullet.h \
    Tank.h \
    Explode.h \
    Wall.h \
    pub.h \
    Map.h \
    Prop.h

RESOURCES += \
    tank.qrc

DISTFILES += \
    tank.rc
