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

#define int long long int
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define pb push_back
#define setBits(x) builtin_popcount(x)
#define endl '\n'

const int N = 1e6, MOD = 1e9 + 7;
int dp[N];

int minSquare(int n)
{
    if (n == 0 || n == 1 || n == 2 || n == 3)
    {
        return n;
    }

    if (dp[n] != MOD)
    {
        return dp[n];
    }

    // int ans = MOD;
    for (int i = 1; i * i <= n; i++)
    {
        dp[n] = min(dp[n], 1 + minSquare(n - i * i));
    }

    return dp[n];
}

signed main()
{
    rep(i, 0, N) dp[i] = MOD;

    int n;
    cin >> n;

    cout << minSquare(n) << endl;
    return 0;
}

// bottom-up approach
// signed main()
// {
//     int n;
//     cin >> n;

//     vi dp(n + 1, MOD);

//     dp[0] = 0, dp[1] = 1, dp[2] = 2, dp[3] = 3;

//     for (int i = 1; i * i <= n; i++)
//     {
//         for (int j = 0; i * i + j <= n; j++)
//         {
//             dp[i * i + j] = min(dp[i * i + j], dp[j] + 1);
//         }
//     }

//     cout << dp[n] << endl;
// }