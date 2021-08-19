#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int tilingWays(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return tilingWays(n - 1) + tilingWays(n - 2);
}

int32_t main()
{
    boost;
    int n = 0;
    cin >> n;
    cout << tilingWays(n) << endl;
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}