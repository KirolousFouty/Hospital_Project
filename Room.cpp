#include "Room.h"

Room::Room()
{
    this->roomNumber = 0;
    this->floor = 0;
    this->roomType = "VIP";
}

Room::Room(int p_roomNumber, int p_floor, QString p_roomType)
{
    this->roomNumber = p_roomNumber;
    this->floor = p_floor;
    this->roomType = p_roomType;
}

int Room::getRoomNumber()
{
    return this->roomNumber;
}

int Room::getFloor()
{
    return this->floor;
}

QString Room::getRoomType()
{
    return this->roomType;
}

void Room::setRoomNumber(int p_roomNumber)
{
    this->roomNumber = p_roomNumber;
}

void Room::setFloor(int p_floor)
{
    this->floor = p_floor;
}

void Room::setRoomType(QString p_roomType)
{
    this->roomType = p_roomType;
}

bool Room::checkAvailability()
{
    //    if (getroom_number() == room_number[i])
    {
        //        ui->label->setText("this room is available");
        return true;
    }
    //    else
    {
        //        ui->label->setText("this room is not available");
        return false;
    }
}

QString Room::bookRoom()
{
    if (checkAvailability() == true)
        return "booked";
    else
        return "booking unsuccessful";
}

/*int Room::remainingRooms()
{
    ////////////////////////////////
    return 0;
}

*/
/*int Room::bookedRooms()
{
    ////////////////////////////////
    return 0;
}
*/
