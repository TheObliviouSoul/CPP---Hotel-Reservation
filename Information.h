#pragma once

#include "Date.h"
#include <string>

#ifndef Information_h
#define Information_h

class Information
{
public:

	Information();
	Information(char[], char[], Date);

	void Full_Name();
	int set_DOB(int, int, int);
	void print_DOB();


protected:

	char First_Name[50];
	char Last_Name[50];
	Date DateOfBirth;

};

#endif 

