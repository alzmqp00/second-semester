#include <iostream>
using namespace std;
struct Node
{
    int data;   // 儲存節點的值
    Node *next; // 指向下一個節點的指標
};
Node *createLinkedList()
{
    Node *head = nullptr; // 鏈結串列的頭指標
    Node *tail = nullptr; // 鏈結串列的尾指標

    // 添加節點到鏈結串列
    for (int i = 1; i <= 5; ++i)
    {
        Node *newNode = new Node(); // 建立新節點
        newNode->data = i;          // 設定節點的值
        newNode->next = nullptr;    // 設定下一個節點的指標為空

        if (head == nullptr)
        {
            // 如果鏈結串列是空的，將新節點設定為頭節點
            head = newNode;
            tail = newNode;
        }
        else
        {
            // 如果鏈結串列不是空的，將新節點連接到尾節點
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head; // 回傳鏈結串列的頭指標
}
void printLinkedList(Node *head)
{
    Node *current = head; // 從頭節點開始

    while (current != nullptr)
    {
        cout << current->data << " "; // 列印目前節點的值
        current = current->next;      // 移動到下一個節點
    }

    cout << endl;
}
int main()
{
    Node *linkedList = createLinkedList(); // 創建鏈結串列
    printLinkedList(linkedList);           // 列印鏈結串列

    return 0;
}
