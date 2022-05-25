#include <iostream>

using namespace std;

void Print(int n);
int gld(int n);

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    Print(n);
    cout << gld(n);
    Print(0);

    auto lambda1 = [] (int x) {
        return x * x;
    };

    int result = lambda1(10);

    auto lambda2 = [] (int x, int y) -> int {
        return x * y;
    };

    int result2 = lambda2(18, 3);

    cout << result << endl;
    cout << result2 << endl;

    return 0;
}

void Print(int n) {
    for (int i=0; i<n; i++) cout << "*";
    cout << endl;
}

int gld(int n) {
    return n%10;
}
