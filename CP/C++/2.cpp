#include "bits/stdc++.h"
using namespace std;

int multiplyPalindrome(string s)
{
    int n = s.size(), m = 0;
    vector<vector<int>> dp(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        dp[i][i] = 1;
    }

    for (int cl = 2; cl <= n; cl++)
    {
        for (int i = 0; i < n - cl + 1; i++)
        {
            int j = i + cl - 1;

            if (s[i] == s[j] && cl == 2)
            {
                dp[i][j] = 2;
            }
            else if (s[i] == s[j])
            {
                dp[i][j] = dp[i + 1][j - 1] + 2;
            }
            else
            {
                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        m = max(m, dp[0][i] * dp[i + 1][n - 1]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return m;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int ans = multiplyPalindrome(s);
        cout << ans << endl;
    }
    return 0;
}
