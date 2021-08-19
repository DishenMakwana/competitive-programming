#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    string s = "53241";

    sort(s.begin(), s.end(), greater<int>());

    cout << stoi(s) << endl;

    return 0;
}