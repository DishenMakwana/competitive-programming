#include "bits/stdc++.h"
using namespace std;

void printTwoElements(int a[], int n)
{
    int i;
    cout << " The repeating element is ";

    for (i = 0; i < n; i++)
    {
        if (a[abs(a[i]) - 1] > 0)
        {
            a[abs(a[i]) - 1] = -a[abs(a[i]) - 1];
        }
        else
        {
            cout << abs(a[i]) << " ";
        }
    }

    // for (int j = 0; j < n; j++)
    // {
    //     cout << a[j] << " ";
    // }
    // cout << endl;

    cout << endl;
    cout << "and the missing element is ";
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            cout << i + 1 << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    printTwoElements(a, n);
    return 0;
}