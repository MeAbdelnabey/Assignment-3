#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <iostream>
#include "Time.h"

using namespace std ;


class Appointment
{
    public:
        Appointment();
        Appointment(Time , Time )  ;
        Time start_time , end_time ;
        bool operator<= (const Appointment&) const ;
        bool operator>= (const Appointment&) const ;
        bool operator<  (const Appointment&) const ;
        bool operator>  (const Appointment&) const ;
        bool operator== (const Appointment&) const ;
        bool operator!= (const Appointment&) const ;
        friend istream& operator>> (istream& , Appointment& )   ;
        friend ostream& operator<< (ostream& , Appointment& )  ;

    protected:

    private:
};

#endif // APPOINTMENT_H
