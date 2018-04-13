#-------------------------------------------------
#
# Project created by QtCreator 2018-04-11T10:23:29
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testOpenGL
TEMPLATE = app


SOURCES += main.cpp\
        Source/mainwindow.cpp \
    Source/glwidget.cpp

HEADERS  += Include/mainwindow.h \
    Include/glwidget.h

FORMS    += mainwindow.ui

LIBS += -lglut -glut -lGL -lGLU
