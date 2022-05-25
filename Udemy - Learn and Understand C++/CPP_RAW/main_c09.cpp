#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <map>
#include <functional>
#include <cmath>

using namespace std;

double Calculate (function<double(double)> f, double x) {
    double y = f(x) * f(x) * f(x);
    return y;
}

double test1(double x) {
    return x * x;
}

double test2(double x) {
    return x * x - 2 * x + 1;
}

int main()
{

//1

    vector<int> vec1 (10);
    vector<double> vec2 (4.0);
    vector<int> vec3;
    vector<int> vec4 (5,33);
    for (int i=0;i<vec4.size();i++) {
        cout << vec4[i] << " ";
    }
    cout << endl;

    int e1 = vec1.at(0);

    bool emp1 = vec2.empty();
    cout << vec3.size() << endl;
    vec3.push_back(100);
    cout << vec3.size() << endl;
    vector<int> vec5 {5,4,3,2,1};

    for (int i : vec5) {
        cout << i << " ";
    }
    cout << endl;
    vec5.pop_back();
    for (int i : vec5) {
        cout << i << " ";
    }
    cout << endl;

//2

    deque<int> deq1 (10);
    deque<double> deq2 (4.0);
    deque<int> deq3;
    deque<int> deq4 (5,33);
    for (int i=0;i<deq4.size();i++) {
        cout << deq4[i] << " ";
    }
    cout << endl;

    int d1 = deq1.at(0);

    bool dmp1 = deq2.empty();
    cout << deq3.size() << endl;
    deq3.push_back(100);
    cout << deq3.size() << endl;
    deque<int> deq5 {5,4,3,2,1};

    for (int i : deq5) {
        cout << i << " ";
    }
    cout << endl;
    deq5.pop_back();
    deq5.push_front(50);
    for (int i : deq5) {
        cout << i << " ";
    }
    cout << endl;

//3

    string s1 = "Jey";
    string s2 = "Hay there how are you?";
    cout << endl;
    string s4 = s2 + s1;
    s4.push_back('.');
    cout << s4 << endl;

    char c1 = s1.at(0);
    char c2 = s1[0];

    bool cmp1 = s1.empty();
    cout << s2.size() << endl;

    for (char i : s2) {
        cout << i;
    }
    cout << endl;
    string s3;
    getline(cin, s3);
    cout << s3 << endl;

//4

    map<int, string> numbers;

    numbers[0] = "Zero";
    numbers[1] = "One";
    numbers[2] = "Two";

    cout << numbers[0] << endl;
    cout << numbers.at(0) << endl;

    bool mmp = numbers.empty();

    auto it = numbers.find(22);

    if (it == numbers.end()) {
        cout << "Key not found!" << endl;
    }

    map<int, string> days {
        {1, "Saturday"},
        {2, "Sunday"},
        {3, "Monday"},
        {4, "Tuesday"},
        {5, "Wednessday"},
        {6, "Thrusday"},
        {7, "Friday"},
    };

    for (int i=1; i <=7; i++) {
        cout << days[i] << endl;
    }
    cout << endl;

//5

    double a = Calculate(test1, 5);
    double b = Calculate(test2, 10);

    cout << a << " " << b << endl;

    //lambda function

    function<int(int,int)> f = [] (int a, int b) -> int {return a*b;};
    int res = f(10, 10);

    cout << res << endl;

    return 0;
}
