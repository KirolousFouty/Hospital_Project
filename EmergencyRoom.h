#ifndef EMERGENCYROOM_H
#define EMERGENCYROOM_H

#include <iostream>
#include <QString>

using namespace std;
class EmergencyRoom
{
protected:
	int roomNumber;
	int floor;

private:
	QString roomType;
	bool available;
	// Position:pair<x : double, y : double> ///////////////////////////////
public:
	EmergencyRoom();
	EmergencyRoom(int p_roomNumber, int p_floor, QString p_roomType, bool p_available);

	int getRoomNumber();
	int getFloor();
	QString getRoomType();

	void setRoomNumber(int p_roomNumber);
	void setFloor(int p_floor);
	void setRoomType(QString p_roomType);

	bool checkAvailability();
	QString bookRoom();
	int remainingRooms();
	int bookedRooms();
};

#endif // !emergencyroom_H
