#include <iostream>
using namespace std;

int main() {
    char ch,ch1;
    cin >>ch1;
    cin.ignore();
    cin.putback(ch1);
    cin.get(ch);
    cout << "你輸入的字符是：" << ch << endl;
    
    return 0;
}