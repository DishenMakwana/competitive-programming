#include "bits/stdc++.h" 
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;

    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int p[m];

        for(int i=0;i<m;i++)
            cin >> p[i];
        
        int g=0;
        for(int i=0;i<m;i++) // find gcd for repetation
        {
            g = gcd(g, p[i]);
        }

        if(g>n)
        {
            int fact = maxfact(g,n); // find the minimum one, which is less than N.
            g = fact;
        }

        cout << (n-g) << endl;
    }
    return 0;
}

int gcd(int x,int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return gcd(y, x%y);
    }
}

int maxfact(int g, int n)
{
    int max_fact=0;

    for(int i=1;i*i<=g;i++)
    {
        if(g%i == 0)
        {
            if(i <= n)
            {
                max_fact = max(max_fact, i);
            }
            
            if(g/i <= n)
            {
                max_fact = max(max_fact, g/i);
            }
        }
    }
    return max_fact;
}