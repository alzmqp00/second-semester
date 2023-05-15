#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{1, 2, 3};
    vector<int> v3;
    v1.assign({6, 7, 8});
    v2.assign(4, 100); // 將 v2 的內容替換為 4 個 100
    v3.assign(v1.begin(), v1.begin() + 3);

    cout << "v1: ";
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << "\n";

    cout << "v2: ";
    for (auto i : v2)
    {
        cout << i << " ";
    }
    cout << "\n";

    cout << "v3: ";
    for (auto i : v3)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
