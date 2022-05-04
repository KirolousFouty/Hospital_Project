#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <QString>
#include "Patient.h"

using namespace std;

class Room : public Patient
{
protected:
    int roomNumber;
    int floor;

private:
    // Position:pair<x:double, y:double>
    QString roomType;

public:
    Room();
    Room(int RN, int F, QString RT);

    int getRoomNumber();
    int getFloor();
    QString getRoomType();

    void setRoomNumber(int RN);
    void setFloor(int F);
    void setRoomType(QString RT);

    bool checkAvailability();
    QString bookRoom();
    // int remainingRooms();
    // int bookedRooms();
};
#endif
