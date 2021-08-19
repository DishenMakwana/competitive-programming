// binary search advance problem
#include "bits/stdc++.h"
using namespace std;

bool isPossible(int a[], int n, int m, int min)
{
    int studentsRequired = 1, sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > min)
        {
            return false;
        }

        if (sum + a[i] > min)
        {
            studentsRequired++;
            sum = a[i];

            if (studentsRequired > m)
            {
                return false;
            }
        }
        else
        {
            sum += a[i];
        }
    }
    cout << "std : " << studentsRequired << endl;
    return true;
}

int allocateMinimum(int a[], int n, int m)
{
    int sum = 0;
    if (n < m)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    int l = 0, r = sum, ans = INT_MAX;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (isPossible(a, n, m, mid))
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        cout << "l:" << l << ", mid:" << mid << ", r:" << r << endl;
    }
    return ans;
}

int32_t main()
{
    int a[] = {12, 34, 67, 90};
    int n = 4, m = 2;

    int ans = allocateMinimum(a, n, m);
    cout << "The minimum number of pages : " << ans << endl;
    return 0;
}