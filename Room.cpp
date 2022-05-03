#include "Room.h"
using namespace std;
Room::Room()
{
    room_number=0;
    floor=0;
    room_type="VIP";
}
Room::Room(int RN, int F, string RT)
{
    room_number=RN;
    floor=F;
    room_type=RT;
}
int Room::getroom_number()
{
    return room_number;
}
int Room::getfloor()
{
    return floor;
}
string Room::getroom_type()
{
    return room_type;
}
void Room::setroom_number(int RN)
{
    room_number=RN;
}
void Room::setfloor(int F)
{
    floor=F;
}
void Room::setroom_type(string RT)
{
    room_type=RT;
}
void Room::check_availability()
{
    ////////////////////////////////
}
string Room::book_room()
{
    ////////////////////////////////
}
int Room::remaining_rooms()
{
    ////////////////////////////////
}
int Room::booked_rooms()
{
    ////////////////////////////////
}
    