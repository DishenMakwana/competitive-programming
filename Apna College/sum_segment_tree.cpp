#include "bits/stdc++.h"
using namespace std;

int a[100005], seg[4 * 100005];

void build_tree(int idx, int low, int high)
{
    if (low == high)
    {
        seg[idx] = a[low];
        return;
    }

    int mid = (low + high) / 2;
    build_tree(2 * idx + 1, low, mid);
    build_tree(2 * idx + 2, mid + 1, high);

    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}

int query(int idx, int low, int high, int l, int r)
{
    if (low >= l && high <= r) // subset
    {
        return seg[idx];
    }

    if (low > r || high < l) // outside
    {
        return 0;
    }

    int mid = (low + high) / 2;
    int left = query(2 * idx + 1, low, mid, l, r);
    int right = query(2 * idx + 2, mid + 1, high, l, r);

    return left + right;
}

int32_t main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    build_tree(0, 0, n - 1);

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << query(0, 0, n - 1, l - 1, r - 1) << endl;
    }
    return 0;
}