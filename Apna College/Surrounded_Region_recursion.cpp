#include "bits/stdc++.h"
using namespace std;

void floodfill(vector<vector<char>> &a, int x, int y, int n, int m)
{
    if (x < 0 || x >= n || y < 0 || y >= m || a[x][y] != 'O')
        return;

    a[x][y] = '#';

    // recursive call
    floodfill(a, x - 1, y, n, m);
    floodfill(a, x + 1, y, n, m);
    floodfill(a, x, y - 1, n, m);
    floodfill(a, x, y + 1, n, m);
}

void replaceSurrounding(vector<vector<char>> &a, int n, int m)
{
    //call floodfill for all '*' laying on edges
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] == 'O')
        {
            floodfill(a, i, 0, n, m);
        }

        if (a[i][m - 1] == 'O')
        {
            floodfill(a, i, m - 1, n, m);
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (a[0][i] == 'O')
        {
            floodfill(a, 0, i, n, m);
        }

        if (a[n - 1][i] == 'O')
        {
            floodfill(a, n - 1, i, n, m);
        }
    }

    // replace '#' with 'O'
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'O')
            {
                a[i][j] = 'X';
            }

            if (a[i][j] == '#')
            {
                a[i][j] = 'O';
            }
        }
    }
}

int32_t
main()
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

    replaceSurrounding(a, n, m);

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