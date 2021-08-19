#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void wave_sort(int a[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] > a[i - 1])
        {
            swap(a[i], a[i - 1]);
        }

        if (a[i] > a[i + 1] && i < n - 1)
        {
            swap(a[i], a[i + 1]);
        }
    }
}

int32_t main()
{
    boost;
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    wave_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}