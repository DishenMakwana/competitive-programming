#include <bits/stdc++.h>
using namespace std;

void coins(int a[],int n,int sum)
{    
   int dp[n+1][sum+1];     
   
   for(int i=0;i<=n;i++)      
      dp[i][0]=1;
      
   for(int j=1;j<=sum;j++)
      dp[0][j]=0;
      
    
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=sum;j++)
       {
          if(a[i-1]>j)  
            dp[i][j] = dp[i-1][j];
            
          else
            dp[i][j] = dp[i][j-a[i-1]]+dp[i-1][j];     
       }
   }     
   cout<< dp[n][sum] << endl;
   /*for(int i=0;i<=n;i++)
   {
      for(int j=0;j<=sum;j++)
      {
         cout << dp[i][j] << " ";
      }
      cout << endl;
   }*/
}

int32_t main() 
{
    int t; 
    cin>>t;
    
    while(t--)
    {  
      int n;  
      cin>>n;
   
      int a[n]={0};
      for(int i=0;i<n;i++)
        cin>>a[i];

      int sum;   
      cin>>sum;

      coins(a,n,sum);
    }
    return 0;
}
