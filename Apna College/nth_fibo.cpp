#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;

    return (fibo(n - 1) + fibo(n - 2));
}

int32_t main()
{
    boost;
    int n = 0;
    cin >> n;
    cout << fibo(n) << endl;
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}