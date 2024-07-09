#include <iostream>
#include <cstring>
#include <string>
#include "Date.h"
#include "Information.h"

using namespace std;

Information::Information()
{
	int month{}, day{}, year{};

	Date day = Date(0, 0, 0);

	for (int i = 0; i < 20; i++)
	{
		First_Name[i] = ' ';
		Last_Name[i] = ' ';
	}

	cout << "Enter first name: ";
	cin >> First_Name;

	cout << "Enter last name: ";
	cin >> Last_Name;

	do
	{
		cout << "Enter date of birth (DD MM YYYY): ";
		cin >> day >> month >> year;

	} while (year > 2022 || month < 1 || month > 12 || day < 1 || day > 31);

	set_DOB(day, month, year);
}

int Information::set_DOB(int d, int m, int y)
{
	DateOfBirth.setDay(d);
	DateOfBirth.setMonth(m);
	DateOfBirth.setYear(y);
}

void Information::print_DOB()
{
	DateOfBirth.Print_Date();
}





