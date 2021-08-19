#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;
#define int long long int

using namespace std;

void solve() 
{
    int n,k,d0,d1;
    cin >> k >> d0 >> d1;
    int sum = 0, val = 0, modval;

    int d2 = (d0 + d1) % 10; 
    int d3 = (2 * (d0 + d1)) % 10;
    int d4 = (4 * (d0 + d1)) % 10;
    int d5 = (8 * (d0 + d1)) % 10;
    int d6 = (6 * (d0 + d1)) % 10;
    val = d3 + d4 + d5 + d6;
    
    sum = d0 + d1 + d2 + (val * ((k - 3)/4));
    
    modval = (k-3) % 4;

    switch(modval)
    { 
        case 1: sum += d3;
                    break;
        case 2: sum += (d3 + d4);
                    break;
        case 3: sum += (d3 + d4 + d5);
                    break;
    }

    if(sum % 3 == 0)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
}

int32_t main() 
{
    IOS;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}