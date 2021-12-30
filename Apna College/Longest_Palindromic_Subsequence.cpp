#include "bits/stdc++.h"
using namespace std;

int dp[1001][1001];

//Memoization

int solve(string s, int l, int h) // O(n^2)
{
    if (l == h)
    {
        return 1;
    }

    if (l > h)
    {
        return 0;
    }

    if (dp[l][h] != -1)
    {
        return dp[l][h];
    }

    if (s[l] == s[h])
    {
        return dp[l][h] = solve(s, l + 1, h - 1) + 2;
    }

    return dp[l][h] = max(solve(s, l + 1, h), solve(s, l, h - 1));
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    memset(dp, -1, sizeof(dp));
    cout << solve(s, 0, n - 1) << endl;
}