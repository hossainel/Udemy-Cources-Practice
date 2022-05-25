#include <iostream>

using namespace std;

int main()
{

//1

    int *p1;
    int x1;
    p1 = &x1;

//2

    double a2[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double *p2;
    double *q2;

    p2 = &a2[0];
    q2 = &a2[6];

    while (p2<=q2) cout << *p2++ << " ";
    cout << endl;

    p2 = &a2[0];

    while (q2>=p2) cout << *q2-- << " ";
    cout << endl;

//3
    int a3[] = {1,2,3,4,5,6,7};
    int *p3=a3;

    for (int i=0;i<7;i++) {
        cout << *p3 << " ";
        *p3++;
    } cout << endl;

//4

    double x4 = 3.14;
    double y4 = 2.71;
    double *p4=&x4;

    cout << "This is p for x = " << *p4 << endl;
    p4 = &y4;
    cout << "This is p for y = " << *p4 << endl;

//5

    int x5 = 7;
    int y5 = 6;
    int *p5 = &x5;
    int *q5 = &y5;

    p5 = q5;

    cout << "This is p for x = " << *p5 << endl;

//6

    int x6 = 7;
    double y6 = 6.21;
    int *p6 = &x6;
    double *q6 = &y6;

    *p6 = *q6;

    cout << *p6 << endl;

//7

    int *p7;
    int x7 = 7;
    p7 = &x7;

    *p7 = 100;

    cout << "This is p = " << p7 << endl;
    cout << "This is *p = " << *p7 << endl;
    cout << "This is x = " << x7 << endl;

    return 0;
}
