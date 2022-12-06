/*Write a C++ program to implement generic vectors. Include following member
functions: -To create the vector.
a) To modify the value of a given element
b) To multiply by a scalar value.
c) To display the vector in the form (10,20,30,...)*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, i, x, y, z;
    cout << "Enter the size of vector: ";
    cin >> n;
    cout << "Enter the elements of vector: ";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "Enter the index of element to be modified: ";
    cin >> y;
    cout << "Enter the new value of element: ";
    cin >> z;
    v[y] = z;
    cout << "The modified vector is: ";
    for (i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Enter the scalar value: ";
    cin >> x;
    cout << "The vector multiplied by scalar value is: ";
    for (i = 0; i < n; i++)
    {
        cout << v[i] * x << " ";
    }
    cout << endl;
    return 0;
}