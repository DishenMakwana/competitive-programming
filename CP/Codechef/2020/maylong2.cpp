#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve() 
{
 int n; 
 cin >> n;
 int m = 1000000;
 unordered_map<int, int> mp;

 for(int i=0; i<n; i++)
 {
  int x;
  cin >> x;
  mp[x]++;
  m = min(x,m);
 } 
 for(int i=0; i<n; i++)
 {
  int x;
  cin >> x;
  mp[x]--;
  m = min(x,m);
 } 

 for(auto x: mp)
 {
  if(x.second&1)
  {
   cout << "-1\n";
   return;
  }
 } 

 vector<int> arr;

 for(auto x: mp)
 {
  if(x.second == 0)
  {
   continue;
  }
  else
  {
   for(int i=0; i<abs(x.second)/2; i++)
   {
    arr.push_back(x.first);
   } 
  }
 }

 int ans = 0;
 sort(arr.begin(),arr.end());
 
 for(int i=0; i<arr.size()/2; i++)
 {
  if(arr[i] >= 2*m)
  {
   ans += 2*m;
  }
  else
  {
   ans += arr[i];
  }
 }
 cout << ans << endl;
}
 
int32_t main() 
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin>>t;
  while(t--)
   solve();
  return 0;
}