#include <iostream>

using namespace std;

template <typename T>
void P(T arr[], int len) {
    cout << "[";
    for (int i=0;i < len-1; i++) {
        cout << arr[i] << ", ";
    }
    if (len) cout << arr[len-1] << "] " << endl;
}
void Print(int arr[], int len) {
    cout << "[";
    for (int i=0;i < len-1; i++) {
        cout << arr[i] << ", ";
    }
    if (len) cout << arr[len-1] << "]" << endl;
}
void Print(double arr[], int len) {
    cout << "[";
    for (int i=0;i < len-1; i++) {
        cout << arr[i] << ", ";
    }
    if (len) cout << arr[len-1] << "]" << endl;
}

int main()
{

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    double arr2[] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0};
    float arr3[] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0};
    char arr4[] = {'p', '1', 'r', 'f'};
    int len = sizeof arr / sizeof arr[0];
    int len2 = sizeof arr2 / sizeof arr2[0];
    int len3 = sizeof arr3 / sizeof arr3[0];
    int len4 = sizeof arr4 / sizeof arr4[0];
    P(arr, len);
    P(arr2, len2);
    P(arr3, len3);
    P(arr4, len4);

    return 0;
}
