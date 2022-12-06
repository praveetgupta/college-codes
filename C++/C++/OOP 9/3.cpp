// Write a C++ Program to Count Words using File Handling.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
     char ch;
     ofstream a;
     a.open("9.3.txt");
     a << "my name is praveet";
     a.close();
     int w = +1;
     ifstream b;
     b.open("9.3.txt");
     while (b)
     {
          b.get(ch);
          if (ch == ' ' || ch == '.')
               w++;
     }
     cout << "Number of words are: " << w << endl;
}