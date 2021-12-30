#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> m;
    int maxx = INT_MIN;

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
        maxx = max(maxx, m[s[i]]);
        // cout << maxx << " ";

        if (i > 3 && (maxx > (i + 1) / 3))
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}