#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl;

    return 0;
}