//Write a program to declare class “time”, accept time in HH:MM:SS format, convert it into total seconds and display them

#include<iostream>
using namespace std;

class time
{
    int hh, mm, ss;
    public:
        void getdata()
        {
            cout<<"Enter time in HH:MM:SS format: ";
            cin>>hh>>mm>>ss;
        }
        void showdata()
        {
            cout<<"\n\nTime in HH:MM:SS format: "<<hh<<":"<<mm<<":"<<ss<<endl;
        }
        int totsec()
        {
            return hh*3600+mm*60+ss;
        }
} t;
int main()
{
    t.getdata();
    t.showdata();
    cout<<"Total seconds:"<<t.totsec()<<endl;
    return 0;
}