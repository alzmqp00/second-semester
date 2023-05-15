#include <iostream>
using namespace std;

class DT
{
public:
    DT(int hour1, int min1);
    DT();
    int gethour();
    int getmin();
    void advance(int minadd);
    void advance(int hour, int minadd);

private:
    int hour, min;
    static void readmin(int &min1);
    static void readhour(int &hour1);
    static int toint(char c);
    friend bool operator==(const DT &time1, const DT &time2);
    friend istream &operator>>(istream &inp, DT &OJ);
    friend ostream &operator<<(ostream &oup, DT &OJ);
    //&用來取得operator>>函數的地址。
    // 這樣做的目的是讓這個函數可以被重載，並且可以在其他地方被調用。
};
