// binary search advance problem
#include "bits/stdc++.h"
using namespace std;

int findFeasible(int a[], int n, int limit)
{
    int sum = 0, painters = 1;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > limit)
        {
            sum = a[i];
            painters++;
        }
    }
    cout << "painters : " << painters << endl;
    return painters;
}

int paintersPartition(int a[], int n, int m)
{
    int totalLen = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        k = max(k, a[i]);
        totalLen += a[i];
    }

    int l = k, h = totalLen;

    while (l < h)
    {
        int mid = (l + h) / 2;
        cout << "l:" << l << " , mid:" << mid << " , r:" << h << endl;
        int painters = findFeasible(a, n, mid);

        if (painters <= m)
        {
            h = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}

int32_t main()
{
    int a[] = {10, 20, 30, 40};
    int n = 4, m = 2;

    int ans = paintersPartition(a, n, m);
    cout << "Minimum time to paint board : " << ans << endl;

    return 0;
}