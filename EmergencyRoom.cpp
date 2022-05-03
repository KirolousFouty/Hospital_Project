#include "EmergencyRoom.h"

EmergencyRoom::EmergencyRoom()
{
	room_number = 0;
	floor = 0;
	room_type = "standard";
	available = true;
	//- Position:pair<x:double, y:double>
}
EmergencyRoom::EmergencyRoom(int RN, int F, string RT, bool A)
{
	room_number = RN;
	floor = F;
	room_type = RT;
	available = A;
}
int EmergencyRoom::getroom_number()
{
	return room_number;
}
int EmergencyRoom::get_floor()
{
	return floor;
}
string EmergencyRoom::getroom_type()
{
	return room_type;
}
void EmergencyRoom::setroom_number(int RN)
{
	room_number = RN;
}
void EmergencyRoom::set_floor(int F)
{
	floor = F;
}
void EmergencyRoom::setroom_type(string RT)
{
	room_type = RT;
}
bool EmergencyRoom::check_availablilty()
{
	if (available == true)
		return true;
	else
		return false;
}
string EmergencyRoom::book_room() //////////////////////// 7ad yerage3 el kalam da
{
	if (check_availablilty() == true)
		return book_room();
	else
		return "False: Room is not Booked."; // room is not booked
}
int EmergencyRoom::remaining_rooms()
{
	/////////////////////////////////
	return -1;
}
int EmergencyRoom::booked_rooms()
{
	//////////////////////////////////
	return -1;
}
