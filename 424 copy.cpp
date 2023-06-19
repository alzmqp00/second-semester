#include <iostream>

using namespace std;

int main()
{
    int a, b, c, p = 0;

    while (cin >> a >> b)
    {

        try
        {

            if (b == 0)
            {
                throw 0;
            }
            if (a % b != 0)
            {
                throw 0;
            }
            for (int i = 2; i < a / 2; i++)
            {
                if (a % i == 0)
                {
                    p++;
                }
            }
            if (p == 0)
            {
                throw 0;
            }
            c = a / b;
            cout << a << " / " << b << " = " << c << endl;
        }
        catch (int i)
        {
            if (b == 0)
            {
                cout << "Error: Attempted to divide by zero." << endl;
            }
            else if (a % b != 0)
            {
                cout << "Error: Inaccurate result." << endl;
            }

            else if (p == 0)
            {
                cout << "Error: Divisor is prime." << endl;
            }
        }
    }
    return 0;
}