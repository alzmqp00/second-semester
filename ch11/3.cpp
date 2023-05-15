#include <iostream>
using namespace std;
#include "dtime.h"
// 編譯和執行這個程式時，需要將 dtime.cpp 文件與 main 函式所在的文件一起編譯
int main()
{
     DT clock, oldClock;

     cout << "Enter the clock ex:10:15\n";
     cin >> clock;

     oldClock = clock;
     clock.advance(15);
     if (clock == oldClock)
          cout << "Something is wrong.";
     cout << "You entered " << oldClock << endl;
     cout << "15 minutes later the time will be "
          << clock << endl;

     clock.advance(2, 15);
     cout << "2 hours and 15 minutes after that\n"
          << "the time will be "
          << clock << endl;

     return 0;
     // g++ dtime.cpp 3.cpp -o clock
}
