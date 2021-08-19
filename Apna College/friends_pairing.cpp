#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int friendsPairing(int n)
{
    if (n == 0 || n == 1 || n == 2)
        return n;

    return friendsPairing(n - 1) + (friendsPairing(n - 2) * (n - 1));
}

int32_t main()
{
    boost;
    cout << friendsPairing(4) << endl;
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}