/*Write a program to implement Unary - operator when used with the object so that
the numeric data member of the class is negated.*/
#include <iostream>
using namespace std;
class unary
{
    int a;

public:
    void getdata()
    {
        cout << "Enter a number: ";
        cin >> a;
    }
    void showdata()
    {
        cout << "a = " << a << endl;
    }
    void operator-()
    {
        a = -a;
    }
};
int main()
{
    unary u;
    u.getdata();
    u.showdata();
    -u;
    u.showdata();
    return 0;
}
