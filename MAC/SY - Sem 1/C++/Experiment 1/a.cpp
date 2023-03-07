//Write a program to declare class ‘student’ having data members as roll_no and name and class. Accept and display data for one object.

#include<iostream>
using namespace std;
class student
{
    int roll_no;
    char name[20];
    public:
        void getdata()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter roll no: ";
            cin>>roll_no;
        }
        void showdata()
        {
            cout<<"\n\nName: "<<name<<endl;
            cout<<"Roll no: "<<roll_no<<endl;
        }
};
int main()
{
    student s;
    s.getdata();
    s.showdata();
    return 0;
}
