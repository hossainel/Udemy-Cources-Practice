#include <iostream>
#include <cmath>
#include <stdexcept>

/*
There can be
logic_error
domain_error
invalid_argument
length_error
out_of_range
range_error
overflow_error
underflow_error
so you have to do
catch(range_error re) {
    cout << re.what() << endl;
}

*/


using namespace std;

double sq(double x) {
    if (x < 0) throw "Negative Number!";
    double sroot = pow(x, 0.5);
    return sroot;
}

int main()
{
    double num;
    cout << "Enter a num: ";
    cin >> num;

    double square_root;
    try {
        square_root = sq(num);
    } catch (const char *text) {
        cout << "ERROR: " << text << endl;
        return 1;
    }
    cout << square_root << endl;

    return 0;
}
