#include <iostream>
using namespace std;
template <class T>
class vector
{
     T *v;
     int size;

public:
     vector(int m)
     {
          v = new T[size = m];
          for (int i = 0; i < size; i++)
          {
               v[i] = 0;
          }
     }
     void create()
     {
          for (int i = 0; i < size; i++)
          {
               cout << "v[" << j << "]=";
               cin >> v[i];
          }
     }
     void modify()
     {
          int pos;
          cout << "Enter position to make changes ";
          cin >> pos;
          cout << "Enter new value ";
          cin >> v[pos];
     }
     void multiply()
     {
          T sc;
          cout << "Enter scalar number to multiply ";
          cin >> sc;
          for (int i = 0; i < size; i++)
          {
               v[i] *= sc;
          }
     }
     void display()
     {
          int i;
          cout << "(";
          for (i = 0; i < size - 1; i++)
          {
               cout << v[i] << ",";
          }
          cout << v[i] << ")\n";
     }
};
int main()
{
     int size;
     cout << "Enter size of vector ";
     cin >> size;
     vector<int> vi(size);
     vi.create();
     vi.display();
     vi.modify();
     vi.display();
     vi.multiply();
     vi.display();
}