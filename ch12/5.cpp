#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip> //控制輸出
using std::cout;
using std::endl;
using std::ifstream;
using std::ios;
using std::ofstream;
using std::setw;

void makeNeat(ifstream &messyFile, ofstream &neatFile, int point, int fieldWidth); // numberAfterDecimalpoint

int main()
{
    ifstream inp;
    ofstream oup;

    inp.open("rawdata.txt");
    if (inp.fail())
    {
        cout << "Input failed.\n";
        exit(1);
    }

    oup.open("neat.txt");
    if (oup.fail())
    {
        cout << "Output failed.\n";
        exit(1);
    }

    makeNeat(inp, oup, 5, 12);

    inp.close();
    oup.close();

    cout << "End\n";
    return 0;
}

// Uses <iostream>, <fstream>, and <iomanip>:
void makeNeat(ifstream &messyFile, ofstream &neatFile,
              int point, int fieldWidth)
{
    neatFile.setf(ios::fixed);
    neatFile.setf(ios::showpoint);
    neatFile.setf(ios::showpos);
    neatFile.precision(point);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos); // 它會顯示正負號
    cout.precision(point);
    while (!messyFile.eof())
    {
        double a;
        messyFile >> a;
        /*if (a > 0)
        {
             cout << "+";
             neatFile << "+";
        }
        else
        {
             neatFile << "-";
             cout << "-";
        }*/
        neatFile << setw(fieldWidth) << a << endl;
        cout << setw(fieldWidth) << a << endl;
    }
}
