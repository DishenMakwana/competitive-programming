#include "bits/stdc++.h"
using namespace std;

int findPeakElement(int a[], int l, int h, int n)
{
    int mid = l + (h - l) / 2;

    if ((mid == 0 || a[mid - 1] <= a[mid]) && (mid == n - 1 || a[mid + 1] <= a[mid]))
    {
        return mid;
    }

    else if (mid > 0 && a[mid - 1] > a[mid]) // left half array
    {
        return findPeakElement(a, l, mid - 1, n);
    }
    else // right half array
    {
        return findPeakElement(a, mid + 1, h, n);
    }
}

int32_t main()
{
    int a[] = {1, 2, 3};
    int n = 3;

    cout << "Peak element : " << findPeakElement(a, 0, n - 1, n) << endl;
    return 0;
}