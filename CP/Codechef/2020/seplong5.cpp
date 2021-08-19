#include <bits/stdc++.h>
using namespace std;

int query(int x) 
{
    cout<<1<<' '<<x<<endl;
    int ans;
    cin>>ans;
    return ans;
}

int num[100];

int32_t main() 
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    
    int t;
    cin>>t;
    
    int up=0;
    for(int i=0;i<20;i++) 
        up+=(1<<i);

    while(t--) 
    {
        int n;
        cin>>n;
        int a=query(up);
        int sum=a;

        for(int i=19;i>=1;i--) 
        {
            int now=1<<i;
            int b=query(up^now);
            num[i]=(now*n+(b-a))/2;
            num[i]>>=i;
            sum -= (n-num[i])*(1<<i);
        }
        num[0]=n-sum;
        int ans=0;
        for(int i=0;i<20;i++) 
        {
            if(num[i]&1) 
                ans+=1<<i;
        }
        cout<<2<<' '<<ans<<endl;
        int x;
        cin>>x;
    }
    return 0;
}
