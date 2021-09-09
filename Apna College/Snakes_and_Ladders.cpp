#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    int ladders, snakes;
    cin >> ladders;

    map<int, int> lad;
    map<int, int> snk;

    for (int i = 0; i < ladders; i++)
    {
        int u, v;
        cin >> u >> v;
        lad[u] = v;
    }

    cin >> snakes;
    for (int i = 0; i < snakes; i++)
    {
        int u, v;
        cin >> u >> v;
        snk[u] = v;
    }

    int moves = 0;
    bool found = false;
    queue<int> q;
    q.push(1);

    vector<int> vis(101, 0);
    vis[1] = 1;

    while (!q.empty() && !found)
    {
        int sz = q.size();
        while (sz--)
        {
            int curr = q.front();
            q.pop();

            for (int dice = 1; dice <= 6; dice++)
            {
                // reached at final position
                if (curr + dice == 100)
                {
                    found = true;
                    // cout << curr + dice << " ";
                    break;
                }

                // found ladder
                if (curr + dice <= 100 && lad[curr + dice] && !vis[lad[curr + dice]])
                {
                    vis[lad[curr + dice]] = true;
                    // cout << curr + dice << " ";
                    if (lad[curr + dice] == 100)
                    {
                        found = true;
                        break;
                    }
                    q.push(lad[curr + dice]);
                }
                // found snake
                else if (curr + dice <= 100 && snk[curr + dice] && !vis[lad[curr + dice]])
                {
                    vis[snk[curr + dice]] = true;
                    // cout << curr + dice << " ";
                    if (snk[curr + dice] == 100)
                    {
                        found = true;
                        break;
                    }
                    q.push(snk[curr + dice]);
                }
                // simple position, without ladder or snake
                else if (curr + dice <= 100 && !vis[curr + dice] && !snk[curr + dice] && !lad[curr + dice])
                {
                    vis[curr + dice] = true;
                    // cout << curr + dice << " ";
                    q.push(curr + dice);
                }
            }
        }
        moves++;
    }
    // cout << endl;

    if (found)
    {
        cout << moves << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}