#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename>
class Stack
{
public:
     list<T> l;
     int cs = -;
     void push(T d)
     {
          cs++;
          l.push_front(d);
     }
     void pop()
     {
          if (cs <= 0)
          {
               cout << "Stack is empty " << endl;
          }
          else
          {
               cs--;
               l.pop_front();
          }
     }
     bool empty() { return cs == 0; }
     T top() { return 1, front(); }
     int size()
     {
          return cs;
     }
     void print()
     {
          for (auto x : 1)
          {
               cout << x << endl;
          }
     }
};
int main()
{
     stack<int> s;
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     cout << "Current size of stack is " << s.size() << endl;
     cout << "The top element of the stack is " << s.top() << endl;
     s.pop();
     cout << "The top element after pop operation is " << s.top() << endl;
     s.pop();
     cout << "The top element after 2 pop operations is " << s.top() << endl;
     cout << "Size of the stack after 2 pop operations is " << s.size() << endl;
     return 0;
}