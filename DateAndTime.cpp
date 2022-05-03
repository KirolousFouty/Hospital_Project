#include "DateAndTime.h"

DateAndTime::DateAndTime()
{
    this->hour = 0;
    this->minute = 0;
    this->day = 0;
    this->month = 0;
    this->year = 0;
}

DateAndTime::DateAndTime(int H, int Min, int D, int Mon, int Y)
{
    this->hour = H;
    this->minute = Min;
    this->day = D;
    this->month = Mon;
    this->year = Y;
}

int DateAndTime::getHour()
{
    return this->hour;
}

int DateAndTime::getMinute()
{
    return this->minute;
}

int DateAndTime::getDay()
{
    return this->day;
}

int DateAndTime::getMonth()
{
    return this->month;
}

int DateAndTime::getYear()
{
    return this->year;
}

void DateAndTime::setHour(int H)
{
    this->hour = H;
}

void DateAndTime::setMinute(int Min)
{
    this->minute = Min;
}

void DateAndTime::setDay(int D)
{
    this->day = D;
}

void DateAndTime::setMonth(int Mon)
{
    this->month = Mon;
}

void DateAndTime::setYear(int Y)
{
    this->year = Y;
}
