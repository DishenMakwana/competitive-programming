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

int32_t main()
{
    IOS;
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int w[n], l[n], pos[n];

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            pos[i] = i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }

        int stp = 0;
        int minidx = 0;
        for (int i = 0; i < n; i++)
        {
            minidx = i;
            for (int j = i + 1; j < n; j++)
            {
                if (w[minidx] > w[j])
                {
                    minidx = j;
                }
            }
            swap(w[i], w[minidx]);
            swap(l[i], l[minidx]);
            swap(pos[i], pos[minidx]);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (pos[i] > pos[j])
                {
                    while (pos[i] > pos[j])
                    {
                        stp++;
                        pos[j] += l[j];
                    }
                }
                if (pos[i] == pos[j])
                {
                    stp++;
                    pos[j] += l[j];
                }
            }
        }

        // cout << "Weights : ";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << w[i] << " ";
        // }
        // cout << endl;
        // cout << "Lengths : ";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << l[i] << " ";
        // }
        // cout << endl;
        // cout << "Positions : ";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << pos[i] << " ";
        // }
        // cout << endl;
        // cout << "Steps : " << stp << endl;

        cout << stp << endl;
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}