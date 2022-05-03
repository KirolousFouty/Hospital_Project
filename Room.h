#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <QString>
#include "Patient.h"

using namespace std;

class Room : public Patient
{
protected:
    int room_number;
    int floor;

private:
    // Position:pair<x:double, y:double>
    QString room_type;

public:
    Room();
    Room(int RN, int F, QString RT);

    int getroom_number();
    int getfloor();
    QString getroom_type();

    void setroom_number(int RN);
    void setfloor(int F);
    void setroom_type(QString RT);

    void check_availability();
    QString book_room();
    int remaining_rooms();
    int booked_rooms();
};
#endif
