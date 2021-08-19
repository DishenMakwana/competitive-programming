#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    int k;
    cin >> k;

    vector<vector<int>> a(k);

    for (int i = 0; i < k; i++)
    {
        int size;
        cin >> size;

        a[i] = vector<int>(size);
        for (int j = 0; j < size; j++)
        {
            cin >> a[i][j];
        }
    }

    vector<int> idx(k, 0);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 0; i < k; i++)
    {
        pq.push({a[i][0], i});
    }

    vector<int> ans;

    while (!pq.empty())
    {
        pair<int, int> min = pq.top();
        pq.pop();

        ans.push_back(min.first);

        if (idx[min.second] + 1 < a[min.second].size())
        {
            pq.push({a[min.second][idx[min.second] + 1], min.second});
        }
        idx[min.second]++;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}