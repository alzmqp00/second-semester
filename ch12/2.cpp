#include <iostream>
#include <fstream>
using std::cout;
using std::ios;
using std::ofstream;
int main()
{
    cout << "opening data.txt for appending";
    ofstream fout;
    fout.open("data.txt", ios::app);
    fout << "5 6\n"
         << "7 8\n";
    fout.close();
    cout << "end" << std::endl;
    return 0;
}

/*ios::app是C++标准库中的一个文件打开模式标志，用于指定文件流的追加模式。

当以追加模式打开文件时，新的数据将被写入到文件的末尾，而不会覆盖原有的内容
。每次写入操作都会将数据追加到文件的末尾，保留之前的内容不受影响。
*/