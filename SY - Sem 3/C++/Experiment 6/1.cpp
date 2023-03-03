// WAP to implement single inheritance from the following figure. Accept and display data for one table.

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
    void accept()
    {
        cout << "Enter the material and price of furniture:" << endl;
        cin >> material >> price;
        cout << "Enter the height and surface area of table:" << endl;
        cin >> height >> sur_area;
    }
    void display()
    {
        cout << "Material:" << material << endl;
        cout << "Price:" << price << endl;
        cout << "Height of table:" << height << endl;
        cout << "Surface area:" << sur_area << endl;
    }

} t;
int main()
{
    t.accept();
    t.display();
    return 0;
}