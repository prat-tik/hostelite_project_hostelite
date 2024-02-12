QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addingstd.cpp \
    db.cpp \
    main.cpp \
    mainwindow.cpp \
    menu_ui.cpp \
    myacc.cpp \
    rstus.cpp \
    stddet.cpp

HEADERS += \
    addingstd.h \
    db.h \
    mainwindow.h \
    menu_ui.h \
    myacc.h \
    rstus.h \
    stddet.h

FORMS += \
    addingstd.ui \
    db.ui \
    mainwindow.ui \
    menu_ui.ui \
    myacc.ui \
    rstus.ui \
    stddet.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    source.qrc
 QT += core

DISTFILES +=

