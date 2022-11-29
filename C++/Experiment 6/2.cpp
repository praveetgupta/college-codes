// WAP to implement multilevel inheritance from the following figure. Accept and display data for one table.

#include <iostream> 
using namespace std;
class furniture
{
public:
    char material[20];
    int price;
};
class table : public furniture
{
public:
    float height, sur_area;
};
class dining_table : public table
{
public:
    int noofchairs;
    void accept()
    {
        cout << "Enter the material and price of furniture:" << endl;
        cin >> material >> price;
        cout << "Enter the height and surface area of table:" << endl;
        cin >> height >> sur_area;
        cout << "Enter the no of charis of dining table:" << endl;
        cin >> noofchairs;
    }
    void display()
    {
        cout << "Material:" << material << endl;
        cout << "Price:" << price << endl;
        cout << "Height of table:" << height << endl;
        cout << "Surface area:" << sur_area << endl;
        cout << "No of chairs:" << noofchairs;
    }
} t1;
int main()
{
    t1.accept();
    t1.display();
    return 0;
}