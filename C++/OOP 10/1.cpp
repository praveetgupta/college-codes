// Write a C++ Program to find Sum of Array elements using function template. (eg. Pass Integer, Float and Double array of 10 elements)
#include <iostream>
using namespace std;
template <class x>
void sum(x a[])
{
     x sum = 0;
     for (int i = 0; i < 10; i++)
          sum += a[i];
     cout << "Sum of array elements is " << sum << endl;
}
int main()
{
     int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     float b[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.11};
     double c[] = {1.11, 2.22, 3.33, 4.44, 5.55, 6.66, 7.77, 8.88, 9.99, 10.11};
     sum(a);
     sum(b);
     sum(c);
}