#include "bits/stdc++.h"
using namespace std;

int maxDotProduct(int a[], int b[], int m, int n)
{
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= m; j++)
        {
            dp[i][j] = max((dp[i - 1][j - 1] + (a[j - 1] * b[i - 1])), dp[i][j - 1]);
        }
    }

    for (int i = 0; i <= n; i++) 
    {
        for (int j = 0; j <= m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return dp[n][m];
}

int32_t main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    cout << maxDotProduct(a, b, n, m) << endl;
    return 0;
}