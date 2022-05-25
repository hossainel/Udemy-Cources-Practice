#include <iostream>
#include <string>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};
struct Book {
    int ID;
    string name;
    string author;
    int year;
    static int Count;
};

int Book::Count;

int main()
{

//1

    Date dt;
    cout << "Enter day: ";
    //cin >> dt.day;
    dt.day = 1;
    cout << "Enter month: ";
    //cin >> dt.month;
    dt.month = 1;
    cout << "Enter year: ";
    //cin >> dt.year;
    dt.year = 2000;

    cout << "The date is: " << dt.year << ":" << dt.month << ":" << dt.day << endl;

//2

    Book b[2];
    b[0].author = "person1";
    b[1].author = "person2";
    b[0].name = "book1";
    b[1].name = "book2";
    b[0].year = 1000;
    b[1].year = 2000;
    b[0].Count = 1;
    cout << b[1].Count << endl;

    return 0;
}
