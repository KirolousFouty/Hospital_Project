#ifndef DATEANDTIME_H
#define DATEANDTIME_H

#include <iostream>

using namespace std;

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
    DateAndTime(int H, int Min, int D, int Mon, int Y);

    int getHour();
    int getMinute();
    int getDay();
    int getMonth();
    int getYear();

    void setHour(int H);
    void setMinute(int Min);
    void setDay(int D);
    void setMonth(int Mon);
    void setYear(int Y);
};

#endif
