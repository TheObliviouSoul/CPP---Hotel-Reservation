
**Task Description:**
1. **Hotel Information:**
   - Hotel has 20 rooms (room numbers 1 to 20).
   - Reservations are for March 1 to March 8 (7 nights).

2. **Class Definitions:**
   - **Date Class:** Includes month, day, and year.
   - **Information Class:** Includes first name, last name, and date of birth (from Date class).
   - **Guests Class:** Includes check-in date, check-out date, guest information (array of Information objects, max 4), and room number.
   - **Guests_Res_Request Class:** Includes a Guests object, reservation ID, and number of nights. The reservation ID is unique and incremented automatically.
   - **Reservation_Manager Class:** Manages reservations with data members for maximum nights, number of rooms, array of Guest_Res_Request pointers, and a 2D array for reservation IDs.

3. **Functions to Implement:**
   - Process a reservation request and return reservation ID if successful.
   - Output details of a reservation given its ID.
   - Cancel a reservation given its ID.

**Key Considerations:**
- Enforce encapsulation (keep data members private).
- Use dynamic memory allocation for Guests_Res_Request objects and delete unnecessary ones.
- Update relevant data members in member functions.
- Use concepts from class such as constant member functions, static members, and inline functions.
