#include "bits/stdc++.h"
using namespace std;

class Solution
{
    bool checkForCycle(int node, int parent, vector<int> adj[], vector<bool> &vis)
    {
        vis[node] = true;
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                if (checkForCycle(it, node, adj, vis))
                {
                    return true;
                }
            }
            else if (parent != it)
            {
                return true;
            }
        }
        return false;
    }

public:
    bool
    isCycle(int V, vector<int> adj[])
    {
        vector<bool> vis(V + 1, false);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (checkForCycle(i, -1, adj, vis))
                {
                    return true;
                }
            }
        }
        return -1;
    };
};

int32_t main()
{
    int tc;
    cin >> tc;

    while (tc--)
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

        Solution obj;
        bool ans = obj.isCycle(V, adj);

        if (ans)
        {
            cout << "There is a cycle in given graph" << endl;
        }
        else
        {
            cout << "There is no cycle in given graph" << endl;
        }
    }
    return 0;
}

// // Input:
// 1
// 5 4
// 0 1
// 0 2
// 0 3
// 2 4

// // Output:
// There is no cycle in given graph