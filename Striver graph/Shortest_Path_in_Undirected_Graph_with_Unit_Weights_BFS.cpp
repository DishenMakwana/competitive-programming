#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    void BFS(vector<int> adj[], int N, int src)
    {
        vector<int> dist(N, INT_MAX);
        queue<int> q;

        dist[src] = 0;
        q.push(src);

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            for (auto it : adj[node])
            {
                if (dist[node] + 1 < dist[it])
                {
                    dist[it] = dist[node] + 1;
                    q.push(it);
                }
            }
        }

        for (auto x : dist)
        {
            cout << x << " ";
        }
    }
};

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        obj.BFS(adj, V, 0);
    }
    return 0;
}

// // Input:
// 1
// 9 11
// 0 1
// 0 3
// 1 3
// 1 2
// 2 6
// 3 4
// 4 5
// 5 6
// 6 7
// 6 8
// 7 8

// // Output:
// 0 1 2 1 2 3 3 4 4