QT += widgets

HEADERS    = mainwindow.h \
             myplugininterface.h

SOURCES    = mainwindow.cpp \
             main.cpp

TARGET     = myplugin
QMAKE_PROJECT_NAME = mainwindow
win32 {
    CONFIG(debug, release|debug):DESTDIR = ../debug/
    CONFIG(release, release|debug):DESTDIR = ../release/
} else {
    DESTDIR    = ../
}

# install
target.path = /home/pabloz/Qt/Projects/QtPlugin
INSTALLS += target
