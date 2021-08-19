#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int partition(int a[], int l, int r)
{
    int pivot = a[r];
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);

    return i + 1;
}

void quickSort(int a[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(a, l, r);

        quickSort(a, l, pi - 1);
        quickSort(a, pi + 1, r);
    }
}

int32_t main()
{
    boost;
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}