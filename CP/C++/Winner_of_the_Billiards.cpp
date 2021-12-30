#include "bits/stdc++.h"
using namespace std;
#define int long long int

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, si = 0, ti = 0, lead = 0, w = 0, win = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int s, t;
        cin >> s >> t;

        si = si + s;
        ti = ti + t;

        if (si > ti)
        {
            lead = si - ti;
        }
        else
        {
            lead = ti - si;
        }

        if (win < lead)
        {
            win = lead;

            if (si > ti)
            {
                w = 1;
            }
            else
            {
                w = 2;
            }
        }
    }
    cout << w << " " << win << endl;
    return 0;
}