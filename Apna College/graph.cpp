#include <bits/stdc++.h>
using namespace std;

// adjacency array representation
int32_t main()
{
    int n, m;
    cin >> n >> m;

    int adj[n + 1][n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    // list representation
    vector<int> adj1[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj1[u].push_back(v);
        adj1[v].push_back(u);
    }

    return 0;
}