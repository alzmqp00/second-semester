#include <iostream>
#include "add.h"
using namespace std;
int main()
{
    int x, y;
    cout << "two number: " << endl;
    cin >> x >> y;
    int sum = myspace::add(x, y);
    cout << "add two number: " << sum << endl;
    return 0;
}