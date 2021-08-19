#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        
        if(n==1)
        {
            cout << "0" << endl;
        }
        else if(n==2)
        {
            cout << "1" << endl;
        }
        else if(n==3)
        {
            cout << "2" << endl;
        }
        else if(n%2==0)
        {
            cout << "2" << endl;
        }
        else if(n%2==1)
        {
            cout << "3" << endl;
        }
    }
    return 0;
}