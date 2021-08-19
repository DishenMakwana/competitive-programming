#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n][n];
        
        for(int i=0 ; i<n ; i++)
            for(int j=0 ; j<n ; j++)
                cin >> a[i][j];
        
        int cnt=0;
        for(int j=n-1 ; j>0 ; j--)        
        {
            if(a[0][j] != j+1)
            {
                for(int i=0 ; i<=j ; i++)
                {
                    int temp = a[0][i];
                    a[0][i] = a[i][0];
                    a[i][0] = temp;
                }
                cnt++;
            }
        }
        cout << cnt <<"\n";
    }
    return 0;
}