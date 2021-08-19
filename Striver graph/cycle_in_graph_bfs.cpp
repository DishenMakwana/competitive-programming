#include "bits/stdc++.h"
using namespace std;

class Solution
{
    bool checkForCycle(int s, int V, vector<int> adj[], vector<bool> &vis)
    {
        vector<int> parent(V + 1, -1);
        queue<pair<int, int>> q;

        vis[s] = true;
        q.push({s, -1});

        while (!q.empty())
        {
            int node = q.front().first;
            int parent_node = q.front().second;
            q.pop();

            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = true;
                    q.push({it, node});
                }
                else if (parent_node != it)
                {
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool isCycle(int V, vector<int> adj[])
    {
        vector<bool> vis(V + 1, 0);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (checkForCycle(i, V, adj, vis))
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