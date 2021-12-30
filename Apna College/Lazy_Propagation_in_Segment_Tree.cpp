#include "bits/stdc++.h"
using namespace std;

int a[100005], seg[4 * 100005], lazy[4 * 100005];

void pointUpdate(int idx, int low, int high, int node, int val)
{
    if (low == high)
    {
        seg[idx] += val;
    }
    else
    {
        int mid = (low + high) / 2;
        if (node <= mid && node >= low)
        {
            pointUpdate(2 * idx + 1, low, mid, node, val);
        }
        else
        {
            pointUpdate(2 * idx + 2, mid + 1, high, node, val);
        }

        seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
    }
}

void rangeUpdate(int idx, int low, int high, int l, int r, int val)
{
    if (lazy[idx] != 0)
    {
        seg[idx] += (high - low + 1) * lazy[idx];
        if (low != high)
        {
            lazy[2 * idx + 1] += lazy[idx];
            lazy[2 * idx + 2] += lazy[idx];
        }
        lazy[idx] = 0;
    }

    if (r < low || high < l || low > high)
        return;

    if (low >= l && high <= r)
    {
        seg[idx] += (high - low + 1) * val;
        if (low != high)
        {
            lazy[2 * idx + 1] += val;
            lazy[2 * idx + 2] += val;
        }
        return;
    }

    int mid = (low + high) / 2;
    rangeUpdate(2 * idx + 1, low, mid, l, r, val);
    rangeUpdate(2 * idx + 2, mid + 1, high, l, r, val);

    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}

int querySumLazy(int idx, int low, int high, int l, int r, int val)
{
    if (lazy[idx] != 0)
    {
        seg[idx] += (high - low + 1) * lazy[idx];
        if (low != high)
        {
            lazy[2 * idx + 1] += lazy[idx];
            lazy[2 * idx + 2] += lazy[idx];
        }
        lazy[idx] = 0;
    }

    if (r < low || high < l || low > high)
    {
        return 0;
    }

    if (low >= l && high <= r)
    {
        return seg[idx];
    }

    int mid = (low + high) / 2;
    return querySumLazy(2 * idx + 1, low, mid, l, r, val) + querySumLazy(2 * idx + 2, mid + 1, high, l, r, val);
}

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
    if (low >= l && high <= r)
    {
        return seg[idx];
    }

    if (high < l || low > r)
    {
        return INT_MIN;
    }

    int mid = (low + high) / 2;
    int left = query(2 * idx + 1, low, mid, l, r);
    int right = query(2 * idx + 2, mid + 1, high, l, r);

    return max(left, right);
}

signed main()
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