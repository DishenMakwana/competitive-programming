#include <bits/stdc++.h>
using namespace std;

vector<int> stock_span(vector<int> &a)
{
    vector<int> ans;
    stack<pair<int, int>> st;

    for (auto x : a)
    {
        int days = 1;

        while (!st.empty() && st.top().first <= x)
        {
            days += st.top().second;
            st.pop();
        }

        st.push({x, days});
        ans.push_back(days);
    }
    return ans;
}

int32_t main()
{
    vector<int> a = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = stock_span(a);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
