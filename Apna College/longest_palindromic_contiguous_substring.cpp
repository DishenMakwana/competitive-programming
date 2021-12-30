#include "bits/stdc++.h"
using namespace std;

int lps(string s)
{
    int n = s.length();
    bool dp[n][n];
    memset(dp, 0, sizeof(dp));

    int max_len = 1, last = 0;
    for (int g = 0; g < n; g++)
    {
        for (int i = 0, j = g; j < n; i++, j++)
        {
            if (g == 0)
            {
                dp[i][j] = true;
            }
            else if (g == 1)
            {
                if (s[i] == s[j])
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
            else
            {
                if (s[i] == s[j] && dp[i + 1][j - 1])
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }

            if (dp[i][j])
            {
                max_len = g + 1;
                last = j;
            }
        }
    }
    cout << s.substr(last - max_len + 1, max_len) << endl;
    return max_len;
}

int main()
{
    string s;
    cin >> s;

    cout << lps(s) << endl;
    return 0;
}