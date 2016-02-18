TEMPLATE        = lib
CONFIG         += plugin
QT             += widgets
INCLUDEPATH    += ../mainwindow
HEADERS         = myplugin.h
SOURCES         = myplugin.cpp
TARGET          = $$qtLibraryTarget(myplugin)
DESTDIR         = ../plugins

EXAMPLE_FILES = echoplugin.json

# install
target.path = /home/pabloz/Qt/Projects/QtPlugin/plugin
INSTALLS += target
