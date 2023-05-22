#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inp;
    ofstream oup;
    inp.open("input.txt");
    oup.open("output.txt");
    int first, second, third;
    inp >> first >> second >> third;
    oup << "The sum of three number is " << first + second + third;

    inp.close();
    oup.close();

    return 0;
}
