#include <bits/stdc++.h>
using namespace std;

void reverseString(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int32_t main()
{
    string s;
    getline(cin, s);
    reverseString(s);
    return 0;
}