#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
          cin >> a[i];
        
        map<int,int> m;
        
        for(int i=0;i<n;i++)
        {
           m[a[i]]++;
        }
        
        map<int,int> :: iterator itr=m.begin();
        
        if(itr->first == 0)
        {
           cout << m.size()-1 << endl;
        }
        else
        {
           cout << m.size() << endl;
        }
    }
    return 0;
}
    