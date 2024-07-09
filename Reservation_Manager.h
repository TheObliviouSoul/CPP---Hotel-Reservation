#pragma once

#include "Guests_Res_Request.h"

#ifndef Reservation_Manager_h
#define Reservation_Manager_h

class Reservation_Manager
{

public:

	Reservation_Manager();

	bool process_reservation_request(Guests_Res_Request*);
	bool delete_reservation_request(Guests_Res_Request*);
	bool print_all_data(Guests_Res_Request*);

	Guests_Res_Request* get_array(int);

private:

	int Maximum_nights;
	int Available_Rooms;
	Guests_Res_Request* arr[140];
	int room_nights[7][20];
};

#endif 

