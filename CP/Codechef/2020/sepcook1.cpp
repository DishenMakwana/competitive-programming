#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,l;
        cin>>n>>k>>l;
        vector<int>v;
        int count=1;
        if (k*l >= n)
        {
            int i=n;

            while(i--)
            {
                if (count == k+1)
                count=1;
                v.push_back(count);
                count++;
            }

            if (n==1 && k==1)
                cout<<"1";
            else if (k!=1)
            {
                for (int j=0;j<v.size();j++)
                    cout<<v[j]<<" ";
            }
            else
                cout<<"-1";

            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}