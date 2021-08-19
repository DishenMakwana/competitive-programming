// using sliding window approach
#include "bits/stdc++.h"
using namespace std;

int smallestSubarrayWithSum(int a[], int n, int x)
{
    int sum = 0, ans = 0, minLen = n + 1, start = 0, end = 0;

    while (end < n)
    {
        while (sum <= x && end < n)
        {
            sum += a[end++];
        }

        while (sum > x && start < n)
        {
            minLen = min(minLen, (end - start));
            sum -= a[start++];
        }
    }

    return minLen;
}

int32_t main()
{
    int a[] = {1, 4, 45, 6, 10, 19};
    int n = 6, x = 510;

    int ans = smallestSubarrayWithSum(a, n, x);

    if (ans == n + 1)
    {
        cout << "No such subarray exists!" << endl;
        return 0;
    }

    cout << "Smallest length subarray : " << ans << endl;

    return 0;
}