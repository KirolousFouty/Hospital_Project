#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef emergencyroom_H
#define emergencyroom_H
class EmergencyRoom
{
protected:
	int room_number;
	int floor;
private:
	string room_type;
	bool available;
	//Position:pair<x : double, y : double> ///////////////////////////////
public:
	EmergencyRoom();
	EmergencyRoom(int RN, int F, string RT, bool A);

	int getroom_number();
	int get_floor();
	string getroom_type();

	void setroom_number(int RN);
	void set_floor(int F);
	void setroom_type(string RT);

	bool check_availablilty();
	string book_room();
	int remaining_rooms();
	int booked_rooms();

};

#endif // !emergencyroom_H

