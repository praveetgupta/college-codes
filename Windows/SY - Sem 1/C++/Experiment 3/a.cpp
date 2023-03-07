// WAP to declare a class ’city’ having data members as name and population. Accept this data for 5 cities and display name of city having highest population

#include <iostream>
#include <string.h>
using namespace std;
class city
{
public:
    char name[100];
    int population;
    void accept()
    {
        cout << "Enter Name of city: ";
        cin >> name;
        cout << "Enter the population of city: ";
        cin >> population;
    }
    void display()
    {
        cout << "Name of city: " << name << endl;
        cout << "Population: " << population << endl;
    }
} c[5];
int main()
{
    int i;
    long max = c[0].population;
    string name = c[0].name;
    for (i = 0; i < 5; i++)
    {
        c[i].accept();
    }
    for (i = 0; i < 5; i++)
    {
        if (c[i].population > max)
        {
            max = c[i].population;
            name = c[i].name;
        }
    }
    cout<<"\nThe city with highest population is: "<< name << endl;
    cout << "Maximum Population: " << max;
}
