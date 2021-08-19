#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

int32_t main() 
{
    IOS;
    int t=1;
    cin>>t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n];

        for(int i=0;i<n;i++)
            cin >> a[i];

        if(n==1)
        {
            cout<<a[0]<<endl;
        }
        else if(n==2)
        {
            cout<<max(a[0],a[1])<<endl;
        }
        else if(n==3)
        {
            sort(a,a+n);
            cout<<max(a[0]+a[1],a[2])<<endl;
        }
        else   //n==4
        {
            sort(a,a+n);
            int i=max(a[0]+a[3],a[2]+a[1]);
            int j=max(a[0]+a[1]+a[2],a[3]);
            cout<<min(i,j)<<endl;
        }
    }
    return 0;
}