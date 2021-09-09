#include "bits/stdc++.h"
using namespace std;

int dfs(int **a, int i, int j, int n)
{
    if (i < 0 || i >= n || j < 0 || j >= n || a[i][j] == 0)
    {
        return 0;
    }

    a[i][j] = 0;

    int ans = 0;

    ans += dfs(a, i - 1, j, n);
    ans += dfs(a, i - 1, j + 1, n);
    ans += dfs(a, i, j + 1, n);
    ans += dfs(a, i + 1, j + 1, n);
    ans += dfs(a, i + 1, j, n);
    ans += dfs(a, i + 1, j - 1, n);
    ans += dfs(a, i, j - 1, n);
    ans += dfs(a, i - 1, j - 1, n);

    return 1 + ans;

    // return 1 + dfs(a, i - 1, j, n) + dfs(a, i - 1, j + 1, n) + dfs(a, i, j + 1, n) + dfs(a, i + 1, j + 1, n) + dfs(a, i + 1, j, n) + dfs(a, i + 1, j - 1, n) + dfs(a, i, j - 1, n) + dfs(a, i - 1, j - 1, n);
}

void calculate(int **a, int n)
{
    int min_area = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int area = 0;
            if (a[i][j])
            {
                min_area = min(min_area, dfs(a, i, j, n));
            }
        }
    }
    cout << min_area << endl;
}

int32_t main()
{
    int n;
    cin >> n;
    int **a = new int *[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    calculate(a, n);

    return 0;
}