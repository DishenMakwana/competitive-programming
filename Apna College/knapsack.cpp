#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int knapsack(vector<int> &value, vector<int> &weight, int n, int W)
{
    if (n == 0 || W == 0)
        return 0;

    if (weight[n - 1] > W)
    {
        return knapsack(value, weight, n - 1, W);
    }

    return max(knapsack(value, weight, n - 1, W - weight[n - 1]) + value[n - 1], knapsack(value, weight, n - 1, W));
}

int32_t main()
{
    boost;
    vector<int> v = {100, 50, 150};
    vector<int> w = {10, 20, 30};
    // int val[] = {100, 50, 150};
    // int wt[] = {10, 20, 30};
    int W = 50;

    cout << knapsack(v, w, v.size(), W) << endl;
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}