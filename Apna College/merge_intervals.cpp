#include "bits/stdc++.h"
using namespace std;

void mergeIntervals(vector<pair<int, int>> &a)
{
    sort(a.begin(), a.end()); // O(nlogn)

    vector<pair<int, int>> ans;

    ans.push_back(a[0]);

    for (int i = 1; i < a.size(); i++)
    {
        if (ans.back().second >= a[i].first)
        {
            ans.back().second = max(ans.back().second, a[i].second);
        }
        else
        {
            ans.push_back(a[i]);
        }
    }

    for (auto &x : ans)
    {
        cout << x.first << " " << x.second << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        a.push_back({x, y});
    }

    mergeIntervals(a);

    return 0;
}