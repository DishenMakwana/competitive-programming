#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

string rmvDuplicate(string s)
{
    if (s.length() == 0)
        return "";

    char ch = s[0];
    string ans = rmvDuplicate(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    else
    {
        return (ch + ans);
    }
}

int32_t main()
{
    boost;
    cout << rmvDuplicate("aaaabbbeeecdd") << endl;
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}