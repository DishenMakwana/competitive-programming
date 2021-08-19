#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[n];
       
       for(int i=0;i<n;i++)
       {
          cin >> a[i];
       }
       
       vector<int> v;
       for(int i=0;i<n;i++)
       {
         int cnt=0;
         while(i<n)
         {
            if(a[i]==0)
            {
                cnt++;
                i++;
            }
            else
                break;
         }
         v.push_back(cnt);
       }
        
       sort(v.begin(),v.end(),greater<int>());
       
       /*for(int i=0;i<v.size();i++)
       {
          cout << v[i] << " ";
       }
       cout << endl;*/
       
       if(v.size()>1 && v[1]>v[0]/2)
       {
          cout << "No" << endl;
          continue;
       }
       
       if(v[0]%2==1)
       {
          cout << "Yes" << endl;
       }
       else
       {
          cout << "No" << endl;
       }
    }
    return 0;
}