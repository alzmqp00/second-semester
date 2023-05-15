#include <iostream>
using namespace std;
typedef int* P;
void sneaky(P temp);
int main( )
{    P p;
    p = new int;
    *p = 77;
    cout << "Before: "<< *p << endl;
    sneaky(p);
    cout << "After: " << *p << endl;
   return 0;
}
void sneaky(P temp)
{
    *temp = 99;
    cout << "Inside function call *temp == "
         << *temp << endl;
}
