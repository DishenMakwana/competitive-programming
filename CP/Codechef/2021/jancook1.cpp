#include "bits/stdc++.h"
#define int long long int
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

int32_t main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        if (str.length() < 10)
        {
            cout << "NO" << "\n";
        }
        else
        {
            int l = 0, u = 0, d = 0, s = 0;

            for (int i = 0; i < str.length(); i++)
            {
                if (islower(str[i]))
                {
                    l++; // lower
                }
                else if (isupper(str[i]) && i != 0 && i != (str.length() - 1))
                {
                    u++; // upper
                }
                else if (isdigit(str[i]) && i != 0 && i != (str.length() - 1))
                {
                    d++; // digit
                }
                else if (i != 0 && i != (str.length() - 1) && (str[i] == '@' || str[i] == '#' || str[i] == '%' || str[i] == '&' || str[i] == '?'))
                {
                    s++; // specail char
                }
            }

            if (l && u && d && s)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}