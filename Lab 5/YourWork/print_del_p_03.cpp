#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *next;
};

struct sstack
{
    node *top;
    sstack()
    {
        top = NULL;
        cout << "Linked list stack started---"<<endl;
    }
    void push(int a)
    {
        node *newnode = new node;
        newnode->val = a;
        newnode->next = top;
        top = newnode;
    }
    int pop()
    {
        if (top == NULL)
        {
            cout << "Stack is empty " << endl;
            return -1;
        }
        node *temp = top;
        int poppedval = temp->val;
        top = top->next;
        delete temp;
        return poppedval;
    }
    void printt()
    {
        if (top == NULL)
        {
            cout << "Empty stack" << endl;
            return;
        }
        cout << "Stack elements top to bottom :" << endl;
        node *cur = top;
        while (cur != NULL)
        {
            cout << cur->val <<endl;
            cur = cur->next;
        }
        cout <<  endl;
    }
};
int main()
{
    sstack m;
    for(int i=1;i<=7;i++){
        m.push(i*i*5);
    }
    cout<<endl<<"Elements : "<<endl;
    m.printt();
    cout<<"\nLast del element : "<<m.pop()<<endl;
    cout<<"\nAfter poping last element: \n";
    m.printt();
}
