#include "bits/stdc++.h"
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '4')
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}