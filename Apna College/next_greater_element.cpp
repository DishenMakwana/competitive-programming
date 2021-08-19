#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    stack<long long> s;
    vector<long long> res(n);

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() and s.top() <= arr[i])
            s.pop();

        if (s.empty())
            res[i] = -1;
        else
            res[i] = s.top();

        s.push(arr[i]);
    }
    return res;
}

int32_t main()
{
    boost;
    vector<long long> a = {11, 13, 20, 3};
    vector<long long> ans = nextLargerElement(a, a.size());
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}