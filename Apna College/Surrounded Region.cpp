#include "bits/stdc++.h"
using namespace std;

void change(vector<vector<char>> &a, int i, int j)
{
    a[i][j] = '*';
    int dx[] = {0, 0, -1, 1};
    int dy[] = {1, -1, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        int cx = i + dx[i];
        int cy = j + dy[i];

        if (cx >= 0 && cx < a.size() && cy >= 0 && cy < a[0].size() && a[cx][cy] == 'O')
        {
            change(a, cx, cy);
        }
    }
}

int32_t main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                if (a[i][j] == 'O')
                {
                    change(a, i, j);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'O')
            {
                a[i][j] = 'X';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '*')
            {
                a[i][j] = 'O';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}