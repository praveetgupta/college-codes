// WAP to implement multilevel inheritance from the following figure. Accept and display data for one table.

#include <iostream>
#include <stdlib.h>
using namespace std;
class A
{
    int a;

public:
    void geta()
    {
        cout << "Enter a:";
        cin >> a;
    }
    void showa()
    {
        cout << "a=" << a;
    }
};
class B : public A
{
    int b;

public:
    void getb()
    {
        cout << "Enter b:";
        cin >> b;
    }
    void showb()
    {
        cout << "b=" << b;
    }
};
class C : public B
{
    int c;

public:
    void getc()
    {
        cout << "Enter c:";
        cin >> c;
    }
    void showc()
    {
        cout << "c=" << c;
    }
};
int main()
{
    C c;
    c.geta();
    c.getb();
    c.getc();
    c.showa();
    c.showb();
    c.showc();
    return 0;
}
