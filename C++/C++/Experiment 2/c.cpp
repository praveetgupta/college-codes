// Write a program to demonstrate the use of nested class

#include <iostream>
using namespace std;
class A
{
public:
    class B
    {
    private:
        int num;

    public:
        void getdata()
        {
            num = 99999;
        }
        void putdata()
        {
            cout << "The number is " << num <<"\n\n";
        }
    };
};
int main()
{
    cout << "\n\nThis is an example of nested classes in C++" << endl;
    A ::B obj;
    obj.getdata();
    obj.putdata();
    return 0;
}