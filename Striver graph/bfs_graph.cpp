#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    vector<int> BFSofGraph(int V, vector<int> adj[])
    {
        vector<int> bfs;
        vector<bool> vis(V + 1, false);
        queue<int> q;

        q.push(0);
        vis[0] = true;

        while (!q.empty())
        {
            int node = q.front();
            bfs.push_back(node);
            q.pop();

            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    q.push(it);
                    vis[it] = true;
                }
            }
        }
        return bfs;
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
            adj[v].push_back(u); // uncomment this for undirected graph
        }

        Solution obj;
        vector<int> ans = obj.BFSofGraph(V, adj);

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
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
// 0 1 2 3 4