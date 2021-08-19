#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
    IOS;
    int t=1;
    //cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int fact=2;

        for(int i=2;i<n;i++)
        {
            fact *= i;
        }
        cout << (fact/n) << endl;
    }
    return 0;
}