#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define ll long long
int32_t main()
{
    ll n, k;
    cin >> n >> k;
    ll h[n], val[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    
    for (int i = 0; i < k; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            ll b, k;
            cin >> b >> k;
            val[b - 1] = k;
        }
        else
        {
            ll b, c;
            cin >> b >> c;
            ll source = c - 1;
            ll destiny = b - 1;
            
            if (source == destiny)
            {
                cout << val[source] << "\n";
                continue;
            }
            
            if(h[destiny]<=h[source])
            {
               cout<<-1<<endl;
               continue;
            }
            
            ll direction = (destiny - source)/(abs(destiny - source));
            ll next = source + direction;
            ll currrent = source;
            ll cost = val[source];
            bool fg = false;
            
            while (next != destiny)
            {
                if (h[currrent] < h[next])
                {
                    currrent = next;
                    cost += val[currrent];
                }
                if (h[next] >= h[destiny])
                {
                    fg = true;
                    break;
                }
                next += direction;
            }
            if (fg)
            {
                cout << "-1"<< "\n";
            }
            else
            {
                cout << cost + val[destiny] << "\n";
            }
        }
    }
    return 0;
}
    