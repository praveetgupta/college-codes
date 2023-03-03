// Write a program using function overloading to calculate the sum of 5 float values and sum of 10 integer values

#include <iostream>
using namespace std;
float arr1[5];
int arr2[10];
void add(float arr1[5])
{
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr1[i];
    }
    cout << "Sum of 5 float values is " << sum << endl;
}
void add(int arr2[10])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr2[i];
    }
    cout << "Sum of 10 integer values is " << sum << endl;
}
int main()
{
    cout << "Enter 5 float values" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }
    add(arr1);
    cout << "\nEnter 10 integer values" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr2[i];
    }
    add(arr2);
    return 0;
}