
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter total number of element : ";
    cin >> n;

    int a[n];

    cout << "Insert elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }

    cout << "After bubble sort " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
