#include "bits/stdc++.h"
using namespace std;

int removeDuplicates(int a[], int n)
{
    if (n == 0 || n == 1)
        return n;

    int j = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            a[j++] = a[i];
        }
    }

    a[j++] = a[n - 1];
    return j;
}

int32_t
main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int new_n = removeDuplicates(a, n);

    for (int i = 0; i < new_n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}