#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() 
{ 
   int k;
   cin >> k;
   char a[8][8]={{'X','X','X','X','X','X','X','X'},
                 {'X','X','X','X','X','X','X','X'},
                 {'X','X','X','X','X','X','X','X'},
                 {'X','X','X','X','X','X','X','X'},
                 {'X','X','X','X','X','X','X','X'},
                 {'X','X','X','X','X','X','X','X'},
                 {'X','X','X','X','X','X','X','X'},
                 {'X','X','X','X','X','X','X','X'}};
   if(k==1)
   {
     a[0][0]='O';
   }
   else
   {
     for(int i=0;i<8;i++) 
     {
        for(int j=0;j<8;j++) 
        {
             if(k>0)
             {
                a[i][j]='.';
                k--;
             }
        }  
     }
     a[0][0]='O';
   }
   
   for(int i=0;i<8;i++)
   {
     for(int j=0;j<8;j++)
     {
       cout << a[i][j];
     }
     cout << endl;
   }
}

int32_t main()
{
  IOS;
  int t;
  cin >> t;
  while(t--)
     solve();
  
  return 0;
}