#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    long int t;
    cin >> t;
    for(long int j=1;j<=t;j++) 
    {
      long int n,d;
      cin >> n >> d;
      long int i,a[n];
      for(i=0;i<n;i++) 
      {
        cin >> a[i];
      } 
      long int sum=0;
      int count=0;
      sort(a,a+n);
      for(i=0;i<n;i++) 
      {
        sum = sum + a[i];
        count++;
        if(sum<=d) 
        {
          continue;
        }
        else 
        {
          sum = sum - a[i];
          count--;
        }
      }
      cout << "Case #" << j << ": " << count << endl;
    }
}