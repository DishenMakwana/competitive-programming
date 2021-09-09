#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    int longestSubstring(string s, int k)
    {
        if (s.size() == 0 || k > s.size())
            return 0;
        if (k == 0)
            return s.size();

        unordered_map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }

        int idx = 0;
        while (idx < s.size() && m[s[idx]] >= k)
            idx++;
        if (idx == s.size())
            return s.size();

        int l = longestSubstring(s.substr(0, idx), k);
        int r = longestSubstring(s.substr(idx + 1), k);

        return max(l, r);
    }
};

int32_t main()
{
    string s;
    cin >> s;

    int k;
    cin >> k;

    Solution sol;
    cout << sol.longestSubstring(s, k) << endl;

    return 0;
}