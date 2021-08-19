#include "bits/stdc++.h"
using namespace std;

int searchInRotatedArray(int a[], int key, int l, int r)
{
    if (l > r)
    {
        return -1;
    }

    int mid = (l + r) / 2;
    cout << "l:" << a[l] << " , mid:" << a[mid] << " , r:" << a[r] << endl;

    if (a[mid] == key)
    {
        return mid;
    }

    if (a[l] <= a[mid])
    {
        if (key >= a[l] && key <= a[mid])
        {
            return searchInRotatedArray(a, key, l, mid - 1);
        }
        return searchInRotatedArray(a, key, mid + 1, r);
    }

    if (key >= a[mid] && key <= a[r])
    {
        return searchInRotatedArray(a, key, mid + 1, r);
    }

    return searchInRotatedArray(a, key, l, mid - 1);
}

int32_t main()
{
    int a[] = {6, 7, 8, 9, 10, 1, 2, 5};
    int n = 8, key = 2;

    int idx = searchInRotatedArray(a, key, 0, n - 1);
    if (idx == -1)
    {
        cout << "Key doesn't exist" << endl;
    }
    else
    {
        cout << "Key at index : " << idx << " with value : " << a[idx] << endl;
    }

    return 0;
}