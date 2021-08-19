#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int u;
    int v;
    int wt;

    Node(int u_, int v_, int wt_)
    {
        u = u_;
        v = v_;
        wt = wt_;
    }
};

bool compare(Node a, Node b)
{
    return a.wt < b.wt;
}

int findParent(int u, vector<int> &parent)
{
    if (u == parent[u])
        return u;
    return findParent(parent[u], parent);
}

void unionn(int u, int v, vector<int> &parent, vector<int> &rank)
{
    u = findParent(u, parent);
    v = findParent(v, parent);

    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[u] > rank[v])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}

int32_t main()
{
    int V, E;
    cin >> V >> E;
    vector<Node> edges;

    for (int i = 0; i < 2 * E; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back(Node(u, v, wt));
    }

    sort(edges.begin(), edges.end(), compare);

    vector<int> parent(V);
    for (int i = 0; i < V; i++)
    {
        parent[i] = i;
    }
    vector<int> rank(V, 0);

    int cost = 0;
    vector<pair<int, int>> mst;

    for (auto it : edges)
    {
        if (findParent(it.v, parent) != findParent(it.u, parent))
        {
            cost += it.wt;
            mst.push_back({it.u, it.v});
            unionn(it.u, it.v, parent, rank);
        }
    }

    cout << "Total cost : " << cost << endl;
    for (auto it : mst)
    {
        cout << it.first << " - " << it.second << endl;
    }

    return 0;
}