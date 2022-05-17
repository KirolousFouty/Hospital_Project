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

Room::Room(QString p_department, QString p_doc, DateAndTime p_dt, QString p_roomType){
    this->department = p_department;
    this->doc = p_doc;
    this->dt = p_dt;
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

QString Room::getRoomType() const
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

QString Room::getDepartment() const
{
    return this->department;
}

QString Room::getDoc() const{
    return this->doc;
}

DateAndTime Room::getDt() const{
    return this->dt;
}


void Room::setDepartment(QString p_department){
    this->department = p_department;
}

void Room::setDoc(QString p_doc){
    this->doc = p_doc;
}

void Room::setDt(DateAndTime p_dt){
    this->dt = p_dt;
}

QString Room::showRoom() const{
    QString txt = "";
    txt = txt + "   Department: " + this->department;
    txt = txt + "   Doctor Name: " + this->doc;
    txt = txt + "   Time: " + QString::number(this->dt.getHour()) + ":" + QString::number(this->dt.getMinute()) + "0";
    txt = txt + "   Room Type: " + this->roomType;

    return txt;
}
