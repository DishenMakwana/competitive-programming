#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007
 
long long find_pos(long long sum)  
{
  long double ans = sqrtl(1ul+4*(sum));
  
  ans = ans-1.0;
  ans = ans/2.0;
  
  long long anss = ans;
  return anss;
}
 
void solve()  
{
  long long n;
  cin >> n;
  
  long long sum = (n)*(n+1)/2;
  
  if(sum%2!=0)  
  {
    cout << 0 << endl;
    return;
  }
  
  long long x = find_pos(sum);
  long long subsum = x*(x+1)/2;
  
  if(sum/2 == subsum)  
  {
    long long res = (x*(x-1ul))/2l+((n-x)*(n-x-1ul))/2l+(n-x);
    cout << res << endl;
  }
  else
  {
    cout << n-x << endl;
  }
}
 
int32_t main()  
{
  IOS;
  int t;
  cin >> t;
  while(t--)  
  {
    solve();
  }  
  return 0;
}
