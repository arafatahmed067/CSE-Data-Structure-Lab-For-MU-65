#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=25;
    int *pointer =&a;
    *pointer=22;
    cout<<"The value of a :"<<a<<endl;
    cout<<"The derefreance value of the variable a:"<<*pointer<<endl;
}
