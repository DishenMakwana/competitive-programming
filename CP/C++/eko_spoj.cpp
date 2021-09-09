#include <bits/stdc++.h>
using namespace std;

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

const int N = 1e6 + 10;
int n;
long long m;
long long trees[N];

bool isWoodSufficient(int h)
{
    long long wood = 0;
    for (int i = 0; i < n; ++i)
    {
        if (trees[i] >= h)
        {
            wood += trees[i] - h;
        }
    }
    return wood >= m;
}

void search()
{
    long long l = 0, h = 1e9, mid;

    while (h - l > 1)
    {
        mid = (l + h) / 2;
        if (isWoodSufficient(mid))
        {
            l = mid;
        }
        else
        {
            h = mid - 1;
        }
    }

    if (isWoodSufficient(h))
    {
        cout << h << endl;
    }
    else
    {
        cout << l << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // init_code();

    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> trees[i];
    }

    search();

    return 0;
}