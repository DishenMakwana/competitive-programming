#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void reverse(string s)
{
    if (s.length() == 0)
        return;

    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}

int32_t main()
{
    boost;
    reverse("binod");
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}