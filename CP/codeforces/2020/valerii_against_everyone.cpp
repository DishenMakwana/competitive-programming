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
        int n;
        cin >> n;
        int a[n];
        set<int> s;

        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        
        if(s.size()==n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}