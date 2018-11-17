#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std ;


class Time
{
    public:
        Time();
        Time (int h , int m , string d) ;
        bool operator== (Time t2) const ;
        bool operator!= (Time t2) const ;
        bool operator< (Time t2) const ;
        bool operator> (Time t2) const ;
        friend istream& operator>> (istream& in , Time& t) ;
        friend ostream& operator<< (ostream& out , Time t) ;
        int get_hours() ;
        int get_minutes() ;
        string get_daylight() ;

    protected:

    private:
        int hour , minute ;
        string daylight ;
};

#endif // TIME_H
