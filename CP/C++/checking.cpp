#include "bits/stdc++.h"
#define int long long int
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

void solve()
{
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int first = v[0];
    int last = v[v.size() - 1];
    int freq[14];

    for (int i = 0; i < v.size(); i++)
    {
        freq[v[i]]++;

        if (i >= 1 && v[i] < v[i - 1])
        {
            cout << "false" << endl;
        }
    }

    if (n >= 3 && n < 14 && freq[1] == 1)
    {
        cout << "true" << endl;
    }
    else
    {
        bool f = true;
        int cnt = 0;
        cnt += freq[13];

        for (int i = 1; i < 13; i++)
        {
            if (freq[i] * freq[i + 1] == 1 && f)
            {
                cnt++;
            }
            else if (cnt > 1)
            {
                f = false;
            }
        }
        
        bool op = ((cnt + 1) == v.size()) ? "true" : "false";
        cout << (bool)op;
        cout << endl;
    }

    // for (auto x : v)
    // {
    //     cout << x << endl;
    // }
}

int32_t main()
{
    IOS;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// bool solve(vector<int> &a)
// {
//     int freq[14]={0};
//     for(int i=0 ; i<a.size() ; i++)
//     {
//         freq[a[i]]++;
//         if(i>=1 && a[i]<a[i-1])
//             return false;
//     }
//     if(freq[1] == freq[13] && freq[1] == 1)
//         return true;
//     else
//     {
//         bool f=true;
//         int cnt = 0;
//         cnt += freq[13];
//         for(int i=1 ; i<13 ; i++)
//         {
//             if(freq[i]*freq[i+1] == 1 && f)
//                 cnt++;
//             else if(cnt > 1)
//             {
//                 f = false;
//                 //cnt++;
//             }
//         }
//         // cout << cnt << " " << a.size() <<"\n";
//         return cnt+1 == a.size();
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> a;
//     for(int i=0 ; i<n ; i++)
//     {
//         int t;
//         cin >> t;
//         a.push_back(t);
//     }
//     if(n<3 || n>13)
//         cout<<"False";
//     else
//         solve(a) ? cout<<"True" : cout<<"False";
// }