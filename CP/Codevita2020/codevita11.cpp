#include <bits/stdc++.h>
#include <boost/algorithm/string/classification.hpp> 
#include <boost/algorithm/string/split.hpp>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

vector<string> split (string s, string delimiter) 
{
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

int32_t main()
{
  IOS;
  string a,b,c;
  cin >> a >> b >> c;
  int aa=stoi(a);
  int bb=stoi(b);
  int cc=stoi(c);
  cout << aa << " " << bb << " " << cc << endl;
  
    string S, T;
    cin.ignore();
    getline(cin, S);
    stringstream X(S); 
    while (getline(X, T, '|')) { 
        cout << T << endl; 
        vector<string> str;
        std::vector<std::string> words;
std::string s;
boost::split(words, s, boost::is_any_of(", "), boost::token_compress_on);

    }
  return 0;
}