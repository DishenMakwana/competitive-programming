#include "bits/stdc++.h"
using namespace std;

// int32_t main()
// {
//     string s;
//     getline(cin, s);
//     istringstream ss(s);
//     vector<string> v;
//     string word;

//     while (ss >> word)
//     {
//         v.push_back(word);
//     }

//     reverse(v.begin(), v.end());
//     for (auto x : v)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
//     return 0;
// }

int32_t main()
{
    string s;
    vector<string> v;
    while (cin >> s)
    {
        v.push_back(s);
    }
    reverse(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}