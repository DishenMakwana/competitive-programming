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
		string s;
		cin >> s;
		int a=0,b=0,pa=0,pb=0,f=1;

		for(int i=0;i<2*n;i++)
		{
			if(i%2 == 0)
			{
				a++;
				if(s[i]=='1') // goal of a
					pa++;
			}
			else
			{
				b++;
				if(s[i]=='1') // goal of b
					pb++;
			}

			if((pa>(pb+n-b)) || (pb>(pa+n-a)))
			{
				cout << i+1 << "\n";
				f=0;
				break;
			}
		}
		if(f)
		{
			cout<<2*n<<"\n";
		}
	}
	return 0;
}