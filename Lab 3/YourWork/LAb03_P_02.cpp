#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *next;
};
struct singlylinkedlist
{
    node *head, *tail;

    singlylinkedlist()
    {
        head = NULL;
        tail = NULL;
        cout << "Singly Linked List initialized!\n";
    }
    void enqueue(int x)
    {
        node *cur = new node;
        cur->val = x;
        cur->next = NULL;
        if(head==NULL && tail ==NULL)
        {
            head=tail=cur;
            return;
        }
        tail->next = cur;
        tail = cur;
    }
    void print (){
        cout<<"Singlylist :";
        node *cur = head;
        if(cur==NULL)
        {
            cout<<"List is Empty!\n";
            return;
        }
        while (cur!=NULL)
        {
            cout<<cur->val<<" -> ";
            cur = cur->next;
        }
        cout<<"NULL\n";
        
    }
};
int main()
{
    singlylinkedlist s1;
    s1.enqueue(5);
    s1.enqueue(12);
    s1.enqueue(55);
    s1.enqueue(3);
    s1.enqueue(888);

    s1.print();
    return 0;
}