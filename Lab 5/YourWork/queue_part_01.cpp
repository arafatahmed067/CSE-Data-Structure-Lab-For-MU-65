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
        cout << "Queue declared......" << endl;
    }
    bool empty()
    {
        return headptr == NULL;
    }
};

int main (){
    queu q;
    if(q.empty()){
        cout<<"Empty...!"<<endl;

    }
}