#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define endl '\n'

int32_t main()
{
	IOS;
	int t=1;
	//cin >> t;
    
	while(t--)
    {
	    string s;
	    cin>>s;

	    int n=s.size();
	    n--;

	    cout<<3<<endl;
	    cout<<"L"<<" "<<n<<endl;
	    cout<<"R"<<" "<<n<<endl;
	    cout<<"R"<<" "<<2*n+1<<endl;
	}
}

// abac
// Ans 
// L n - caba abac (take new substring as a string for next operation)
// R n - caba abac caba
// R 2*n+1 - caba abac caba abac