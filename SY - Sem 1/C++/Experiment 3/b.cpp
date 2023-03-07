/*WAP to declare a class ‘Account’ having data members as Account no. and balance 
.Accept this data for 10 accounts and give interest of 10% where balance is equal or 
greater than 5000 and display them
*/

#include <iostream>
using namespace std;
class Account
{
public:
    int accno;
    float balance;
    void accept()
    {
        cout << "Enter Account No: ";
        cin >> accno;
        cout << "Enter Balance: ";
        cin >> balance;
    }
    void display()
    {
        cout << "\nAccount No: " << accno << endl;
        cout << "Balance: " << balance << endl;
    }
} a[10];
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        a[i].accept();
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i].balance >= 5000)
        {
            a[i].balance = a[i].balance + (a[i].balance * 0.1);
        }
    }
    for (i = 0; i < 10; i++)
    {
        a[i].display();
    }
}
