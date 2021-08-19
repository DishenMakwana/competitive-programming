#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin >> n;
       map<int,int> m;
       for(int i=0;i<n;i++)
       {
          int tmp;
          cin >> tmp;
          m[tmp]++;
       }
       
       /*for(auto i:m)
       {
          cout << i.first << " " <<  i.second << endl;
       }*/
       map<int,int> mm;
       for(auto i:m)
       {
          mm[i.second]++;
       }
       /*for(auto i:mm)
       {
          cout << i.first << " *" <<  i.second << endl;
       }
       cout << endl;*/
       
       int max=0,min=INT_MAX;
       for(auto i:mm)
       {
          if(i.second>max)
          {
             max = i.second;
             min = i.first;
          }
       }
       cout << min << endl;
    }
    return 0;
}
