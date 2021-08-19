#include "bits/stdc++.h" 
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 

vector<vector<int>> ans;

void permute(vector<int> &a,int idx)
{
    if(idx==a.size())
    {
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++)
    {
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
    {
        cin >> i;
    }

    // permute(a,0);    // Method 1
    // for(auto v : ans)
    // {
    //     for(auto i : v)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    sort(a.begin(),a.end());    // Method 2
    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(),a.end()));

    for(auto v : ans)
    {
        for(auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}