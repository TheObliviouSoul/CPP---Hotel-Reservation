#pragma once

#include "Date.h"
#include "Information.h"
#include <string>

#ifndef Guests_h
#define Guests_h

class Guests
{

public:
	Guests();
	int get_check_in_date();
	int get_check_out_date();

	Information* get_guest_info(int);

	void set_guest_info(Information*, int);
	void set_check_in_date(int);
	void set_check_out_date(int);
	void show_check_in_out_date();

private:
	Date check_in;
	Date check_out;
	Information* guest_info[4];
	int Room_Number;

};

#endif 
