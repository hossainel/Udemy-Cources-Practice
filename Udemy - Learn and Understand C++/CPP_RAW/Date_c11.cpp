#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

string Date::GetMonthName () const {
    static string months[] = {
        "January", "Februray", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
    };
    return months[Date::month-1];
}
Date::Date (int d, int m, int y) { this->SetDate(d,m,y); }
void Date::SetDate (int d, int m, int y) {
    SetDay(d);
    SetMonth(m);
    SetYear(y);
}
void Date::Print() const { cout << this->month << "-" << this->day << "-" << this->year << endl; }
void Date::PrintNice() const { cout << day << " " << GetMonthName() << ", " << year << endl; }

int Date::GetDay() const { return this->day; }
int Date::GetMonth() const { return this->month; }
int Date::GetYear() const { return this->year; }

void Date::SetDay(int d) {
    if (d<0 || d>31) {
        throw logic_error ("Day out of range.");
    }
    this->day = d;
}
void Date::SetMonth(int m) {
    if (m<0 || m>12) {
        throw logic_error ("Month out of range.");
    }
    this->month = m;
}
void Date::SetYear(int y) {
    if (y<0) {
        throw logic_error ("Year out of range.");
    }
    this->year = y;
}
