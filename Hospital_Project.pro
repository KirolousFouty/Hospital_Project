QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Appointment.cpp \
    DateAndTime.cpp \
    Department.cpp \
    Doctor.cpp \
    Drugs.cpp \
    EmergencyRoom.cpp \
    EmergencyVisit.cpp \
    HomeVisit.cpp \
    Laboratory.cpp \
    MedicalTools.cpp \
    OutpatientClinic.cpp \
    Patient.cpp \
    Payment.cpp \
    Pharmacy.cpp \
    Room.cpp \
    bookappointmentwindow.cpp \
    bookemergencyvisitwindow.cpp \
    bookhomevisitwindow.cpp \
    bookroomwindow.cpp \
    dobloodtestwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    paymentwindow.cpp \
    rechargebalancewindow.cpp \
    searchwindow.cpp \
    showpatientinformation.cpp \
    userloginwindow.cpp \
    userregisterwindow.cpp

HEADERS += \
    Appointment.h \
    DateAndTime.h \
    Department.h \
    Doctor.h \
    Drugs.h \
    EmergencyRoom.h \
    EmergencyVisit.h \
    HomeVisit.h \
    Laboratory.h \
    MedicalTools.h \
    OutpatientClinic.h \
    Patient.h \
    Payment.h \
    Pharmacy.h \
    Room.h \
    bookappointmentwindow.h \
    bookemergencyvisitwindow.h \
    bookhomevisitwindow.h \
    bookroomwindow.h \
    dobloodtestwindow.h \
    mainwindow.h \
    paymentwindow.h \
    rechargebalancewindow.h \
    searchwindow.h \
    showpatientinformation.h \
    userloginwindow.h \
    userregisterwindow.h

FORMS += \
    bookappointmentwindow.ui \
    bookemergencyvisitwindow.ui \
    bookhomevisitwindow.ui \
    bookroomwindow.ui \
    dobloodtestwindow.ui \
    mainwindow.ui \
    paymentwindow.ui \
    rechargebalancewindow.ui \
    searchwindow.ui \
    showpatientinformation.ui \
    userloginwindow.ui \
    userregisterwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.md
