#include <iostream>
using namespace std;

void newL( );

void getInt(int& number);

int main( )
{
    int n;

    getInt(n);
    cout << "Final value read in = " << n <<"\n"<< "End of demonstration.\n";

    return 0;
}

void newL( )
{
    char symbol;
    do
    {  
        cin.get(symbol);
    } while (symbol != '\n');
}

void getInt(int& number)
{
    char ans;
    do
    {
        cout << "Enter input number: ";
        cin >> number;
        cout << "You entered " << number
             << " Is that correct? (yes/no): ";
        cin >> ans;
        newL( );
    } while ((ans == 'N') or (ans == 'n'));
}
