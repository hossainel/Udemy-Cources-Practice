#include <iostream>

using namespace std;

int main()
{
//1
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    //number = 10;
    int square = number * number;
    cout << "Squared number: " << square << endl;
    cout << "Squared number of " << number << " is " << number * number << endl;

//2

    int n1,n2,n3,n4,n5;

    cout << "Enter five numbers use space: ";

    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    /*
    n1=1;
    n2=2;
    n3=3;
    n4=4;
    n5=5;
    */
    int sum = n1 + n2 + n3 + n4 + n5;

    float avg = sum/5.0;

    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << avg << endl;

//3

#define PI 3.14
    cout << "Enter a circle radius: ";
    float radius;

    cin >> radius;
    radius = 10;

    auto circle_area = PI * radius * radius;

    cout << "Circle's radius is " << radius << endl;
    cout << "Circle's area is " << circle_area << endl;

    return 0;
}
