#include <iostream>
#include <string> 
using namespace std;

void newL( );

int main( )
{
    string f, lastN, recordN; 
    string motto = "Your records are our records."; 

    cout << "Enter your first and last name:\n";
    cin >> f >> lastN;
    newL( );

    recordN = lastN + ", " + f;
    cout << "Your name in our records is: ";
    cout << recordN << endl;

    cout << "Our motto is\n"
         << motto << endl;
    cout << "Please suggest a better (one line) motto:\n";
    getline(cin, motto);
    cout << "Our new motto will be:"<<endl;
    cout << motto << endl;

    return 0;
}

//清除多餘字符  
void newL( )
{
    char nextChar;
    do
    {
        cin.get(nextChar);
    } while (nextChar != '\n');
}

