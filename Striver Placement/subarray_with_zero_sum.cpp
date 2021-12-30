#include "bits/stdc++.h"
using namespace std;

vector<pair<int, int>> fun(vector<int> &a)
{
    unordered_map<int, vector<int>> m;
    vector<pair<int, int>> out;

    int sum = 0;

    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];

        if (sum == 0)
        {
            out.push_back({0, i});
        }

        if (m.find(sum) != m.end())
        {
            vector<int> vc = m[sum];
            for (auto &v : vc)
            {
                out.push_back({v + 1, i});
            }
        }
        m[sum].push_back(i);
    }
    return out;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pair<int, int>> ans = fun(a);
    for (auto &x : ans)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}