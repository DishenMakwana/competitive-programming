#include "bits/stdc++.h"
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int last = n % 10;
        ans += x * last;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int last = n % 10;
        ans += x * last;
        x *= 8;
        n /= 10;
    }
    return ans;
}



int32_t main()
{
    int n, m;
    cin >> n >> m;

    cout << binaryToDecimal(n) << endl;
    cout << octalToDecimal(m) << endl;

    return 0;
}