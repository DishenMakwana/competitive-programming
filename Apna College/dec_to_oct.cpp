#include "bits/stdc++.h"
using namespace std;

int decToOct(int n)
{
    int ans = 0;
    int x = 1;

    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;

    while (x > 0)
    {
        int last = n / x;
        n -= last * x;
        x /= 8;
        ans = ans * 10 + last;
    }
    return ans;
}

int32_t main()
{
    int n;
    cin >> n;
    cout << decToOct(n) << endl;
    return 0;
}