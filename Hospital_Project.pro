QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DateAndTime.cpp \
    Department.cpp \
    Doctor.cpp \
    EmergencyRoom.cpp \
    EmergencyVisit.cpp \
    HomeVisit.cpp \
    OutpatientClinic.cpp \
    Room.cpp \
    UserLogin.cpp \
    main.cpp \
    mainwindow.cpp \
    patient.cpp \
    source.cpp

HEADERS += \
    DateAndTime.h \
    Department.h \
    Doctor.h \
    EmergencyRoom.h \
    EmergencyVisit.h \
    HomeVisit.h \
    OutpatientClinic.h \
    Room.h \
    UserLogin.h \
    mainwindow.h \
    patient.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.md \
    source.exe
