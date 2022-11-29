// Write a program to overload the ‘+’ operator so that two strings can be concatenated. Eg:”xyz”+”pqr” then output will “xyzpqr”.
#include <iostream>
#include <string.h>
using namespace std;
class String
{
public:
     char str[20];

public:
     void getstring()
     {
          cout << "Enter String: \n";
          cin >> str;
     }
     void putstring()
     {
          cout << str;
     }
     String operator+(String x)
     {
          String s;
          strcat(str, x.str);
          strcpy(s.str, str);
          return s;
     }
};
int main()
{
     String str1, str2, str3;
     str1.getstring();
     str2.getstring();
     str3 = str1 + str2;
     cout << "Concatenated String is: \n";
     str3.putstring();
}
