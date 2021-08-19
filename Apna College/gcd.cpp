#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b, b = rem;
    }
    return a;
}

int _gcd(int a, int b)
{
    if (b == 0)
        return a;
    return _gcd(b, a % b);
}

int32_t main()
{
    boost;
    int a, b;
    cin >> a >> b;
    cout << _gcd(a, b) << endl;

    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}