// WAP to find the greatest number among two numbers from two different classes using the friend function

#include <iostream>
#include <stdlib.h>
using namespace std;

class a;
class b
{
    int number;

public:
    b(int x)
    {
        number = x;
    }
    void friend greatest(a a1, b b1);
};

class a
{
    int number;

public:
    a(int x)
    {
        number = x;
    }
    void friend greatest(a a1, b b1);
};

void greatest(a a1, b b1)
{
    if (a1.number > b1.number)
    {
        cout << "\nNumber in class A is greatest i.e. " << a1.number;
    }
    else if (a1.number < b1.number)
    {
        cout << "\nNumber in class B is greatest i.e. " << b1.number;
    }
    else
    {
        cout << "\nNumber in both classes are equal";
    }
}

int main()
{
    int num;
    system("cls");
    cout << "Enter number for class A: ";
    cin >> num;
    a a1(num);

    cout << "\nEnter number for class B: ";
    cin >> num;
    b b1(num);

    greatest(a1, b1);
    cout << "\n";

    cout<<"\nPress any key to exit...";

    return 0;
}
