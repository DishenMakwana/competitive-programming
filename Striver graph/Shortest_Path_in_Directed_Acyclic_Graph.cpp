#include "bits/stdc++.h"
using namespace std;

void findTopoSort(int node, vector<int> &vis, stack<int> &st, vector<pair<int, int>> adj[])
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it.first])
        {
            findTopoSort(it.first, vis, st, adj);
        }
    }
    st.push(node);
}

// DFS
void shortestPath(int src, int N, vector<pair<int, int>> adj[])
{
    vector<int> vis(N, 0);
    stack<int> st;

    for (int i = 0; i < N; i++)
    {
        if (!vis[i])
        {
            findTopoSort(i, vis, st, adj);
        }
    }

    vector<int> dist(N, INT_MAX);
    dist[src] = 0;

    while (!st.empty())
    {
        int node = st.top();
        st.pop();

        // if node has reached previously
        if (dist[node] != INT_MAX)
        {
            for (auto it : adj[node]) // {u, {v, w}}
            {
                if (dist[node] + it.second < dist[it.first])
                {
                    dist[it.first] = dist[node] + it.second;
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        (dist[i] == INT_MAX) ? cout << "INF " : cout << dist[i] << " ";
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;
        vector<pair<int, int>> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v, wt;
            cin >> u >> v >> wt;
            adj[u].push_back({v, wt});
        }

        shortestPath(0, V, adj);
    }
    return 0;
}

// // Input:
// 1
// 6 7
// 0 1 2
// 0 4 1
// 1 2 3
// 2 3 6
// 4 2 2
// 4 5 4
// 5 3 1

// // Output:
// 0 2 3 6 1 5