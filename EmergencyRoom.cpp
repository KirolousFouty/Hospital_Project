#include "EmergencyRoom.h"

EmergencyRoom::EmergencyRoom()
{
	this->roomNumber = 0;
	this->floor = 0;
	this->roomType = "standard";
	this->available = true;
	//-  this->Position:pair<x:double, y:double>
}
EmergencyRoom::EmergencyRoom(int p_roomNumber, int p_floor, QString p_roomType, bool p_available)
{
	this->roomNumber = p_roomNumber;
	this->floor = p_floor;
	this->roomType = p_roomType;
	this->available = p_available;
}
int EmergencyRoom::getRoomNumber()
{
	return this->roomNumber;
}
int EmergencyRoom::getFloor()
{
	return this->floor;
}
QString EmergencyRoom::getRoomType()
{
	return this->roomType;
}
void EmergencyRoom::setRoomNumber(int p_roomNumber)
{
	this->roomNumber = p_roomNumber;
}
void EmergencyRoom::setFloor(int p_floor)
{
	this->floor = p_floor;
}
void EmergencyRoom::setRoomType(QString p_roomType)
{
	this->roomType = p_roomType;
}
bool EmergencyRoom::checkAvailability()
{
	if (available == true)
		return true;
	else
		return false;
}
QString EmergencyRoom::bookRoom() //////////////////////// 7ad yerage3 el kalam da
{
	if (checkAvailability() == true)
		return this->bookRoom();
	else
		return "False: Room is not Booked."; // room is not booked
}
int EmergencyRoom::remainingRooms()
{
	/////////////////////////////////
	return 0;
}
int EmergencyRoom::bookedRooms()
{
	//////////////////////////////////
	return 0;
}
