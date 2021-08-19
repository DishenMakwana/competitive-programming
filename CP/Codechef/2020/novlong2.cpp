#include<bits/stdc++.h>
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
        {
            cin >> a[i];
        }

        int b[n];
        memset(b, -1, sizeof(b));
        
        int f=1;
        for(int i=n-1;i>=0;i--)
        {
            if(b[ a[i]-1 ] == -1)
            {
                b[ a[i]-1 ]=f;
                f++;
            }
            b[i] = b[ a[i]-1 ];
        }

        for(int i=0;i<n;i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}