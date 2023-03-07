// WAP to implement multiple inheritance from the following figure. Accept data of shape, calculate its area and display it.

#include <iostream>
#include <stdlib.h>
using namespace std;
class triangle
{
public:
    int base, height;
    int areaTri;
    void getTri()
    {
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
    }
};
class rectangle
{
public:
    int length, breadth;
    int areaRec;
    void getRect()
    {
        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;
    }
};
class Shape : public triangle, public rectangle
{
public:
    void calcArea()
    {
        areaTri = (0.5 * base * height);
        areaRec = (length * breadth);
        cout << "Area of triangle: " << areaTri << endl;
        cout << "Area of rectangle: " << areaRec << endl;
    }
} s;
int main()
{
    s.getTri();
    s.getRect();
    s.calcArea();

    return 0;
}