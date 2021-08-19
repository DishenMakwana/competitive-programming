#include <bits/stdc++.h>
using namespace std;

int get_max_area(vector<int> a)
{
    int ans = 0, i = 0;
    stack<int> st;
    a.push_back(0);

    while (i < a.size())
    {
        while (!st.empty() && a[st.top()] > a[i])
        {
            int t = st.top();
            int h = a[t];
            st.pop();

            if (st.empty())
            {
                ans = max(ans, h * i);
            }
            else
            {
                int len = i - st.top() - 1;
                ans = max(ans, len * h);
            }
            // cout << ans << " ";
        }
        st.push(i);
        i++;
    }
    return ans;
}

int32_t main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (auto &x : a)
    {
        cin >> x;
    }

    // cout << endl;
    cout << get_max_area(a) << endl;
    return 0;
}