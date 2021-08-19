#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int u;
    int v;
    int wt;

    node(int u_, int v_, int wt_)
    {
        u = u_;
        v = v_;
        wt = wt_;
    }
};

int32_t main()
{
    int V, E;
    cin >> V >> E;

    vector<node> edges;
    for (int i = 0; i < E; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back(node(u, v, wt));
    }

    int src;
    cin >> src;

    int inf = 10000000;
    vector<int> dist(V, inf);
    dist[src] = 0;

    for (int i = 1; i <= V - 1; i++)
    {
        for (auto it : edges)
        {
            if (dist[it.u] + it.wt < dist[it.v])
            {
                dist[it.v] = dist[it.u] + it.wt;
            }
        }
    }

    int f1 = 0;
    for (auto it : edges)
    {
        if (dist[it.u] + it.wt < dist[it.v])
        {
            cout << "Negative Cycle" << endl;
            f1 = 1;
            break;
        }
    }

    if (!f1)
    {
        for (int i = 0; i < V; i++)
        {
            if (dist[i] == inf)
            {
                cout << i << " - inf" << endl;
            }
            else
            {
                cout << i << " - " << dist[i] << endl;
            }
        }
    }

    return 0;
}