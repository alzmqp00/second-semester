#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int *arr = new int[size];

    // 初始化陣列元素
    for(int i = 0; i < size; i++) {
        arr[i] = i;
    }

    // 輸出陣列元素
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 增加陣列大小
    int new_size = 10;
    int *new_arr = new int[new_size];

    // 複製原有的元素到新的陣列中
    for(int i = 0; i < size; i++) {
        new_arr[i] = arr[i];
    }

    // 釋放原有陣列的內存空間
    delete[] arr;

    // 更新陣列指針和大小
    arr = new_arr;
    size = new_size;

    // 添加新的元素到陣列中
    for(int i = 5; i < size; i++) {
        arr[i] = i;
    }

    // 輸出陣列元素
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 釋放新的陣列的內存空間
    delete[] arr;

    return 0;
}
