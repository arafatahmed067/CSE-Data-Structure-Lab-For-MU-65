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
        cout << "Here The Link List started" << endl;
    }
    bool ifempty()
    {
        return top == NULL;
    }
};
int main()
{
    sstack s;
    if (s.ifempty())
    {
        cout << "Stack have no element" << endl;
    }
}