#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int divisible(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    return (c1 + c2 - c3);
}

int32_t main()
{
    boost;
    int n, a, b;
    cin >> n >> a >> b;
    cout << divisible(n, a, b) << endl;

    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}