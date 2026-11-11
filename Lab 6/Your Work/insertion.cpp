#include <bits/stdc++.h>
using namespace std;
void sorting(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minelement = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > minelement)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = minelement;
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
}
