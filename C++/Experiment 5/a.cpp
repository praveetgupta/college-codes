// Write a program to find the sum of numbers between 1 to n using a constructor where the value of n will be passed to the constructor

#include <iostream>
#include <conio.h>
using namespace std;
class sum
{
    int n;

public:
    sum(int x)
    {
        n = x;
    }
    void display()
    {
        int i, s = 0;
        for (i = 1; i <= n; i++)
        {
            s = s + i;
        }
        cout << "Sum: "<<s;
    }
};
int main()
{
    int x;
    cout << "Enter the value of n: ";
    cin >> x;
    sum s(x);
    s.display();
    cout<<"\n\nPress any key to exit...";
    getch();
}
