TEMPLATE        = lib
CONFIG         += plugin
QT             += widgets
INCLUDEPATH    += ../mainwindow
HEADERS         = myplugin.h
SOURCES         = myplugin.cpp
TARGET          = $$qtLibraryTarget(myplugin)
DESTDIR         = ../plugins

EXAMPLE_FILES = myplugin.json

# install
target.path = D:\Qt\Projects\QtPlugin
INSTALLS += target
