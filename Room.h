#include <iostream>
#include <string>
#include "Patient.h"
using namespace std;

#ifndef ROOM_H
#define ROOM_H

class Room:public Patient
{
    protected:
    int room_number;
    int floor;
    private:
    //Position:pair<x:double, y:double>
    string room_type;
    public:
    Room();
    Room(int RN, int F, string RT);

    int getroom_number();
    int getfloor();
    string getroom_type();

    void setroom_number(int RN);
    void setfloor(int F);
    void setroom_type(string RT);

    void check_availability();
    string book_room();
    int remaining_rooms();
    int booked_rooms();

};
#endif
