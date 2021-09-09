#include "bits/stdc++.h"
using namespace std;
#define int long long int

const int N = 1e6, MOD = 1e9 + 7;
int dp[N];

int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = (fibo(n - 1) + fibo(n - 2)) % MOD;

    return dp[n];
}

int32_t main()
{
    int n;
    cin >> n;

    for (int i = 0; i < N; i++)
    {
        dp[i] = -1;
    }

    cout << fibo(n) << endl;

    return 0;
}