#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

int32_t main() 
{
    IOS;
	int t;
	cin >> t; 

	while(t--)
	{
	    int n;
	    cin >> n;
	    int tmp=0,ex=1;

	    while(true)
	    {
	        tmp = pow(2,ex);
	        ex++;
            
	        if(tmp >= n)
	            break;
	    }
	    
	    if(tmp == n)
        {
	        cout << "-1" << endl;
        }
	    else
        {
            if(n >= 3)
            {
                cout << "2 3 1 ";
            }

            if(n==1)
            {
                cout << "1" << endl;
            }
            else
            {
                for(int i=4,j=2;i<=n;i++)
                {
                    if( i == pow(2,j) )
                    {
                        cout << i+1 << " " << i << " ";
                        j++;
                        i++;
                    }
                    else
                    {
                        cout << i << " ";
                    }
                }
                cout << endl;
            }
        }
	}
	return 0;
}