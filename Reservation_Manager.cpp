#include <iostream>
#include <cstring>
#include <string>
#include "Date.h"
#include "Information.h"
#include "Guests.h"
#include "Guests_Res_Request.h"
#include "Reservation_Manager.h"

using namespace std;

Reservation_Manager::Reservation_Manager()
{
	Maximum_nights = 7;
	Available_Rooms = 20;

	for (int i = 0; i < 140; i++) arr[i] = NULL;

	for (int day = 0; day < 7; day++)
	{
		for (int room = 0; room < 20; room++)
		{
			room_nights[day][room] = 0;
		}
	}
}

Guests_Res_Request* Reservation_Manager::get_array(int i)
{
	return arr[i];
}

bool Reservation_Manager::delete_reservation_request(Guests_Res_Request* request)
{
	Guests* guest = request->get_guests();

	for (int i = 0; i < 4; i++)
	{
		Information* info = guest->get_guest_info(i);

		delete info;
	}

	delete guest;
	delete request;
	return true;
}

bool Reservation_Manager::print_all_data(Guests_Res_Request* request)
{
	Guests* guest = request->get_guests();

	for (int i = 0; i < 4; i++)
	{
		Information* info = guest->get_guest_info(i);

		if (info != NULL)
		{
			cout << "Guest" << (i + 1) << ", Name:";
			info->Full_Name();
			cout << " DOB(YYYY-MM-DD): ";
			info->print_DOB();
			cout << endl;
		}
	}

	cout << "Check-in/out in (YYYY-MM-DD): ";
	guest->show_check_in_out_date();
	cout << endl;

	return true;
}

bool Reservation_Manager::process_reservation_request(Guests_Res_Request* process)
{
	Guests* guest = process->get_guests();
	int first_day = guest->get_check_in_date();
	int last_day = guest->get_check_out_date();
}