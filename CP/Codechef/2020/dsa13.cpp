#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

using namespace std;

int32_t main() 
{
	IOS;
	int t=1;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int s[n];
        int sum=0,idx=0;

        for(int i=0;i<n;i++)
        {
            cin >> s[i];
            
            if(s[i]<s[idx])
            {
                sum += s[i];
                idx = i;
            }
            else
            {
                sum += s[idx];
            }
        }
        cout << sum << endl;
	}
	return 0;
}