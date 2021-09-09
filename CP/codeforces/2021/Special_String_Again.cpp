#include <bits/stdc++.h>
using namespace std;
#define ll long long

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

long fun(int n, string s)
{
    long result = 0;
    long i = 0;

    // 1st case, all letters are the same
    while (i < n)
    {
        long charCount = 1;
        while (i + 1 < s.size() && s[i] == s[i + 1])
        {
            i++;
            charCount++;
        }

        result += ((charCount * (charCount + 1)) / 2);
        i++;
    }

    // 2nd case, palindrome
    for (i = 1; i < n; i++)
    {
        long charCount = 1;
        while (i + charCount < s.size() && i - charCount >= 0 && s[i - 1] != s[i] && s[i - 1] == s[i - charCount] && s[i - 1] == s[i + charCount])
        {
            charCount++;
        }
        result += charCount - 1;
    }
    return result;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // init_code();

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << fun(n, s) << endl;
    }
    return 0;
}