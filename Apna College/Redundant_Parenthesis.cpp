#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    string s;
    cin >> s;
    stack<char> st;
    bool ans = false;
    int cnt = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                ans = true;
                cnt++;
            }
            while (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
            {
                st.pop();
            }
            st.pop();
        }
    }

    cout << ans << endl;
    cout << "No of redundant braces : " << cnt << endl;
    return 0;
}