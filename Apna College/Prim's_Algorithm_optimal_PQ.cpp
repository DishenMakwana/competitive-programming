#include "bits/stdc++.h"
using namespace std;

// O(NlgN)
int32_t main()
{
    int V, E;
    cin >> V >> E;

    vector<pair<int, int>> adj[V + 1];

    for (int i = 0; i < 2 * E; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    int parent[V], key[V];
    bool mstSet[V];

    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX;
        mstSet[i] = false;
        parent[i] = -1;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // min-heap

    key[0] = 0;
    parent[0] = -1;
    pq.push({0, 0});

    for (int cnt = 0; cnt < V - 1; cnt++)
    {
        int u = pq.top().second;
        pq.pop();

        mstSet[u] = true;

        for (auto it : adj[u])
        {
            int v = it.first;
            int wt = it.second;

            if (mstSet[v] == false && wt < key[v])
            {
                parent[v] = u;
                pq.push({key[v], v});
                key[v] = wt;
            }
        }
    }

    for (int i = 0; i < V; i++)
    {
        cout << parent[i] << " - " << i << endl;
    }

    return 0;
}