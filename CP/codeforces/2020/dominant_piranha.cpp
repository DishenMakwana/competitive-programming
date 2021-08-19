#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main()
{
	int t=1;
	cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        bool f=false;

        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]!=arr[i-1] && i>0)
                f=true;
        }
        if(!f)
        {
            cout << "-1\n";
        }
        else
        {
            int mx = *max_element(arr, arr + n);
            for(int i=0;i<n;i++)
            {
                if(( (mx!=arr[i+1] && i<n-1) || (mx!=arr[i-1] && i>0) ) && arr[i]==mx )
                {
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}