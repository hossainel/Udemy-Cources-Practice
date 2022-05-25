#include <iostream>

using namespace std;

class Date {
        int day;
        int month;
        int year;

    public:
        void SetDate (int d, int m, int y) {
            this->day = d;
            this->month = m;
            this->year = y;
        }
        void Print() const {
            cout << this->month << "/"
            << this->day << "/"
            << this->year << endl;
        }
        int GetDay () const { return this->day; }
        int GetMonth () const { return this->month; }
        int GetYear () const { return this->year; }

        void SetDay (int x) { this->day=x; }
        void SetMonth (int x) { this->month=x; }
        void SetYear (int x) { this->year=x; }
};


int main()
{
    Date dt;
    Date dt2;
    dt.SetDate(12,5,2000);
    dt2.SetDate(10,10,2001);
    dt.Print();
    dt2.Print();

    Date dt1;
    int d,m,y;
    cout << "Enter date use space to saperate the d m y: ";
    cin >> d >> m >> y;

    dt1.SetDate(d,m,y);

    dt1.Print();

    cout << "Month: " << dt1.GetMonth() << endl;
    dt1.SetMonth(10);
    cout << "Month: " << dt1.GetMonth() << endl;


    return 0;
}
