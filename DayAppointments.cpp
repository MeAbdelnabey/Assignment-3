#include "DayAppointments.h"
#include <iostream>
#include "Time.h"
#include "Appointment.h"


using namespace std ;
DayAppointments::DayAppointments() {}
DayAppointments::DayAppointments(int x , string y) {
    numOfAppointments = x ;
    weekDay = y ;
    appointments = new Appointment[numOfAppointments];
}
DayAppointments:: DayAppointments(string weekDay , int numOfAppointments ) {
    this->weekDay = weekDay ;
    this->numOfAppointments = numOfAppointments ;
}

DayAppointments::~DayAppointments(){

    delete[] appointments;
}
void DayAppointments::check () {
    for (int i = 0 ; i < numOfAppointments ; i++) {
        for (int j = i+1 ; j < numOfAppointments ; j++) {
            if (appointments[i] == appointments[j])
            {for (int k = j ; k < numOfAppointments-1 ; k++) {
                appointments[k] = appointments[k+1] ;
            }
            numOfAppointments-- ; }
        }
    }
}
void DayAppointments::set_DayAppointments (int i , Appointment A)  {
    appointments[i] = A ;

}
DayAppointments::DayAppointments(const DayAppointments& other) {
    numOfAppointments = other.numOfAppointments;
    for (int i = 0 ; i < numOfAppointments ; i++) appointments[i] = (other.appointments[i]) ;

}
DayAppointments& DayAppointments::operator=(const DayAppointments& rhs) {
    numOfAppointments = rhs.numOfAppointments;
    for (int i = 0 ; i < numOfAppointments ; i++) appointments[i] = rhs.appointments[i] ;
    weekDay = rhs.weekDay ;
    return *this ;
}
bool DayAppointments::operator== (const DayAppointments& other) const {
    if (numOfAppointments != other.numOfAppointments  )  return 0 ;
    else {
    bool x = 1 ;
    for (int i = 0 ; i < numOfAppointments ; i++)   if (appointments[i] != other.appointments[i])   x = 0 ;
    return  ( x ) ;        }
}
bool DayAppointments::operator!= (const DayAppointments& other) const {
    return !(*this == other) ;
}
Appointment DayAppointments::operator[] (unsigned int i) {
    return appointments[i-1] ;
}
void DayAppointments::set_DayandApp (int x , string y) { numOfAppointments = x; weekDay = y ;}
int DayAppointments::get_N_App () {return numOfAppointments ;}
string DayAppointments::get_weekDay () {return weekDay ;}



