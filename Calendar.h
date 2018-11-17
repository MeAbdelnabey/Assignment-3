#ifndef CALENDAR_H
#define CALENDAR_H
#include "DayAppointments.h"
#include <iostream>
#include "Time.h"
#include "Appointment.h"
#include "DayAppointments.h"

using namespace std ;

class Calendar
{
    public:
        Calendar();
        Calendar (int numOfDays) ;
        void Add_appointment(int DayIndex , DayAppointments d) ;
        void Display_calendar (int index ) ;

    protected:

    private:
        DayAppointments * days;
        int numOfDays;
};

#endif // CALENDAR_H
