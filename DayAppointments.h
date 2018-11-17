#ifndef DAYAPPOINTMENTS_H
#define DAYAPPOINTMENTS_H
#include <iostream>
#include "Time.h"
#include "Appointment.h"


using namespace std ;

class DayAppointments
{
    public:
        DayAppointments();
        DayAppointments(int  , string ) ;
        DayAppointments(string weekDay , int numOfAppointments );
        ~DayAppointments();
        void check () ;
        DayAppointments(const DayAppointments& other);
        DayAppointments& operator=(const DayAppointments& other);
        bool operator== (const DayAppointments& other) const ;
        bool operator!= (const DayAppointments& other) const ;
        Appointment operator[] (unsigned int i)  ;
        friend istream& operator>> (istream& in , DayAppointments& d) ;
        friend ostream& operator<<  (ostream& out , DayAppointments& d) ;
        void set_DayandApp (int  , string )  ;
        void set_DayAppointments ( int  ,Appointment ) ;
        int get_N_App () ;
        string get_weekDay () ;
        Appointment * appointments ;

    protected:

    private:

                int numOfAppointments;
                string weekDay;

};

#endif // DAYAPPOINTMENTS_H
