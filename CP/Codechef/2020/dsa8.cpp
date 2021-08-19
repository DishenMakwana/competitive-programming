#include <bits/stdc++.h>
#define int long long int
#define endl '\n'
using namespace std;

int CONTEST_WON(int x)
{
    if (x>20)
    {
        return 300;
    }
    else
    {
        return (300+20-x);
    }
}

int32_t main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

	int t=1;
	cin>>t;
	while(t--)
    {
	    int a;
	    string origin;
	    cin >> a >> origin;
	    int sum=0;

	    for(int i=0;i<a;i++)
	    {
	        string c;
	        cin >> c;
	        if(c=="CONTEST_WON")
            {
	            int x;
	            cin >> x;
	            sum += CONTEST_WON(x);
	        }
	        else if(c=="TOP_CONTRIBUTOR")
            {
	            sum += 300;
	        }
	        else if(c=="BUG_FOUND")
            {
	            int bug;
	            cin >> bug;
	            sum += bug;
	        }
	        else if(c=="CONTEST_HOSTED")
            {
	            sum += 50;
	        }       
	    }

	    if (origin=="INDIAN")
        {
	        cout << sum/200 << endl;
	    }
	    else
        {
	        cout << sum/400 << endl;
	    }   
	}
	return 0;
}
