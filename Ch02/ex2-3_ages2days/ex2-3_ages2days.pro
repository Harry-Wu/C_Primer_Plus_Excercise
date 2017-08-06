TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    src/cs50.c \
    src/main.c
INCLUDEPATH += \
    src

HEADERS += \
    src/cs50.h
