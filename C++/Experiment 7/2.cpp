// Write a program using function overloading to calculate the sum of 5 float values and sum of 10 integer values

#include <iostream>
using namespace std;
class calculate
{
public:
    float a[5];
    int b[10];
    float float_sum;
    int int_sum=0;
    void floatSum()
    {
        cout << "Enter 5 float values: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
            float_sum += a[i];
        }
        cout << "Sum of 5 float values is " << float_sum << endl;
    }
    void intSum()
    {
        cout << "Enter 10 integer values: ";
        for (int i = 0; i < 10; i++)
        {
            cin >> b[i];
            int_sum += b[i];
        }
        cout << "Sum of 10 integer values is " << int_sum << endl;
    }
};
int main()
{
    calculate c;
    c.floatSum();
    c.intSum();
    return 0;
}