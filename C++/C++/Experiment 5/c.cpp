// Define a class ‘College’ members variables as roll_no, name, course. WAP using constructor with default value as “Computer Engineering” for course. Accept this data for two objects of class and display the data

#include <iostream>
#include <stdlib.h>
using namespace std;
class student{
    public:
    string name;
    string course;
    int percentage;
    student(string c="computer engineering"){
            course=c;
        }
    void putdata(){
        cout<<"\nname,percentage and course of student is:"<<endl<<name<<endl<<percentage<<endl<<course<<endl;
    }
    void getdata(){
        cout<<"enter name and percentage";
        cin>>name>>percentage;
    }
};
int main(){
    student s1;
    student s2;
    s1.getdata();
    s2.getdata();
    s1.putdata();
    s2.putdata();
    return 0;
}
