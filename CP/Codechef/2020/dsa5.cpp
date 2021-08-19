#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);

    int t=1; 
    cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        vector<int> arr;

        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            arr.push_back(x);
        }

        int cnt = 1;

        for(int i=1;i<n;i++)
        {
            if(arr[i-1] < arr[i])
            {
                arr[i] = arr[i-1];
            }
            else
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
	return 0;
}