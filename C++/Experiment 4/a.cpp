// WAP to create two classes result1 and result 2 which stores the marks of the students. Read the values of marks for both class objects and compute the average of two results

#include <iostream>
#include <conio.h>
using namespace std;

class result1;
class result2
{
    int m;

public:
    void getdata()
    {
        cout << "Enter the marks of Student 2: ";
        cin >> m;
    }
    void friend average(result1 r1, result2 r2);
};

class result1
{
    int m;

public:
    void getdata()
    {
        cout << "Enter the marks of Student 1: ";
        cin >> m;
    }
    void friend average(result1 r1, result2 r2);
};

void average(result1 r1, result2 r2)
{
    cout << "Average of the marks of both students is: " << float(r1.m + r2.m) / 2;
}

int main()
{
    system("cls");
    result1 r1;
    result2 r2;
    r1.getdata();
    r2.getdata();
    average(r1, r2);
    return 0;
}