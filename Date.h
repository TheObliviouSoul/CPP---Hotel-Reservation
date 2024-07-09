#pragma once
#ifndef Date_h
#define Date_h

class Date
{
public:

	Date();
	Date(int, int, int);

	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void Print_Date();

	int getDay();
	int getMonth();
	int getYear();


protected:

	int day;
	int month;
	int year;
};
#endif 