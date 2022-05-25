#include <iostream>
#include <string>
#include <stdexcept>
#include "Date.h"

using namespace std;

class DummyClass {
    int dummy_attr1;
    char dummy_attr2;
    public:
        DummyClass() : dummy_attr1(0), dummy_attr2('E') { cout << "Hello constructor!!!" << endl; }
        DummyClass(int param) : dummy_attr1(param), dummy_attr2('P') { cout << "2nd Constructor here! " << param << endl; }
        DummyClass(char param) : dummy_attr1(7), dummy_attr2(param) { cout << "3rd Constructor here! " << param << endl; }
        ~DummyClass() { cout << "Disrtuctor is been called!" << endl; }
        void Print() const {
            cout << "dummy_attr1 = " << dummy_attr1 << endl;
            cout << "dummy_attr2 = " << dummy_attr2 << endl;
        }
        friend int Add(DummyClass dc1, DummyClass dc2) { return dc1.dummy_attr1 + dc2.dummy_attr1; }
};


class xDate {
    int day;
    int month;
    int year;
    string GetMonthName () const {
        static string months[] = {
            "January", "Februray", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
        };
        return months[month-1];
    }
    public:
        xDate (int d, int m, int y) { this->SetDate(d,m,y); }
        void SetDate (int d, int m, int y) {
            SetDay(d);
            SetMonth(m);
            SetYear(y);
        }
        void Print() const { cout << this->month << "-" << this->day << "-" << this->year << endl; }
        void PrintNice() const { cout << day << " " << GetMonthName() << ", " << year << endl; }

        int GetDay() const { return this->day; }
        int GetMonth() const { return this->month; }
        int GetYear() const { return this->year; }

        void SetDay(int d) {
            if (d<0 || d>31) {
                throw logic_error ("Day out of range.");
            }
            this->day = d;
        }
        void SetMonth(int m) {
            if (m<0 || m>12) {
                throw logic_error ("Month out of range.");
            }
            this->month = m;
        }
        void SetYear(int y) {
            if (y<0) {
                throw logic_error ("Year out of range.");
            }
            this->year = y;
        }

};


template <typename TYPE>

class DummyGeneric {
    TYPE Attribute;
    public:
        DummyGeneric(TYPE param) : Attribute (param) {

        }
        TYPE GetAttribute() const { return this->Attribute; }
        void SetAttribute(TYPE a) { this->Attribute = a; }
};


int main()
{
//1
    DummyClass dummy1;
    dummy1.Print();
    DummyClass dummy2(9);
    dummy2.Print();
    DummyClass dummy3('K');
    dummy3.Print();
//2

    Date dt1(1,1,2000);
    Date dt2(dt1);

    dt1.PrintNice();
    dt2.PrintNice();
//3
    DummyClass dc1;

    { DummyClass dc2; }
    cout << "Hi!" << endl;
//4
    DummyClass d1(100), d2(200);
    int res = Add(d1,d2);

    cout << res << endl;
//5
    DummyGeneric<int> dummy_int(10);
    DummyGeneric<double> dummy_double(10.5);
    DummyGeneric<char> dummy_char('E');

    dummy_char.SetAttribute('P');

    return 0;
}
