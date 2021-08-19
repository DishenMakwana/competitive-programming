#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

inline void guts()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
}

int changeto24(int p1, int p2, string f)
{
    int pans = 0;
    if (f == "PM")
    {
        if (p1 != 12)
        {
            pans = ((p1 + 12) * 60) + p2;
        }
        else
        {
            pans = 720 + p2;
        }
    }
    else
    {
        if (p1 != 12)
        {
            pans = p1 * 60 + p2;
        }
        else
        {
            pans = p2;
        }
    }
    return pans;
}

int32_t main()
{
    IOS;
    int t = 1;
    cin >> t;

    while (t--)
    {
        string p, q;
        cin >> p >> q;

        int posp = p.find(":");
        int pl = stoi(p.substr(0, posp));
        int pr = stoi(p.substr(posp + 1));

        int pans = changeto24(pl, pr, q);

        int n;
        cin >> n;

        string ans = "";
        for (int i = 0; i < n; i++)
        {
            string x, y, z, w;
            cin >> x >> y >> z >> w;
            // cout << x << y << " " << z << w << endl;

            int posx = x.find(":");
            int xl = stoi(x.substr(0, posx));
            int xr = stoi(x.substr(posx + 1));

            int xans = changeto24(xl, xr, y);

            int posz = z.find(":");
            int zl = stoi(z.substr(0, posz));
            int zr = stoi(z.substr(posz + 1));

            int zans = changeto24(zl, zr, w);

            if (pans >= xans && pans <= zans)
            {
                ans += '1';
            }
            else
            {
                ans += '0';
            }
        }
        cout << ans << endl;
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}