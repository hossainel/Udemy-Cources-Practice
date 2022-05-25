#include <string>

#ifndef DATE_H
#define DATE_H

class Date {
    int day;
    int month;
    int year;
    std::string GetMonthName() const;
    public:
        Date (int d, int m, int y);
        void SetDate (int d, int m, int y);
        void Print() const;
        void PrintNice() const;

        int GetDay() const;
        int GetMonth() const;
        int GetYear() const;

        void SetDay(int d);
        void SetMonth(int m);
        void SetYear(int y);
};

#endif // DATE_H
