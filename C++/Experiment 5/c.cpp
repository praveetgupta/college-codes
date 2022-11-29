// Define a class ‘College’ members variables as roll_no, name, course. WAP using constructor with default value as “Computer Engineering” for course. Accept this data for two objects of class and display the data

#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
class College
{
    int roll_no;
    char name[20];
    char course[20];

public:
    College(int r, char n[20], char c[20] = "Computer Engineering")
    {
        roll_no = r;
        strcpy(name, n);
        strcpy(course, c);
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "\nRoll No: " << roll_no << endl;
        cout << "Course: " << course << endl;
    }
};
int main()
{
    int r;
    char n[20], c[20];
    system("cls");
    cout << "Enter the name: ";
    cin >> n;
    cout << "Enter the roll no: ";
    cin >> r;
    College c1(r, n);
    cout << "Enter the name: ";
    cin >> n;
    cout << "Enter the roll no: ";
    cin >> r;
    College c2(r, n);
    c1.display();
    c2.display();
    cout << "\n\nPress any key to exit...";
    getch();
}
