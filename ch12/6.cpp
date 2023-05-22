#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream oup;
    string str;
    getline(cin, str);
    oup.open("output.txt");
    if (oup.is_open())
    {
        oup << str;
        oup.close();
        cout << "success" << endl;
    }
    else
    {

        cout << "failed" << endl;
    }

    return 0;
}