#include <iostream>
#include <fstream>
#include <cstdlib> //for exit
using std::cout;
using std::ifstream;
using std::ios;
using std::ofstream;
int main()
{
    ofstream oup;
    ifstream inp;
    inp.open("input.txt");
    if (inp.fail())
    {
        cout << "input.txt failed.\n";
        exit(1);
    }
    oup.open("output.txt");
    if (oup.fail())
    {
        cout << "output.txt failed\n";
        exit(1);
    }
    int first, second, third;
    inp >> first >> second >> third;
    oup << "The sum of three number is " << first + second + third;

    inp.close();
    oup.close();
    return 0;
}