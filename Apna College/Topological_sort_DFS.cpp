#include "bits/stdc++.h"
using namespace std;

class Solution
{
    void findTopoSort(int node, vector<bool> &vis, stack<int> &st, vector<int> adj[])
    {
        vis[node] = true;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                findTopoSort(it, vis, st, adj);
            }
        }
        st.push(node);
    }

public:
    vector<int> topoSort(int N, vector<int> adj[])
    {
        stack<int> st;
        vector<bool> vis(N, false);

        for (int i = 0; i < N; i++)
        {
            if (!vis[i])
            {
                findTopoSort(i, vis, st, adj);
            }
        }

        vector<int> topo;
        while (!st.empty())
        {
            topo.push_back(st.top());
            st.pop();
        }
        return topo;
    }
};

bool check(int V, vector<int> &ans, vector<int> adj[])
{
    vector<int> map(V, -1);

    for (int i = 0; i < V; i++)
    {
        map[ans[i]] = i;
    }

    for (int i = 0; i < V; i++)
    {
        for (int v : adj[i])
        {
            if (map[i] > map[v])
            {
                return 0;
            }
        }
    }
    return 1;
}

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
        vector<int> ans = obj.topoSort(V, adj);

        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << endl;

        cout << "Proper TopoSort : " << check(V, ans, adj) << endl;
    }
    return 0;
}