#include <iostream>
#include <cmath>
using namespace std;
// 這一題出的有夠爛 輸出條件沒有說清楚還要自己猜 還以為是照他的順序 結果要反過來 然後7 1要輸出 明明7是質數 都沒有說清楚
// 我唯一的錯誤就是i < abs(a) / 2 要改成i < abs(a) / 2 + 1 來正確判斷質數 不然不會過
int main()
{
    int a, b, c, p = 0;

    while (cin >> a >> b)
    {
        p = 0;
        try
        { //<=sqrt(a)
            for (int i = 2; i < abs(a) / 2 + 1; i++)
            {
                if (a % i == 0)
                {
                    p++;
                }
            }
            if (b == 0)
            {
                throw 'a';
            }
            else if (p == 0 and a != b and b != 1 and a != 1)
            {
                throw 'c';
            }
            else if (a % b != 0)
            {
                throw 'b';
            }

            c = a / b;
            cout << a << " / " << b << " = " << c << endl;
        }
        catch (char i)
        {

            if (i == 'a')
            {
                cout << "Error: Attempted to divide by zero." << endl;
            }
            else if (i == 'c')
            {
                cout << "Error: Divisor is prime." << endl;
            }

            else if (i == 'b')

            {
                cout << "Error: Inaccurate result." << endl;
            }
        }
    }
    return 0;
}