#include <iostream>
#include "Time.h"

using namespace std ;

Time::Time()
{
    hour = minute = 0 ;
}

//_____________________________________________

Time::Time(int h, int m, string d) {
    hour = h ;
    minute = m ;
    daylight = d ;
}
int Time::get_hours() {
    return hour ;
}
int Time::get_minutes()
{
    return minute ;
}
string Time::get_daylight() {
    return daylight ;
}
//_____________________________________________

bool Time::operator==(Time t2) const {
    if (this-> hour == t2.get_hours() && this-> minute == t2.get_minutes() && this->daylight == t2.get_daylight())
        return 1 ;
    else
        return 0 ;

}

//_____________________________________________

bool Time::operator!=(Time t2) const
{
    if (this-> hour != t2.get_hours() || this-> minute != t2.get_minutes() || this->daylight != t2.get_daylight())
        return 1 ;
    else
        return 0 ;
}
bool Time::operator<(Time t2) const
{
    bool not_equal = (*this != t2) ;
    if (not_equal)
    {
        if (this->daylight > t2.get_daylight())
            return 0 ;
        else if (this->daylight < t2.get_daylight())
            return 1 ;
        else
        {
            if (this-> hour < t2.get_hours() )
                return 1 ;
            else if (this-> hour > t2.get_hours() )
                return 0 ;
            else
            {
                if (this-> minute < t2.get_minutes())
                    return 1 ;
                else if (this-> minute > t2.get_minutes())
                    return 0 ;

            }
        }
    }
    else
        return 0 ;

}


bool Time::operator>(Time t2) const
{
    bool not_equal = (*this != t2) ;
    if (not_equal)
    {
        if (this->daylight < t2.get_daylight())
            return 0 ;
        else if (this->daylight > t2.get_daylight())
            return 1 ;
        else
        {
            if (this-> hour > t2.get_hours() )
                return 1 ;
            else if (this-> hour < t2.get_hours() )
                return 0 ;
            else
            {
                if (this-> minute > t2.get_minutes())
                    return 1 ;
                else if (this-> minute < t2.get_minutes())
                    return 0 ;

            }
        }
    }
    else
        return 0 ;

}
ostream& operator<< (ostream& out , Time t) {
    if (t.get_hours() < 10 ) out << "0" ;
    out <<  t.get_hours() << " : "  ;
    if (t.get_minutes() < 10)  out << "0" ;
    out << t.get_minutes() << " " << t.get_daylight() << endl;
    return out ;
}

istream& operator>> (istream& in , Time& t) {
    cout << "enter hrs,min, Caps Lock PM / AM : " ;
    in >> t.hour >> t.minute >> t.daylight ;
    cout << endl;
    return in ;
}
