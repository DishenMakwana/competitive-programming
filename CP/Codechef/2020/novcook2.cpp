#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

int32_t main() 
{
    IOS;
	int t;
	cin >> t;
	
    while(t--)
    {
        string a,b;
        cin >> a >> b;
        int n = a.length();
        int ans=0;

        for(int i=0;i<a.length();i++)
        {
            if(a[i] == b[i])
                continue;

            for(int j=i; (j<a.length()) && (a[j]!=b[j]) ; j+=2) //swap the elements of odd length
            {
                a[j]=b[j];
            }
            ans++;
        }
        cout << ans << endl;
    }
	return 0;
}