#include "bits/stdc++.h"
using namespace std;

int solve(vector<int> &a, int k)
{
    map<int, int> m;
    int cnt = 0;
    int xorr = 0;

    for (auto &x : a)
    {
        xorr = xorr ^ x;

        if (xorr == k)
        {
            cnt++;
        }

        if (m.find(xorr ^ k) != m.end())
        {
            cnt += m[xorr ^ k];
        }

        m[x]++;
    }
    return cnt;
}