#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    char s[n + 1];
    cin >> s;

    bool chk = 1;

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            chk = 0;
            break;
        }
    }

    if (chk)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}