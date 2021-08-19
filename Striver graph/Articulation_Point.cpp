#include "bits/stdc++.h"
using namespace std;

void dfs(int node, int parent, vector<int> &vis, vector<int> &tin, vector<int> &low, int timer, vector<int> adj[], vector<bool> &isArticulation)
{
    vis[node] = 1;
    tin[node] = low[node] = timer++;
    int child = 0;

    for (auto it : adj[node])
    {
        if (it == parent)
            continue;

        if (!vis[it])
        {
            dfs(it, node, vis, tin, low, timer, adj, isArticulation);
            low[node] = min(low[node], low[it]);
            child++;
            if (low[it] >= tin[node] && parent != -1)
            {
                isArticulation[node] = true;
            }
        }
        else
        {
            low[node] = min(low[node], tin[it]);
        }
    }
    if (parent == -1 && child > 1)
    {
        isArticulation[node] = true;
    }
}

int32_t main()
{
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> tin(V, -1);
    vector<int> low(V, -1);
    vector<int> vis(V, 0);
    vector<bool> isArticulation(V, false);

    int timer = 0;

    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            dfs(i, -1, vis, tin, low, timer, adj, isArticulation);
        }
    }

    // cout << "Articulation Points : " << endl;
    for (int i = 0; i < V; i++)
    {
        if (isArticulation[i])
            cout << i << endl;
    }

    return 0;
}

// // Input:
// 12 14
// 0 1
// 1 2
// 2 3
// 0 3
// 3 4
// 4 5
// 5 6
// 6 7
// 7 8
// 5 8
// 7 9
// 9 10
// 10 11
// 9 11

// // Output:
// 3
// 4
// 5
// 7
// 9