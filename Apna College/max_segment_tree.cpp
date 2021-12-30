#include "bits/stdc++.h"
using namespace std;

int a[100005], seg[4 * 100005];

void build_tree(int ind, int low, int high)
{
    if (low == high)
    {
        seg[ind] = a[low];
        return;
    }
    int mid = (low + high) / 2;
    build_tree(2 * ind + 1, low, mid);
    build_tree(2 * ind + 2, mid + 1, high);

    seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);
}

int query(int ind, int low, int high, int l, int r)
{
    if (low >= l && high <= r)
    {
        return seg[ind];
    }

    if (high < l || low > r)
    {
        return INT_MIN;
    }

    int mid = (low + high) / 2;
    int left = query(2 * ind + 1, low, mid, l, r);
    int right = query(2 * ind + 2, mid + 1, high, l, r);

    return max(left, right);
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
        int ans = query(0, 0, n - 1, l - 1, r - 1);
        cout << ans << endl;
    }
    return 0;
}