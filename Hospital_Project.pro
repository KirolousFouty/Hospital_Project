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
    Feedback.cpp \
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
    cancelappointmentwindow.cpp \
    complexsearchwindow.cpp \
    contactuswindow.cpp \
    dobloodtestwindow.cpp \
    emailinboxwindow.cpp \
    helpandpricingswindow.cpp \
    main.cpp \
    mainwindow.cpp \
    patchnoteswindow.cpp \
    paymentwindow.cpp \
    rechargebalancewindow.cpp \
    shortestpathwindow.cpp \
    showpatientinformation.cpp \
    usereditwindow.cpp \
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
    Feedback.h \
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
    cancelappointmentwindow.h \
    complexsearchwindow.h \
    contactuswindow.h \
    dobloodtestwindow.h \
    emailinboxwindow.h \
    helpandpricingswindow.h \
    mainwindow.h \
    patchnoteswindow.h \
    paymentwindow.h \
    rechargebalancewindow.h \
    shortestpathwindow.h \
    showpatientinformation.h \
    usereditwindow.h \
    userloginwindow.h \
    userregisterwindow.h

FORMS += \
    bookappointmentwindow.ui \
    bookemergencyvisitwindow.ui \
    bookhomevisitwindow.ui \
    bookroomwindow.ui \
    cancelappointmentwindow.ui \
    complexsearchwindow.ui \
    contactuswindow.ui \
    dobloodtestwindow.ui \
    emailinboxwindow.ui \
    helpandpricingswindow.ui \
    mainwindow.ui \
    patchnoteswindow.ui \
    paymentwindow.ui \
    rechargebalancewindow.ui \
    shortestpathwindow.ui \
    showpatientinformation.ui \
    usereditwindow.ui \
    userloginwindow.ui \
    userregisterwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.md
