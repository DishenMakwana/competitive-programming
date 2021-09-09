#include <iostream>
using namespace std;

#include <set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <stack>

// #define int long long int
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define pb push_back
#define setBits(x) builtin_popcount(x)
#define endl '\n'

const int N = 1e3 + 2, MOD = 1e9 + 7;
// int dp[N][N];

// recursive solution
// int coinChange(vi &a, int n, int x)
// {
//     if (x == 0)
//         return 1;

//     if (x < 0)
//         return 0;

//     if (n <= 0)
//         return 0;

//     return coinChange(a, n, x - a[n - 1]) + coinChange(a, n - 1, x);
// }

// 2d dp solution
// int coinChange(vi &a, int n, int x)
// {
//     if (x == 0)
//         return 1;

//     if (x < 0)
//         return 0;

//     if (n <= 0)
//         return 0;

//     if (dp[n][x] != -1)
//     {
//         return dp[n][x];
//     }

//     dp[n][x] = coinChange(a, n, x - a[n - 1]) + coinChange(a, n - 1, x);

//     return dp[n][x];
// }

// signed main()
// {
//     rep(i, 0, N)
//         rep(j, 0, N)
//             dp[i][j] = -1;

//     int n;
//     cin >> n;
//     vi a(n);

//     rep(i, 0, n) cin >> a[i];

//     int x;
//     cin >> x;

//     cout << coinChange(a, n, x) << endl;

//     return 0;
// }

// 2d dp solution
signed main()
{
    int n;
    cin >> n;
    vi a(n);

    rep(i, 0, n) cin >> a[i];

    int x;
    cin >> x;

    vector<vector<int>> dp(n + 1, vi(x + 1, 0));

    dp[0][0] = 1;

    rep(i, 0, n + 1)
    {
        rep(j, 0, x + 1)
        {
            if (j - a[i - 1] >= 0)
            {
                dp[i][j] += dp[i][j - a[i - 1]];
            }
            dp[i][j] += dp[i - 1][j];
        }
    }

    cout << dp[n][x] << endl;

    return 0;
}