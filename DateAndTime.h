#include <iostream>
using namespace std;

#ifndef dateandtime_H
#define dateandtime_H

class DateAndTime
{
    private:
    int hour;
    int minute;
    int day;
    int month;
    int year;
    public:
    DateAndTime();
    DateAndTime(int H,int Min, int D, int Mon, int Y);

    int gethour();
    int getminute();
    int getday();
    int getmonth();
    int getyear();

    void sethour();
    void setminute();
    void setday();
    void setmonth();
    void setyear();
};
#endif