#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <QString>
#include "Patient.h"
#include "DateAndTime.h"

using namespace std;

class Room : public Patient
{
protected:
    int roomNumber;
    int floor;

private:
    // Position:pair<x:double, y:double>
    QString department;
    QString doc;
    DateAndTime dt;
    QString roomType;

public:
    Room();
    Room(int RN, int F, QString RT);
    Room(QString p_department, QString p_doc, DateAndTime p_dt, QString p_roomType);

    int getRoomNumber();
    int getFloor();
    QString getRoomType() const;

    void setRoomNumber(int RN);
    void setFloor(int F);
    void setRoomType(QString RT);

    bool checkAvailability();
    QString bookRoom();
    // int remainingRooms();
    // int bookedRooms();

    QString getDepartment() const;
    QString getDoc() const;
    DateAndTime getDt() const;

    void setDepartment(QString p_department);
    void setDoc(QString p_doc);
    void setDt(DateAndTime p_dt);

    QString showRoom() const;
    double getFees() const;

};
#endif
