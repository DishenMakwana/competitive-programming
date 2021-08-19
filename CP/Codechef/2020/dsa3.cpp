#include <bits/stdc++.h>
#define int long long int
#define IOS  ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int32_t main() 
{
    IOS;
	int t=1;
	cin>>t;
	while(t--)
    {
	    int larr[26], rarr[26];
	    
	    string s;
	    cin>>s;
	    
	    for(int i = 0; i < 26; i++)
        {
	        larr[i] = 0;
	        rarr[i] = 0;
	    }
	    
	    for(int i = 0; i < s.length()/2 ; i++)
        {
	       int index=s[i]-'a';
	       larr[index]++;
	    }
	    
	    for(int i = (s.length() + 1)/2 ; i < s.length() ; i++)
        {
	      int index=s[i]-'a';
	       rarr[index]++;
	    }
	    
	    bool istrue = true;
	    for(int i = 0; i < 26; i++)
        {
	        if(larr[i] != rarr[i])
            {
	            istrue = false;
	            break;
	        }
	    }
	    
	    if(istrue == true)
        {
	        cout<<"YES"<<endl;
	        
	    } 
        else 
        {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
