#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;
 
        int a[n][m];
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
 
        int f = 0; //even
 
        for (int i = 0; i < n; i++)
        {
            int f1 = f;

            for (int j = 0; j < m; j++)
            {
                if (a[i][j] % 2 != f1)
                {
                    a[i][j]++;
                }

                if (f1 == 0)
                {
                    f1 = 1;
                }
                else
                {
                    f1 = 0;
                }
            }
            
            if (f == 0)
            {
                f = 1;
            }
            else
            {
                f = 0;
            }
        }
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}