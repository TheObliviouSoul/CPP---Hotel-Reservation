#include <iostream>
#include <cstring>
#include <string>
#include "Date.h"
#include "Information.h"
#include "Guests.h"
#include "Guests_Res_Request.h"
#include "Reservation_Manager.h"

using namespace std;

int Guests_Res_Request::last_reservation_id()
{
	int last_reservation_id = 0;
}

Guests_Res_Request::Guests_Res_Request()
{
	reservation_ID = ++last_reservation_id;
	Number_Nights = 0;
}

int Guests_Res_Request::get_reservation_id()
{
	return reservation_ID;
}

void Guests_Res_Request::set_guests(Guests* g)
{
	guests = g;
}

bool Guests_Res_Request::build_reservation_request()
{
	int number{};

	do {
		cout << "Enter number of guests in the room: ";
		cin >> number;

	} while (number < 1 || number > 4);

	Guests* guest = new Guests();

	for (int i = 0; i < number; i++)
	{
		Information* info = new Information();
		guest->set_guest_info(info, 1);
	}

	Date date;
	date.setMonth(03);
	date.setYear(2022);

	int check_in = 0;
	int check_out = 0;

	do {
		do {
			cout << "Enter check-in day March: ";
			cin >> check_in;
		} while (check_in < 1 || check_in > 7);

		guest->set_check_in_date(check_in);

		do {
			cout << "Enter check-out day in March: ";
			cin >> check_out;
		} while (check_out <= check_in || check_out > 8);

		guest->set_check_out_date(check_out);

	} while (check_in > check_out);

	set_guests(guest);

	return true;
}

