#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter a person's age: ";
    cin >> age;
    if (age>17) {
        cout << "Person is an adult." << endl;
    } else if (age>13) {
        cout << "Person is a teenager." << endl;
    } else if (age>3) {
        cout << "Person is a kid." << endl;
    } else {
        cout << "Person is a baby." << endl;
    }

    cout << (true && true) << endl;
    cout << (!true) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;
    cout << (false || false) << endl;
    cout << (true || false) << endl;
    cout << (!false) << endl;
    cout << (true || true) << endl;
    cout << (4>5) << endl;
    cout << (5>=3) << endl;



    return 0;
}
