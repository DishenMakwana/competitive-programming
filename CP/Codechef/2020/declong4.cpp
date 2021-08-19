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
        int n,k;
        cin >> n >> k;
        int a[n]={0};

        for(int i=0;i<n;i++)
        {
            a[i]=(i+1);
        }

        if(k==0)
        {
            for(int i=0;i<n;i++)
            {
                a[i] = -1*a[i];
            }
        }
        else
        {
            int diff = n-k;
            for(int i=1;i<n && diff;i+=2)
            {
                a[i] = -1*a[i];
                diff--;
            }

            if(diff>0)
            {
                int i;
                if(n%2==0)
                {
                    i = n-2;
                }
                else
                {
                    i = n-1;
                }
                
                for(i;i>=0 && diff;i-=2)
                {
                    a[i] = -1*a[i];
                    diff--;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}