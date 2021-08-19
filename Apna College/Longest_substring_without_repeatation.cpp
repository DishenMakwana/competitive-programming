#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    string s;
    cin >> s;
    vector<int> dist(256);
    int len = 0, start = -1;

    for (int i = 0; i < s.length(); i++)
    {
        if (dist[s[i]] > start)
        {
            start = dist[s[i]];
        }
        dist[s[i]] = i;
        len = max(len, i - start);
    }

    cout << len << endl;  
    return 0;
}