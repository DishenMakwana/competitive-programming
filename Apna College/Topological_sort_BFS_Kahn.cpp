#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    vector<int> topoSort(int N, vector<int> adj[])
    {
        queue<int> q;
        vector<int> indegree(N, 0);
        for (int i = 0; i < N; i++)
        {
            for (auto it : adj[i])
            {
                indegree[it]++;
            }
        }

        for (int i = 0; i < N; i++)
        {
            if (!indegree[i])
            {
                q.push(i);
            }
        }

        vector<int> topo;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            topo.push_back(node);
            for (auto it : adj[node])
            {
                indegree[it]--;
                if (!indegree[it])
                {
                    q.push(it);
                }
            }
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