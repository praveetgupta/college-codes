// Write a program to declare class “time”, accept time in HH:MM:SS format, convert it into total seconds and display them
#include <iostream>

using namespace std;

class Time
{
    int seconds;
    int hh, mm, ss;

public:
    void getData()
    {
        cout << "Enter time" << endl;
        cout << "Hours: ";
        cin >> hh;
        cout << "Minutes: ";
        cin >> mm;
        cout << "Seconds: ";
        cin >> ss;
    }
    void conversion()
    {
        seconds = hh * 3600 + mm * 60 + ss;
    }
    void showData()
    {
        cout << "\nThe time is = " << hh << ":" << mm << ":" << ss << endl;
        cout << "Time in total seconds: " << seconds;
    }
};

int main()
{
    Time T; // creating objects

    T.getData();
    T.conversion();
    T.showData();

    return 0;
}