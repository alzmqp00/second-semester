#include "dtime.h"

int main()
{
    DT time1(9, 30); // DT obj 9:30 AM
    DT time2;        //  DT obj 0:00

    time2.advance(45); //  time2 + 45 min

    std::cout << "Time 1: " << time1 << std::endl;
    std::cout << "Time 2: " << time2 << std::endl;

    if (time1 == time2)
    {
        std::cout << "Time 1 and Time 2 are the same." << std::endl;
    }
    else
    {
        std::cout << "Time 1 and Time 2 are different." << std::endl;
    }

    return 0;
}
