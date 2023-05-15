#include <iostream>
#include <cctype>
#include <cstdlib>
#include "dtime.h"
using namespace std;
// Uses iostream and cstdlib:
DT::DT(int hour1, int min1)
{
    if (hour1 < 0 || hour1 > 24 || min1 < 0 || min1 > 59)
    {
        cout << "Illegal argument to DT constructor.";
        exit(1);
    }
    else
    {
        hour = hour1;
        min = min1;
    }

    if (hour == 24)
        hour = 0;
}

DT::DT()
{
    hour = 0;
    min = 0;
}

int DT::gethour()
{
    return hour;
}

int DT::getmin()
{
    return min;
}

void DT::advance(int minadd)
{
    int grossmins = min + minadd;
    min = grossmins % 60;

    int hourAdjustment = grossmins / 60;
    hour = (hour + hourAdjustment) % 24;
}

void DT::advance(int houradd, int minadd)
{
    hour = (hour + houradd) % 24;
    advance(minadd);
}

bool operator==(const DT &time1, const DT &time2)
{
    return (time1.hour == time2.hour && time1.min == time2.min);
}

// Uses iostream:
ostream &operator<<(ostream &oup, const DT &OJ)
{
    oup << OJ.hour << ':';
    if (OJ.min < 10)
        oup << '0';
    oup << OJ.min;
    return oup;
}

// Uses iostream:
istream &operator>>(istream &ins, DT &OJ)
{
    DT::readhour(OJ.hour);
    DT::readmin(OJ.min);
    return ins;
}

int DT::toint(char c)
{
    return (int(c) - int('0'));
}

void DT::readmin(int &min1)
{
    char c1, c2;
    cin >> c1 >> c2;

    if (!(isdigit(c1) && isdigit(c2)))
    {
        cout << "Error illegal input to readmin\n";
        exit(1);
    }

    min1 = toint(c1) * 10 + toint(c2);

    if (min1 < 0 || min1 > 59)
    {
        cout << "Error illegal input to readmin\n";
        exit(1);
    }
}

void DT::readhour(int &hour1)
{
    char c1, c2;
    cin >> c1 >> c2;
    if (!(isdigit(c1) && (isdigit(c2) || c2 == ':')))
    {
        cout << "Error illegal input to readhour\n";
        exit(1);
    }

    if (isdigit(c1) && c2 == ':')
    {
        hour1 = DT::toint(c1);
    }
    else
    {
        hour1 = DT::toint(c1) * 10 + DT::toint(c2);
        cin >> c2; // discard ':'
        if (c2 != ':')
        {
            cout << "Error illegal input to readhour\n";
            exit(1);
        }
    }

    if (hour1 == 24)
        hour1 = 0; // Standardize midnight as 0:00

    if (hour1 < 0 || hour1 > 23)
    {
        cout << "Error illegal input to readhour\n";
        exit(1);
    }
}
