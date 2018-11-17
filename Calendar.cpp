#include "Calendar.h"
#include "DayAppointments.h"
#include <iostream>
#include "Time.h"
#include "Appointment.h"


using namespace std ;
Calendar::Calendar()
{
    //ctor
}
Calendar::Calendar (int numOfDays) {
            this-> numOfDays = numOfDays ;
            days = new DayAppointments[numOfDays] ;
}
void Calendar::Add_appointment(int DayIndex , DayAppointments d) {
    *days[DayIndex] = d ;
}
void Calendar::Display_calendar (int index ) {
    cout << days[index] ;
}
