#include <bits/stdc++.h>
using namespace std;

int rain_water(vector<int> &a)
{
    stack<int> st;
    int ans = 0;

    for (int i = 0; i < a.size(); i++)
    {
        while (!st.empty() && a[st.top()] < a[i])
        {
            int cur = st.top();
            st.pop();

            if (st.empty())
            {
                break;
            }

            int diff = i - st.top() - 1;
            int height = min(a[st.top()], a[i]) - a[cur];
            ans += (height * diff);
        }
        st.push(i);
    }
    return ans;
}

int32_t main()
{
    vector<int> v = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << rain_water(v) << endl;
    return 0;
}