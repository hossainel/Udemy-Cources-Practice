#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Enter some text: ";
    getline(cin, s);
    int n;
    cout << "Enter a number n: ";
    cin >> n;
    ofstream f("test.txt");
    if (f) {
        for (int i=1;i<n;++i) {
            f << s << endl;
        }
    } else {
        cout << "You do not have permissions to write this file." << endl;
    }
    f.close();
    return 0;
}
