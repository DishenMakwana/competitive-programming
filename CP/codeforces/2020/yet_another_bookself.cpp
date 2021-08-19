#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main()
{
	int t=1;
	cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a[n],cnt=0;

        for(int i=0;i<n;i++)
            cin>>a[i];
                
        int i=0;
        while(a[i]!=1 && i<n)
            i++;
                        
        int j=n-1;
        while(a[j]!=1 && j>=0)
            j--;
                        
        for(int x=i;x<j;x++)
        {
            if(a[x]==0)
                cnt++;
        }
        cout << cnt << endl;
    }
	return 0;
}