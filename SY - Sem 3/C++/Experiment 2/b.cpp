//WAP to declare a class ‘student’ having data members roll_no and percentage. Using ‘this’ pointer invoke member functions to accept and display this data for one object of the class

#include <iostream>
using namespace std;
class student
{
private:
    int roll_no;
    float percentage;
public: 
    void getdata()
    {
        cout << "Enter the roll number: ";
        cin >> this->roll_no;
        cout << "Enter the percentage: ";
        cin >> this->percentage;
    }
    void putdata()
    {
        cout << "\nThe roll number is " << this->roll_no << endl;
        cout << "The percentage is " << this->percentage << endl;
    }
};
int main()
{
    student obj;
    obj.getdata();
    obj.putdata();
    return 0;
}