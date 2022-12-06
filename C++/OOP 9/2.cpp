// Write a C++ Program to Count Digits and Spaces using File Handling.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
     char ch;
     ofstream a;
     a.open("9.2.txt");
     a << "hello how are you";
     a.close();
     int s = 0, d = 0;
     ifstream b;
     b.open("9.2.txt");
     while (b)
     {
          b.get(ch);
          if (ch == ' ')
               s++;
          else
               d++;
     }
     cout << "Number of digits are: " << d << endl;
     cout << "Number of spaces are: " << s << endl;
}