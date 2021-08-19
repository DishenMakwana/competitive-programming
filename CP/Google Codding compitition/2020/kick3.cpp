#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++) 
    {
      int n,k,c=0;
      cin >> n >> k;
      int a[n];
      for(int j=0;j<n;j++) 
      {
        cin >> a[j];
      } 
      int diff=0,high=0;
      int tmp[1000];
      for(int j=1;j<n;j++) 
      {
        diff = a[i] - a[i-1];
        if(c<k) 
        {
          if(diff>high) 
          {
            high= diff - (diff/2);
          }
          c++;
        }
        else
        {
          break;
        }
      }
      cout << "Case #" << i << ": " << high << endl;
    }
}