#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

void solve()
{
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1==x2 || y1==y2)
    {
        cout << abs(x1-x2)+abs(y1-y2) << endl;
    }
    else
    {
        cout << abs(x1-x2)+abs(y1-y2)+2 << endl;
    }
}

int32_t main()
{
	int t=1;
	cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
