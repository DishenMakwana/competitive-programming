#include <bits/stdc++.h>
using namespace std;
#define ll long long

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int lowerBound(vector<int> &v, int ele)
{
    int l = 0, h = v.size() - 1, mid;

    while (h - l > 1)
    {
        mid = (l + h) >> 1;

        if (v[mid] < ele)
        {
            l = mid + 1;
        }
        else if (v[mid] > ele)
        {
            h = mid;
        }
        else if (v[mid] == ele)
        {
            return mid;
        }
    }

    if (v[l] >= ele)
    {
        return l;
    }
    if (v[h] >= ele)
    {
        return h;
    }

    return -1;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // init_code();

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ele;
        cin >> ele;

        sort(v.begin(), v.end());

        cout << lowerBound(v, ele) << endl;
    }
    return 0;
}