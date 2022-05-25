#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

//1

    cout << "We've got 'SW_SHOW' constant: " << SW_SHOW << endl;
    cout << GetLastError();
    DWORD ms = GetTickCount();
    cout << "Milliseconds Passed after computer started: " << ms << endl;

    unsigned int hours = ms / 3600000;
    unsigned int minutes = (ms / 60000) % 60;
    unsigned int seconds = (ms / 1000) % 60;

    cout << "And that is " << hours << " h, " << minutes << " m, " << seconds << " s." << endl;

//2

    char com_name[MAX_COMPUTERNAME_LENGTH + 1];
    unsigned long int arr_len = sizeof(com_name) / sizeof(char);
    bool success = GetComputerName(com_name, &arr_len);

    if (success) {
        cout << "NetBIOS Computer Name: " << com_name << endl;
    } else {
        DWORD err = GetLastError();
        cout << "Function call failed! Error: " << err << endl;
    }

    return 0;
}
