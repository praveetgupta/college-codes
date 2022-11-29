#include <iostream>
#include <string>
using namespace std;
class book
{
private:
    string title;
    string author;
    int price;

public:
    void getdata()
    {
        cout << "Enter the title of the book: ";    
        getline(cin, title);
        cout << "Enter the name of the author: ";
        getline(cin, author);
        cout << "Enter the price of the book: ";
        cin >> price;
    }
    void showdata()
    {
        cout << "\n\nThe title of the book is: " << title << endl;
        cout << "The name of the author is: " << author << endl;
        cout << "The price of the book is: " << price << endl;
    }
} S1;
int main()
{
    book S1;
    book *S2;
    S2 = &S1;
    S2->getdata();
    S2->showdata();
    return 0;
}