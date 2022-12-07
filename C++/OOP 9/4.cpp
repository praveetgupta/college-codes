// Write a C++ Program to Count Occurrence of a given Word using File Handling.
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{

     ofstream a;
     a.open("9.4.txt");
     a << "\"It is a shame for a man to grow old without seeing the beauty and strength of which his body is capable.\" - Socrates";
     a.close();
     ifstream b;
     b.open("9.4.txt");
     int count = 0;
     char ch[20], c[20];
     cout << "Enter word: ";
     cin >> c;
     while (b)
     {
          b >> ch;
          if (strcmp(ch, c) == 0)
               count++;
     }
     cout << "\nOccurrence of word [ " << c << " ] = " << count << "\n";
     b.close();
}