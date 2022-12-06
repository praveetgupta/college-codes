//virtual base class
#include <iostream>
using namespace std;

class A {
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

class B : public virtual A {
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

class C : public virtual A {
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

class D : public B, public C {
    int d;

public:
    void getd()
    {
        cout << "Enter d:";
        cin >> d;
    }
    void showd()
    {
        cout << "d=" << d;
    }
};

int main()
{
    D d;
    d.geta();
    d.getb();
    d.getc();
    d.getd();
    d.showa();
    d.showb();
    d.showc();
    d.showd();
    return 0;
}