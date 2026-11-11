#include <bits/stdc++.h>
using namespace std;
void sorting(int a[], int n)
{
    
    for(int i=0;i<n-1;i++)
    {
        int ind_min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[ind_min])
            {
                ind_min = j;
            }
        }
        if(ind_min !=i)
        {
            swap(a[ind_min],a[i]);
        }
    }
}
int main()
{
     int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter all elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sorting(a, n);
    cout << "SORTED array :- ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}