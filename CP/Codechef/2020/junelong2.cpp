#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int


void solve() 
{
    string s;
    cin>>s;
    
    vector<int> v(s.size(),-1);
    stack<int>st;
    int temp=-1;
    
    for (int i = s.size()-1; i >=0; i--)
    {
      if(s[i]==')')
      {
        st.push(i);
        v[i]=temp;
      }
      else if(s[i]=='(' && st.empty())
      {
        temp=-1;
      }
      else if(s[i]=='('&& !st.empty())
      {
        v[i]=st.top();
        temp=v[i];
        st.pop();
      }
    }
    
    /*for(int i=0;i<v.size();i++)
    {
       cout << v[i] << " ";
    }
    cout << endl;*/
    
    int q;
    cin>>q;
    
    for (int i = 0; i < q; i++)
    {
      int t;
      cin>>t;
      if(v[t-1]==-1)
         cout << -1 << endl;
      else 
        cout << v[t-1]+1 << endl;
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



    