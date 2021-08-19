#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define endl '\n'

int32_t main()
{
	IOS;
	int t=1;
	cin >> t;
    
	while(t--)
    {
	    int n;
	    cin >> n;

	    char arr[n+1][n+1];
	    for(int i=1;i<=n;i++)
	        for(int j=1;j<=n;j++)
	            cin >> arr[i][j];

	    int a = (int)arr[1][2]-48; //digit he choose
	    int b = (int)arr[2][1]-48;
	    int c = (int)arr[n-1][n]-48;
	    int d = (int)arr[n][n-1]-48;

        //cout << "a-" << a << " b-" << b << " c-" << c << " d-" << d << endl;

	    if(a==b)
	    {
	        if(c==d && c!=a)
            {
	            cout<<0<<endl;
            }
	        else if(c==d && c==a)
            {
                cout<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else if(c!=d)
            {
                if(c==a)
                {
                    cout<<1<<endl;
                    cout<<n-1<<" "<<n<<endl;
                }
                else
                {
                    cout<<1<<endl;
                    cout<<n<<" "<<n-1<<endl;
                }
            }
        }
        else
        {
            if(c==d)
            {
                if(c==a)
                {
                    cout<<1<<endl;
                    cout<<"1 2"<<endl;
                }
                else
                {
                    cout<<1<<endl;
                    cout<<"2 1"<<endl;
                }
            }
            else
            {
                if(c==a)
                {
                    cout<<2<<endl;
                    cout<<"2 1"<<endl;
                    cout<<n-1<<" "<<n<<endl;
                }

                if(c==b)
                {
                    cout<<2<<endl;
                    cout<<"1 2"<<endl;
                    cout<<n-1<<" "<<n<<endl;
                }
            }
        }
	}
    return 0;
}