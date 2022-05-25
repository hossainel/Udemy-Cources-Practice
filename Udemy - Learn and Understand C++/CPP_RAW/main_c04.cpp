#include <iostream>

using namespace std;

int main()
{

//1

    int n;

    cout << "Enter number n: ";
    cin >> n;

    int sum = 0;
    for (int i=1; i <=n; i++) {
        int number;

        cout << "Enter " << i << " number: ";
        cin >> number;
        if (number<0) continue;
        sum = sum + number;
    }
    cout << "The sum of entered number is " << sum << "." << endl;

//2

    //int n;

    cout << "Enter number n: ";
    cin >> n;
    //int sum=0;
    sum=0;

    int i = 1;
    while (i <= n) {
        int number;
        cout << "Enter " << i << " number: ";
        cin >> number;
        sum = sum + number;
        i++;
    }
    cout << "The sum of entered number is " << sum << "." << endl;

//3

    //int n;

    cout << "Enter number n: ";
    cin >> n;
    //int sum = 0;
    sum=0;
    //int i = 1;
    i = 1;

    do {
        if (n==0) break;
        int number;
        cout << "Enter " << i << " number: ";
        cin >> number;
        sum = sum + number;
        n--;
    } while (n > 0);
    cout << "The sum of entered number is " << sum << "." << endl;

//4

    int arr[5]={1,2,3,4,5};

    for (int i : arr) {
        cout << "The array has " << i << "." << endl;
    }

//5

    //int i=1;
    AGAIN:
        cout << i << endl;
        i++;
        if (i<=10) goto AGAIN;

//6

    cout << "while loop input <1 to break" << endl;
    while (true) {
        cin>>i;
        if (i>0) break;
    }

    cout << "for loop input <1 to break" << endl;
    for (;;) {
        cin>>i;
        if (i>0) break;
    }

//7

    for (int i=0;i<10;i++) {
        for (int j=0;j<i;j++) {
            cout << "*";
        }
        cout << endl;
    }

//8

    char a[10] = {'H','E','L','L','O','W','O','R','D','\0'};
    cout << a << endl;
    char b[10]= "HELLOWORD";
    cout << b << endl;
    return 0;
}
