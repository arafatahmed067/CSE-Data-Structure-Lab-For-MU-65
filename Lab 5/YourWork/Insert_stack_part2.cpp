#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *next;
};
struct sstack {
    node*top;
    sstack(){
        top=NULL;
        cout<<"Linked List Stack Started "<<endl;
    }
    void push(int a){
        node*newnode=new node;
        newnode->val = a;
        
        newnode->next = top;
        top = newnode;
        cout<<"Element  "<<a<<"  Added in stack "<<endl;
    }
};

int main()
{
    sstack m;
     for(int i=1;i<=7;i++){
        m.push(i*i*10);
     }
}