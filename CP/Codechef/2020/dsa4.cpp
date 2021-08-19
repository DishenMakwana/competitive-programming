#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);

    long long t=1;
    //cin>>t;
    while(t--)
    {
        long long n; 
        cin>>n;
        vector<long long> arr;

        for(long long i=0;i<n;i++)
        {
            long long x; cin>>x; arr.push_back(x);
        }

        sort(arr.begin(), arr.end());

        long long max_ans = INT_MIN, ans;

        for(long long i=0;i<n;i++)
        {
            ans = arr[i]*(n-i);
            max_ans = max(ans, max_ans);
        }
        
        cout<<max_ans<<"\n";
    }
	return 0;
}
