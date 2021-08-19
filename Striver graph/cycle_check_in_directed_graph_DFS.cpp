#include "bits/stdc++.h"
using namespace std;

class Solution
{
    bool checkForCycle(int node, vector<int> adj[], int vis[], int dfsvis[])
    {
        vis[node] = 1;
        dfsvis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                if (checkForCycle(it, adj, vis, dfsvis))
                {
                    return true;
                }
                else if (dfsvis[it])
                {
                    return true;
                }
            }
        }
        dfsvis[node] = 0;
        return false;
    }

public:
    bool isCycle(int N, vector<int> adj[])
    {
        int vis[N], dfsvis[N];
        memset(vis, 0, sizeof(vis));
        memset(dfsvis, 0, sizeof(dfsvis));

        for (int i = 0; i < N; i++)
        {
            if (!vis[i])
            {
                if (checkForCycle(i, adj, vis, dfsvis))
                {
                    return true;
                }
            }
        }
        return false;
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
        cout << obj.isCycle(V, adj) << endl;
    }
    return 0;
}

// // Input:
// 1
// 4 4
// 0 1
// 1 2
// 2 3
// 3 1

// // Output:
// 1

// // Input:
// 1
// 6 5
// 0 1
// 1 2
// 2 0
// 3 4
// 4 5

// // Output:
// 1