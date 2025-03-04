#include <iostream>
#include "lab_date.h"
using namespace std;

Date::Date(int MONTH, int DAY, int YEAR)
{

    setyear(YEAR);
    setmonth(MONTH);
    setday(DAY);
}
void Date::print()
{
    cout << "today Date is : " << month << "-" << day << "-" << year << endl;
}

int Date::getday()
{
    return day;
}
int Date::getmonth()
{
    return month;
}
int Date::getyear()
{
    return year;
}

int Date::isLeapYear()
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Date::monthDays()
{
    if (month == 2)
    {
        int result = isLeapYear();
        if (result == 1)
            return 29;
        else
            return 28;
    }
    else
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            return 31;
        }
        else
        {
            return 30;
        }
    }
}

void Date::nextDay()
{
    setday(day + 1);
    if (day == 1)
    {
        setmonth(month+1);
        if (month == 1)
        {
            setyear(year+1);
        }
    }
}
void Date::setday(int DAY)
{

    (DAY > 0 && DAY <= monthDays()) ? day = DAY : day = 1 && cout << "invalide" << endl;
}
void Date::setmonth(int MONTH)
{
    (MONTH <= 12 && MONTH > 0) ? month = MONTH : month = 1 && cout << "invalide input the value set to 1 " << endl;
}
void Date::setyear(int YEAR)
{
    (YEAR > 0) ? year = YEAR : year = 1990 && cout << "invalide input the value set to 1 " << endl;
}
Date::~Date()
{
    cout << "destructed " << endl;
}