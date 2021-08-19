#include "bits/stdc++.h" 
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];
        
        vector<int> v(31,0);
		int count = 0;

		for(int i=0; i<n-1; i++)
        {
			if(x <=0 && count <= 0)
				break;

			int P=30, mask = pow(2,30);

			while(P >= 0)
            {
				if((a[i] & mask) >= 1)
                {
					if(v[P] == 1){
						a[i] = a[i] ^ mask;
						a[n-1] = a[n-1] ^ mask;
						v[P] = 0;
						count--;
					}
					else if(x > 0){
						a[i] = a[i] ^ mask;
						a[n-1] = a[n-1] ^ mask;
						v[P] = 1;
						count++;
						x--;
					}
				}
				P--;
				mask = mask / 2;
			}
		}

		if(x > 0)
        {
	        if(x % 2 == 1)
            {
			    if(n == 2 || x == 1)
                {
					a[n-1] ^= 1;
	                a[n-2] ^= 1;
				}
	        }
	    }

        for(int i=0; i<n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}