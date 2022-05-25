#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string ROT13(string s);

int main()
{
    string s, text, file_path;
    cout << "Enter text (--- in to end): " << endl;
    while(getline(cin,s)) {
        if (s!="---") {
            text += s + "\n";
        } else break;
    }
    cout << "Enter the name of the file: ";
    getline(cin, file_path);
    ofstream f(file_path);

    if (!f) {
        cout << "Error! cannot write to the file." << endl;
        return 1;
    }

    f << ROT13(text);
    f.close();

    return 0;
}

string ROT13(string s) {
    for (char &c : s) {
        if ((c>='a' && c<='z') || (c>='A' && c<='Z')) {
            if ((c < 'a'+13 && c>'Z') || c < 'A'+13) {
                c = c + 13;
            } else {
                c = c - 13;
            }
        }
    }
    return s;
}
