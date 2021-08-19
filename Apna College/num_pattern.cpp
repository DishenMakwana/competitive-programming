#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void loop(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    loop(n - 1);
    cout << n << " ";
    loop(n - 1);
    cout << n << " ";
}

int32_t main()
{
    boost;
    int n;
    cin >> n;
    loop(n);
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}