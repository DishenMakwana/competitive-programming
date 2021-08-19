#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    string s = "dsfnfdshjfiassnd";

    int freq[26] = {0};

    // for (int i = 0; i < 26; i++)
    // {
    //     freq[i] = 0;
    // }

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }

    char ans = 'a';
    int mxfreq = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > mxfreq)
        {
            mxfreq = freq[i];
            ans = 'a' + i;
        }
    }

    cout << mxfreq << endl;
    cout << ans << endl;

    return 0;
}