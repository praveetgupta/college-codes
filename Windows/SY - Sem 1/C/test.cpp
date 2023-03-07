#include <iostream>
using namespace std;
/* start of Enclosing class declaration */
class Enclosing
{
private:
    int x;
    /* start of Nested class declaration */
    class Nested
    {
        int y;
        void NestedFun(Enclosing *e)
        {
            cout << e->x; // works fine: nested class can access
                          // private members of Enclosing class
        }
    }; // declaration Nested class ends here
};     // declaration Enclosing class ends here
int main()
{
}