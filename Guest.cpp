#include <iostream>
#include <cstring>
#include <string>
#include "Date.h"
#include "Information.h"
#include "Guests.h"
#include "Guests_Res_Request.h"
#include "Reservation_Manager.h"

using namespace std;

Guests::Guests()
{
	Date guest_date;
	guest_date.setDay(0);
	guest_date.setMonth(3);
	guest_date.setYear(2022);

	Room_Number = 0;

	for (int i = 0; i < 4; i++) {
		guest_info[i] = NULL;
	}
}

int Guests::get_check_in_date()
{
	return check_in.getDay();
}

int Guests::get_check_out_date()
{
	return check_out.getDay();
}

Guests* Guests_Res_Request::get_guests()
{
	return guests;
}

Information* Guests::get_guest_info(int i)
{
	return guest_info[i];
}

void Guests::set_guest_info(Information* info, int i)
{
	guest_info[i] = info;
}

void Guests::set_check_in_date(int d)
{
	Date date;
	date.setDay(d);
	date.setMonth(3);
	date.setYear(20022);
	check_in = date;
}

void Guests::set_check_out_date(int d)
{
	Date date;
	date.setDay(d);
	date.setMonth(3);
	date.setYear(20022);
	check_out = date;
}

void Guests::show_check_in_out_date()
{
	check_in.Print_Date();
	cout << " ";
	check_out.Print_Date();
}
