#include "bits/stdc++.h"
using namespace std;

int cntTriplets(int a[], int n, int r)
{
    unordered_map<int, int> m;
    unordered_map<int, int> prepare;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        prepare[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        prepare[a[i]]--;
        if (a[i] % r == 0)
        {
            cnt += m[a[i] / r] * prepare[a[i] * r];
        }
        m[a[i]]++;
    }
    return cnt;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = cntTriplets(a, n, m);
        cout << ans << endl;
    }
    return 0;
}
