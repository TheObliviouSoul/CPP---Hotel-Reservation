/*
Rahul Patel
ID: 40030149
Teacher: Malleswara Talla, PhD 
*/

#include <iostream>
#include <cstring>
#include <string>
#include "Date.h"
#include "Information.h"
#include "Guests.h"
#include "Guests_Res_Request.h"
#include "Reservation_Manager.h"

using namespace std;

int main()
{
	Reservation_Manager* Room_manager = new Reservation_Manager();
	Guests_Res_Request* Guest_request = new Guests_Res_Request();

	Guest_request->build_reservation_request();
	Room_manager->process_reservation_request(Guest_request);

	Room_manager->print_all_data(Guest_request);

	for (int i = 0; i < 140; i++)
	{
		Guests_Res_Request Room_request = Room_manager->get_array(i);
		if (Room_manager != NULL)
		{
			Room_manager->delete_reservation_request(Room_request);
		}
	}

	delete Room_manager;

	return 0;

}

