#include <iostream>
#include <string>
using namespace std;
class node
{
public:
    int n;
    node *next;
    node *pre;
};
class Link
{
public:
    string mode;
    Link(string m) : mode(m) {}
    node *str = nullptr;
    node *end = nullptr;
    node *cur = nullptr;
    void intert(int num)
    {
        node *newnode = new node;
        newnode->n = num;
        newnode->next = nullptr;
        newnode->pre = nullptr;
        if (str == nullptr)
        {
            str = newnode;
            end = newnode;
        }
        else
        {
            end->next = newnode;
            newnode->pre = end;
            end = newnode;
        }
    }
    void intert(int num, int index)
    {
        int count = 0;
        node *newnode = new node;
        newnode->n = num;
        newnode->next = nullptr;
        newnode->pre = nullptr;
        if (mode == "FIFO")
        {
            cur = str;
            while (count != index)
            {
                count++;
                cur = cur->next;
            }

            cur->pre->next = newnode;
            newnode->pre = cur->pre;
            cur->pre = newnode;
            newnode->next = cur;
        }
        else
        {
            cur = end;
            while (count != index)
            {
                count++;
                cur = cur->pre;
            }

            cur->next->pre = newnode;
            newnode->next = cur->next;
            cur->next = newnode;
            newnode->pre = cur;
        }
        display();
    }
    void display()
    {
        if (mode == "FIFO")
        {
            cur = str;
            while (cur != nullptr)
            {
                cout << cur->n << " ";
                cur = cur->next;
            }
        }
        else
        {
            cur = end;
            while (cur != nullptr)
            {
                cout << cur->n << " ";
                cur = cur->pre;
            }
        }
        cout << endl;
    }
    void remove(int num)
    {
        if (mode == "FIFO")
        {
            cur = str;
            while (cur->n != num)
            {
                cur = cur->next;
            }
            cur->pre->next = cur->next;
            cur->next->pre = cur->pre;
            delete cur;
        }
        else
        {
            cur = end;
            while (cur->n != num)
            {
                cur = cur->pre;
            }
            cur->pre->next = cur->next;
            cur->next->pre = cur->pre;
            delete cur;
        }
        display();
    }
};
int main()
{
    string m;
    cin >> m;

    Link a(m);
    for (int i = 0; i < 5; i++)
    {
        a.intert(i);
    }
    a.display();
    a.remove(2);
    a.remove(3);

    a.intert(6, 1);
    a.intert(7, 3);
    return 0;
}