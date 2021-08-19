#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
   int loan_amt,yr;
   double bank[2]={0};
   cin >> loan_amt >> yr;
   for(int k=0;k<2;k++)
   {
      int n;
      cin >> n;
      int l=0;
      double emi=0,sum=0;
      for(int i=0;i<n;i++)
      {
         int y,r;
         cin >> y >> r;
         double tmp = pow((1+r),y*12);
         emi = (loan_amt*r)/( 1 - ( 1/tmp ) );
         sum += emi;
      }
      bank[l++]=emi;
   } 
   if(bank[0]<bank[1]) 
     cout << "Bank A" << endl;
   else
     cout << "Bank B" << endl;
}

int32_t main()
{
  IOS;
  /*int t;
  cin >> t;
  while(t--)*/
     solve();
  
  return 0;
}