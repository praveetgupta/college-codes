// WAP to declare a class ‘Staff’ having data members as name and post. Accept this data for 5 staff and display names of staff who are “HOD”

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Staff
{
    string name;
    char post[20];

public:
    void getdata()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter post: ";
        cin >> post;
        cin.ignore();
    }
    void display()
    {
        if (strcmp(post, "HOD") == 0)
        {
            cout << "Name of HOD is: " << name << endl;
        }
    }
} s[5];
int main()
{
    for (int i = 0; i < 5; i++)
    {
        s[i].getdata();
    }
    for (int i = 0; i < 5; i++)
    {
        s[i].display();
    }
    return 0;
}