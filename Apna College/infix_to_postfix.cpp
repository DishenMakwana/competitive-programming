#include <bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infixToPostfix(string s)
{
    // Your code here
    string res = "";
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (isalnum(s[i]))
        {
            res += s[i];
        }
        else
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if (s[i] == '(')
                {
                    st.push(s[i]);
                }
                else if (s[i] == ')')
                {
                    while (st.top() != '(')
                    {
                        res += st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else if (precedence(s[i]) > precedence(st.top()))
                {
                    st.push(s[i]);
                }
                else if (precedence(s[i]) <= precedence(st.top()))
                {
                    while (!st.empty() && precedence(s[i]) <= precedence(st.top()))
                    {
                        res += st.top();
                        st.pop();
                    }
                    st.push(s[i]);
                }
            }
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return res;
}

int32_t main()
{
    string s;
    cin >> s;
    cout << infixToPostfix(s) << endl;
    return 0;
}