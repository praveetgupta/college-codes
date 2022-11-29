// Write a program to copy the contents of one file into another. Open "Fisrt.txt” in read (ios::in) mode and "Second.txt" file in write (ios::out) mode. Copy the contents of "First.txt" into "Second.txt". Assume "First.txt" is already created.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
     string line;
     ifstream in{"First.txt"};
     ofstream out{"Second.txt"};
     while (getline(in, line))
     {
          out << line << endl;
     }
}