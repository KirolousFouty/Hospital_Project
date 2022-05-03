#include "DateAndTime.h"
using namespace std;
DateAndTime::DateAndTime()
{
    hour = 0;
    minute = 0;
    day = 0;
    month = 0;
    year = 0;
}
DateAndTime::DateAndTime(int H, int Min, int D, int Mon, int Y)
{
    hour = H;
    minute = Min;
    day = D;
    month = Mon;
    year = Y;
}
int DateAndTime::gethour()
{
    return hour;
}
int DateAndTime::getminute()
{
    return minute;
}
int DateAndTime::getday()
{
    return day;
}
int DateAndTime::getmonth()
{
    return month;
}
int DateAndTime::getyear()
{
    return year;
}
void DateAndTime::sethour(int H)
{
    hour = H;
}
void DateAndTime::setminute(int Min)
{
    minute = Min;
}
void DateAndTime::setday(int D)
{
    day = D;
}
void DateAndTime::setmonth(int Mon)
{
    month = Mon;
}
void DateAndTime::setyear(int Y)
{
    year = Y;
}
