#include <iostream>
#include "Time.h"
#include "Appointment.h"
#include "DayAppointments.h"
#include "Calendar.h"


using namespace std ;
istream& operator>> (istream& in, Appointment& A ) ;
ostream& operator<< (ostream& out, Appointment& A) ;
istream& operator>> (istream& in , DayAppointments& d) ;
ostream& operator<<  (ostream& out , DayAppointments& d)  ;


int main ()
{
    Time x(8,0,"AM") , y(10,0,"AM") , z(13,0,"PM") , x2(10,0,"AM") , y2(12,0,"PM"), z2(15,0,"PM");
    Appointment t1(x,x2) , t2(y,y2) , t3 (z,z2);
    DayAppointments d(3,"Monday")  ;
    d.set_DayAppointments(0,t1) ;
    d.set_DayAppointments(1,t2) ;
    d.set_DayAppointments(2,t3) ;
    Calendar c1(7) ;
//    c1.Add_appointment(2,d) ;
    c1.Display_calendar(2) ;






    return 0;
}
istream& operator>> (istream& in, Appointment& A )  {
    cout << "first , enter start time : " ;
    in >> A.start_time ;
    cout  << "enter end time : " << endl;
    in >> A.end_time ;
    return in ;
}
ostream& operator<< (ostream& out, Appointment& A)  {
        out << "Start time : " << A.start_time << "End time : " << A.end_time << endl;
        return out ;
}
istream& operator>> (istream& in , DayAppointments& d) {
    int x = d.numOfAppointments ;
    cout << "enter the " << x << " appointments : " << endl;
    for (int i = 0; i < x ; i++ ) in >> d.appointments[i] ;
    return in ;
}
ostream& operator<< (ostream& out , DayAppointments& d) {
    int n  = d.numOfAppointments ;
    string name = d.weekDay;
    out << "Appointments for " << name << " are : \n" ;
    for (int i = 0 ; i < n ; i++) {out << d.appointments [i] << endl;   }
    return out ;
}

