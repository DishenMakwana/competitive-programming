#include "bits/stdc++.h"
using namespace std;

int dfs(int **a, int i, int j, int n)
{
    if (i < 0 || i >= n || j < 0 || j >= n || a[i][j] == 0)
    {
        return 0;
    }

    a[i][j] = 0;
    return 1 + dfs(a, i - 1, j, n) + dfs(a, i - 1, j + 1, n) + dfs(a, i, j + 1, n) + dfs(a, i + 1, j + 1, n) + dfs(a, i + 1, j, n) + dfs(a, i + 1, j - 1, n) + dfs(a, i, j - 1, n) + dfs(a, i - 1, j - 1, n);
}

void calculate(int **a, int n)
{
    int max_area = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int area = 0;
            if (a[i][j])
            {
                max_area = max(max_area, dfs(a, i, j, n));
            }
        }
    }
    cout << max_area << endl;
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