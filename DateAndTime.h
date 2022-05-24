#ifndef DATEANDTIME_H
#define DATEANDTIME_H

#include <iostream>
#include <QString>

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
    DateAndTime(int p_hour, int p_minute);
    DateAndTime(int H, int Min, int D, int Mon, int Y);

    int getHour() const;
    int getMinute() const;
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    QString getDt() const;

    void setHour(int p_hour);
    void setMinute(int p_minute);
    void setDay(int p_day);
    void setMonth(int p_month);
    void setYear(int p_year);
    bool operator==(const DateAndTime &dt) const;
};

#endif
