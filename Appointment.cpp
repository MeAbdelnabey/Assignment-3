#include <iostream>
#include "Time.h"
#include "Appointment.h"
using namespace std ;


Appointment::Appointment() {}
Appointment::Appointment ( Time start_time , Time end_time) {
    this-> start_time = start_time ;
    this-> end_time = end_time ;
}
bool Appointment::operator<  (const Appointment& A2 ) const {
    return  (this-> start_time < A2.start_time) ;
}
bool Appointment::operator>  (const Appointment& A2 ) const {
    return  (this->start_time > A2.start_time) ;

}
bool Appointment::operator== (const Appointment& A2 ) const {
    return (this->start_time == A2.start_time  &&  this->end_time == A2.end_time) ;
}
bool Appointment::operator!= (const Appointment& A2 ) const {
    return !(*this == A2 ) ;
}
bool Appointment::operator<= (const Appointment& A2 ) const {
    return (*this == A2 || *this < A2) ;
}
bool Appointment::operator>= (const Appointment& A2 ) const {
    return (*this > A2 || *this == A2) ;
}
