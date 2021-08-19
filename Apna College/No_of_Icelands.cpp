#include <bits/stdc++.h>
using namespace std;

void solve(int i, int j, int n, int m, vector<vector<bool>> &vis, vector<vector<int>> &a)
{
    if (i < 0 || j < 0 || i >= n || j >= m || a[i][j] == 1 || vis[i][j])
        return;

    vis[i][j] = true;
    solve(i + 1, j, n, m, vis, a);
    solve(i - 1, j, n, m, vis, a);
    solve(i, j + 1, n, m, vis, a);
    solve(i, j - 1, n, m, vis, a);
}

int main()
{
    int n, m;
    cin >> n >> m;

    // int a[n][m];
    vector<vector<int>> a(n, vector<int>(m, 0));
    vector<vector<bool>> vis(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        // vector<bool> t;
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            // t.push_back(false);
        }
        // vis.push_back(t);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0 && !vis[i][j])
            {
                ans++;
                solve(i, j, n, m, vis, a);
            }
        }
    }

    cout << ans << endl;

    return 0;
}