#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int firstocc(int a[], int n, int i, int key)
{
    if (i == n)
        return -1;

    if (a[i] == key)
        return i;

    return firstocc(a, n, i + 1, key);
}

int lastocc(int a[], int n, int i, int key)
{
    if (i == n)
        return -1;

    int restArray = lastocc(a, n, i + 1, key);

    if (restArray != -1)
    {
        return restArray;
    }

    if (a[i] == key)
        return i;

    return -1;
}

int32_t main()
{
    boost;
    int a[] = {4, 2, 1, 2, 5, 2, 7};
    cout << firstocc(a, 7, 0, 2) << endl;
    cout << lastocc(a, 7, 0, 2) << endl;
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}