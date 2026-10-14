#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *next;
};
struct queu
{
    node *headptr;
    queu()
    {
        headptr = NULL;
        cout << "Queue declared....!\n";
    }
    void pushh(int m)
    {
        node *newnode = new node;
        newnode->val = m;
        newnode->next = NULL;
        if (headptr == NULL)
        {
            headptr == newnode;
            cout << "Element " << m << " added in back.\n";
            return;
        }
        node *cur = headptr;
        while (cur->next != NULL)
        {
            cur = cur->next;
        }
        cur->next = newnode;
        cout << "Element " << m << " added in back.\n";
    }

};

int main()
{
    queu q;
    for(int i=1;i<=5;i++)
    {
        q.pushh(i*5);
    }
}