#include <iostream>
#include <iomanip>
#include "Date.h"

using namespace std;

Date::Date()
{
	day = month = year = 0;
}

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

void Date::setDay(int d)
{

	if (d < 1 || d > 31)
	{
		while (d < 1 || d > 31)
		{
			cout << "Please enter a valid day: ";
			cin >> d;
		}

	}
	else

		day = d;
}

void Date::setMonth(int m)
{

	if (m < 1 || m > 12)
	{
		while (m < 1 || m > 12)
		{
			cout << "Please enter a valid month: ";
			cin >> m;
		}

	}
	else

		month = m;
}

void Date::setYear(int y)
{

	if (y < 1900 || y > 2022)
	{
		while (y < 1900 || y > 2022)
		{
			cout << "Please enter a valid year: ";
			cin >> y;
		}

	}
	else

		year = y;
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

void Date::Print_Date()
{

	if (month == 1)
	{
		cout << "January ";
	}
	else if (month == 2)
	{
		cout << "February ";
	}
	else if (month == 3)
	{
		cout << "March ";
	}
	else if (month == 4)
	{
		cout << "April ";
	}
	else if (month == 5)
	{
		cout << "May ";
	}
	else if (month == 6)
	{
		cout << "June ";
	}
	else if (month == 7)
	{
		cout << "July ";
	}
	else if (month == 8)
	{
		cout << "August ";
	}
	else if (month == 9)
	{
		cout << "September ";
	}
	else if (month == 10)
	{
		cout << "October ";
	}
	else if (month == 11)
	{
		cout << "November ";
	}
	else
	{
		cout << "December ";
	}

	if (day == 1 || day == 21 || day == 31)
	{
		cout << day << "st, ";
	}
	else if (day == 2 || day == 22)
	{
		cout << day << "nd, ";
	}
	else if (day == 3 || day == 23)
	{
		cout << day << "rd, ";
	}
	else
	{
		cout << day << "th, ";
	}

	cout << year << endl;
}