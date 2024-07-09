#pragma once

#include "Guests.h"

#ifndef Guests_Res_Request_h
#define Guests_Res_Request_h

class Guests_Res_Request
{

public:
	Guests_Res_Request();

	int last_reservation_id();
	void set_guests(Guests* g);

	bool build_reservation_request();
	int get_reservation_id();

	Guests* get_guests();

private:
	Guests* guests;
	int reservation_ID;
	int Number_Nights;

};

#endif 

