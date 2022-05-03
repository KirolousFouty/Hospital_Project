#ifndef EMERGENCYROOM_H
#define EMERGENCYROOM_H

#include <iostream>
#include <QString>

using namespace std;
class EmergencyRoom
{
protected:
	int room_number;
	int floor;

private:
	QString room_type;
	bool available;
	// Position:pair<x : double, y : double> ///////////////////////////////
public:
	EmergencyRoom();
	EmergencyRoom(int RN, int F, QString RT, bool A);

	int getroom_number();
	int get_floor();
	QString getroom_type();

	void setroom_number(int RN);
	void set_floor(int F);
	void setroom_type(QString RT);

	bool check_availablilty();
	QString book_room();
	int remaining_rooms();
	int booked_rooms();
};

#endif // !emergencyroom_H
