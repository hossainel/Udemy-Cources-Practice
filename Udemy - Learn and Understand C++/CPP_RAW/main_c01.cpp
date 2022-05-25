#include <iostream>
#include <iomanip>

//using namespace std;

int main()
{
    int year = 2022, mon = 4, day = 20;


    std::cout << "Today is: " << std::setw(2) <<
    std::setfill('0') << day << ":" << std::setw(2) <<
    std::setfill('0') << mon << ":" <<
    year << "." << std::endl;

    std::cout << std::setw (5) << 20 << " Day" << std::endl;
    return 0;
}
