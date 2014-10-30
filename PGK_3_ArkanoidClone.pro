#-------------------------------------------------
#
# Project created by QtCreator 2014-10-30T20:05:17
#
#-------------------------------------------------

CONFIG += c++11
CONFIG += -Wall
CONFIG += -Weffc++
CONFIG += -O2

# WARN: Line below is probably not cross-platform compatible:
LIBS += -lglfw3 -pthread -lGLEW -lGLU -lGL -lrt -lXrandr -lXxf86vm -lXi -lXinerama -lX11


#TARGET = PGK_3_ArkanoidClone
#CONFIG   += console
#CONFIG   -= app_bundle

#TEMPLATE = app


SOURCES += main.cpp \
    arkanoid.cpp \
    hex.cpp

HEADERS += \
    arkanoid.hpp \
    hex.hpp
