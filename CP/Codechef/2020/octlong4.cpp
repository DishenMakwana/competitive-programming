#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

void solve()
{
    int n,x,p,k;
        cin >> n >> x >> p >> k;

        p--; // for proper indexing
        k--; // for proper indexing

        vector<int> v(n);
        for(int i=0;i<n;i++)
        {    
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        if(v[p] == x) 
        {
            cout << 0 << endl;
            return;
        }
        
        if(p == k) 
        {
            if(x > v[p]) 
            {
                int cnt = 0;
                for(int i=p;i<n;i++) 
                {
                    if(v[i] >= x)   
                        continue;
                    else    
                        cnt++;
                }
                cout << cnt << endl;
            }
            else // (x < v[p])
            {
                int cnt = 0;
                for(int i=0;i<=p;i++) 
                {
                    if(v[i] <= x)   
                        continue;
                    else    
                        cnt++;
                }
                cout << cnt << endl;
            }
        }
        else if(p < k) 
        {
            if(x > v[p])    
            {
                cout<< -1 << endl;
                return;
            }
            else // (x < v[p])
            {
                int cnt = 0;
                for(int i=0;i<=p;i++) 
                {
                    if(v[i] <= x)   
                        continue;
                    else
                        cnt++;
                }
                cout << cnt << endl;
                return;
            }
        } 
        else 
        {
            if(x < v[p])    
            {
                cout << -1 << endl;
                return;
            } 
            else // (x > v[p])
            {
                int cnt = 0;
                for(int i=n-1;i>=p;i--) 
                {
                    if(v[i] >= x)   
                        continue;
                    else
                        cnt++;
                }
                cout << cnt << endl;
                return;
            }
        }
}

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}