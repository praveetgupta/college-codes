//Write a program to demonstrate constructor overloading

#include <iostream>
using namespace std;

class Number {
   private:
    int x;

   public:
    // 1. Constructor with no arguments
    Number() {
        x = 20;
    }

    // 2. Constructor with an argument
    Number(int a) {
        x = 15;
    }

    int getNum() {
        return x;
    }
};

int main() {
    Number a, b(45);
    cout<<"Program to demonstrate constructor overloading";
    cout << "\n\nFirst Number = " << a.getNum() << endl;
    cout << "Second Number = " << b.getNum() << endl;

    return 0;
}

/*
The 45 value is not used in the Number class' constructor with an argument, but it is still passed as an argument because the constructor is defined to take an int argument.
This is an example of constructor overloading, where multiple constructors are defined in a class, each with a different set of parameters.
*/