// Write a program to declare class ‘Book’ having data members as book_name, price and no. of pages. Accept this data for 2 objects and display the name of book having greater price.

#include <iostream>
using namespace std;
class book
{
public:
    char book_name[20];
    float price;
    int no_of_pages;
    void getdata()
    {
        cout << "Enter book name: ";
        cin >> book_name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter no. of pages: ";
        cin >> no_of_pages;
    }
    void showdata()
    {
        cout << "\n\nBook name: " << book_name << endl;
        cout << "Price: " << price << endl;
        cout << "No. of pages: " << no_of_pages << endl;
    }
} b1, b2;
int main()
{
    b1.getdata();
    b2.getdata();
    b1.showdata();
    b2.showdata();

    if (b1.price > b2.price)
    {
        cout << "\n\nThe book having greater price is: " << b1.book_name;
    }
    else
    {
        cout << "\n\nThe book having greater price is: " << b2.book_name;
    }

    return 0;
}
