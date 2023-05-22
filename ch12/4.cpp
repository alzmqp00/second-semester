#include <fstream>
#include <iostream>
#include <cstdlib>

using std::cout;
using std::ifstream;
using std::ofstream;

int main()
{
    ofstream oup;
    ifstream inp;
    inp.open("story.txt");
    oup.open("numstory.txt");

    if (inp.fail())
    {
        cout << "input failed\n";
        exit(1);
    }
    if (oup.fail())
    {
        cout << "output failed\n";
        exit(1);
    }

    char next;
    int n = 1;
    oup << n << " ";
    while (!inp.eof())
    {

        inp.get(next); // get才能讀取\n cin會跳過space和\n
        if (next == '\n')
        {
            n += 1;
            oup << next;
            oup << n << " ";
        }
        else
        {
            oup << next;
        }
    }
    inp.close();
    oup.close();
    return 0;
}
