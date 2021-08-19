#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

int32_t main()
{
    IOS;
    int t;
    cin >> t;
    string s[t];

    for(int i=0;i<t;i++)
    {
        cin >> s[i];   
    }

    map<char, int> mp;
    int count = 0;
    int x = 3;
    int n = 2;
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (c == 'p' || c == 'w')
        {
            x = 4;
        }
        else if (c == 't')
        {
            x = 3;
        }
        mp[c] = n;
        count++;
        if (count == x)
        {
            n++;
            count = 0;
        }
    }
    /*for(auto x:mp)
    {
        cout << x.first << " " << x.second << "\n";
    }*/
    
    map<int, int> mp1;
    for (int i = 0; i < t; i++)
    {
        string str1 = "";
        for (int j = 0; j < s[i].length(); j++)
        {
            str1 += to_string(mp[s[i][j]]); //convert into string
        }
        mp1[stoi(str1)]++;  // stoi -> string to integer
    }
    /*for(auto x:mp1)
    {
        cout << x.first << " " << x.second << "\n";
    }*/
    
    int max = 0, key = 0;
    for(auto x:mp1)
    {
        if(x.second > max)
        {
            max = x.second;
            key = x.first;
        }
    }

    int mx=0;
    for(auto i:mp1)
    {
        if(max==i.second)
        {
            mx=i.first;
        }
    }
    cout << mx << "\n";
    return 0;
}

