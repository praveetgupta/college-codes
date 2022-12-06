// Write a program to declare a class “student” having data members as name and percentage. Write a constructor to initialize these data members. Accept and display data for one student

#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
class student
{
    char name[20];
    float percentage;

public:
    student(char n[20], float p)
    {
        strcpy(name, n);
        percentage = p;
    }
    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Percentage: " << percentage << endl;
    }
};
int main()
{
    char n[20];
    float p;
    system("cls");
    cout << "Enter the name: ";
    cin >> n;
    cout << "Enter the percentage: ";
    cin >> p;
    student s1(n, p);
    s1.display();
    cout<<"Press any key to exit...";
    return 0;
}
