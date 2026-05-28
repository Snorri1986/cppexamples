/** 1. The method print() outputs the date to standard output using the
format Month-Day-Year.
2. The method init() uses three parameters and copies the values
passed to it to corresponding members. A range check is not required
at this stage, but will be added later.
3. The method init() without parameters writes the current date to the
corresponding members.*/


#include "Date.h"

#include <iostream>
#include <ostream>
#include <climits>
#include <ctime>

struct tm *ptr;

void Date::setDay(int v_day)
{
    if (v_day > 0 && v_day <= 31)
    {
        this->day = v_day;
    } else
    {
        std::cout << "Date is out of range" << std::endl;
    }
}

void Date::setMonth(int v_month)
{
    if (v_month > 0 && v_month <= 12)
    {
        this->month = v_month;
    } else
    {
        std::cout << "Month is out of range" << std::endl;
    }
}

void Date::setYear(int v_year)
{
    if (v_year > 0 && v_year <= INT_MAX)
    {
        this->year = v_year;
    } else
    {
        std::cout << "Year is out of range" << std::endl;
    }
}

int Date::getDay() const
{
    return this->day;
}

int Date::getMonth() const
{
    return this->month;
}

int Date::getYear() const
{
    return this->year;
}

// task related functions
void Date::init(int m, int d, int y)
{
    setMonth(m);
    setDay(d);
    setYear(y);
}

void Date::init()
{
    time_t now = time(0);
    ptr = localtime(&now);
    setMonth(ptr->tm_mon + 1);
    setDay(ptr->tm_mday);
    setYear(ptr->tm_year + 1900);
}

void Date::print()
{
    std::cout << month << "-" << day << "-" << year << std::endl;
}
