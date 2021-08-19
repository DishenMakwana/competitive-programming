#include "bits/stdc++.h"
#define int long long int
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;

        vector<string> arr(n);

        string p1 = "";
        string p2 = "";

        for (int i = 0; i < m; i++)
        {
            if (i % 2 == 0)
            {
                p1 += '*';
                p2 += '.';
            }
            else
            {
                p1 += '.';
                p2 += '*';
            }
        }

        // cout << "p1 : " << p1 << endl << "p2 : " << p2 << endl;
        int count1=0, count2=0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            for (int j = 0; j < m; j++)
            {
                if (i % 2 == 0)
                {
                    if (j % 2 == 0 && arr[i][j] != '*')
                    {
                        count1++;
                    }
                    else if (j % 2 && arr[i][j] != '.')
                    {
                        count1++;
                    }

                    if (j % 2 && arr[i][j] != '*')
                    {
                        count2++;
                    }
                    else if (j % 2 == 0 && arr[i][j] != '.')
                    {
                        count2++;
                    }
                }
                else
                {
                    if (j % 2 && arr[i][j] != '*')
                    {
                        count1++;
                    }
                    else if (j % 2 == 0 && arr[i][j] != '.')
                    {
                        count1++;
                    }

                    if (j % 2 == 0 && arr[i][j] != '*')
                    {
                        count2++;
                    }
                    else if (j % 2 && arr[i][j] != '.')
                    {
                        count2++;
                    }
                }
            }
        }
        //cout << count1 << " " << count2 << endl;

        if (m % 2 == 0 || n % 2 == 0)
        {
            cout << min(count1, count2) << '\n';
        }
        else
        {
            cout << count1 << '\n';
        }
    }

    return 0;
}