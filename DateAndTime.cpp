#include "DateAndTime.h"

DateAndTime::DateAndTime()
{
    this->hour = 0;
    this->minute = 0;
    this->day = 0;
    this->month = 0;
    this->year = 0;
}

DateAndTime::DateAndTime(int p_hour, int p_minute)
{
    this->hour = p_hour;
    this->minute = p_minute;
}

DateAndTime::DateAndTime(int p_hour, int p_minute, int p_day, int p_month, int p_year)
{
    this->hour = p_hour;
    this->minute = p_minute;
    this->day = p_day;
    this->month = p_month;
    this->year = p_year;
}

int DateAndTime::getHour() const
{
    return this->hour;
}

int DateAndTime::getMinute() const
{
    return this->minute;
}

int DateAndTime::getDay() const
{
    return this->day;
}

int DateAndTime::getMonth() const
{
    return this->month;
}

int DateAndTime::getYear() const
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

bool DateAndTime::operator==(const DateAndTime &dt) const
{
    //    return (this->minute == dt.minute  && this->hour == dt.hour && this->day == dt.day && this->month == dt.month && this->year == dt.year);
    return (this->minute == dt.minute && this->hour == dt.hour);
}
