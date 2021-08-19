#include "bits/stdc++.h"
using namespace std;

class Solution
{
    void dfs(int node, vector<bool> &vis, vector<int> adj[], vector<int> &ans)
    {
        ans.push_back(node);
        vis[node] = true;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, vis, adj, ans);
            }
        }
    }

public:
    vector<int> DFSofGraph(int V, vector<int> adj[])
    {
        vector<int> ans;
        vector<bool> vis(V + 1, false);

        for (int i = 1; i <= V; i++)
        {
            if (!vis[i])
            {
                dfs(i, vis, adj, ans);
            }
        }
        return ans;
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
        vector<int> ans = obj.DFSofGraph(V, adj);

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}