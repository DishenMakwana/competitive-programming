#include<bits/stdc++.h>
#define int long long int   
using namespace std;

int32_t main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 5; n / i >= 1; i *= 5)
        {
            cnt += n / i;
        }
        cout<<cnt<<endl;
    }
    return 0;
}