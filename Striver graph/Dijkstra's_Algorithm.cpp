#include "bits/stdc++.h"
using namespace std;

void Dijkstra(int V, vector<pair<int, int>> adj[], int src)
{
    // Dijkstra's Algorithm
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // min-heap
    vector<int> distTo(V + 1, INT_MAX);

    distTo[src] = 0;
    pq.push(make_pair(0, src));

    while (!pq.empty())
    {
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();

        for (auto it : adj[prev])
        {
            int next = it.first;
            int nextdis = it.second;

            if (distTo[next] > distTo[prev] + nextdis)
            {
                distTo[next] = distTo[prev] + nextdis;
                pq.push({distTo[next], next});
            }
        }
    }

    cout << "The distances from source " << src << " are : " << endl;
    for (int i = 1; i <= V; i++)
        cout << distTo[i] << " ";
    cout << endl;
}

int32_t main()
{
    int V, E, src;
    cin >> V >> E;

    vector<pair<int, int>> adj[V + 1];

    for (int i = 0; i < 2 * E; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    cin >> src;

    Dijkstra(V, adj, src);

    return 0;
}

// // Input:
// 5 6
// 1 2 2
// 1 4 1
// 2 1 2
// 2 3 4
// 2 5 5
// 3 2 4
// 3 4 3
// 3 5 1
// 4 1 1
// 4 3 3
// 5 2 5
// 5 3 1
// 1

// // Output:
// The distances from source 1 are :
// 0 2 4 1 5