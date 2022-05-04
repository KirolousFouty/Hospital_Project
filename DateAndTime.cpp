#include "DateAndTime.h"

DateAndTime::DateAndTime()
{
    this->hour = 0;
    this->minute = 0;
    this->day = 0;
    this->month = 0;
    this->year = 0;
}

DateAndTime::DateAndTime(int p_hour, int p_minute, int p_day, int p_month, int p_year)
{
    this->hour = p_hour;
    this->minute = p_minute;
    this->day = p_day;
    this->month = p_month;
    this->year = p_year;
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

void DateAndTime::setHour(int p_hour)
{
    this->hour = p_hour;
}

void DateAndTime::setMinute(int p_minute)
{
    this->minute = p_minute;
}

void DateAndTime::setDay(int p_day)
{
    this->day = p_day;
}

void DateAndTime::setMonth(int p_month)
{
    this->month = p_month;
}

void DateAndTime::setYear(int p_year)
{
    this->year = p_year;
}
