// Write a C++ Program to Count Words using File Handling.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
     char ch;
     ofstream a;
     a.open("9.3.txt");
     a << "My name is Rudolph Smith and I am 17 years old.";
     a.close();
     int w = -1;
     ifstream b;
     b.open("9.3.txt");
     while (b)
     {
          b.get(ch);
          if (ch == ' ' || ch == '.')
               w++;
     }
     cout << "Numebr of words are: " << w << endl;
}