//Write a program using function overloading to calculate the area of a laboratory (which is rectangular in shape) and area of Classroom (which is square in shape).

#include <iostream>
using namespace std;

class Area
{
    public:
        void area(int l, int b)
        {
            cout << "Area of the laboratory is " << l*b << " sq. units." << endl;
        }
        void area(int s)
        {
            cout << "Area of the classroom is " << s*s << " sq. units." << endl;
        }
};
int main()
{
    Area a;
    a.area(10, 20);
    a.area(10);
    return 0;
}