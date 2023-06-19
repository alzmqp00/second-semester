// 我卡swap 忘記要/2 還有不知道怎麼偵測換行
#include <iostream>
#include<stack>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a[1000];
    int i = 0;
    while (cin >> a[i])
    {

        i += 1;
        if (cin.get() == '\n') // 檢查是否為換行符號
            break;
    }
    cout << "First In First Out (Queue) order : ";
    for (int j = 0; j < i; j++)
    {
        cout << a[j] << " ";
    }
    cout << endl;
    for (int j = 0; j < i / 2; j++) // 只需要交換前一半和後一半的元素即可
    {
        swap(a[j], a[i - 1 - j]);
    }

    cout << "First In Last Out (Stack) order : ";
    for (int j = 0; j < i; j++)
    {
        cout << a[j] << " ";
    }
    cout << endl;
}
