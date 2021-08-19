#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int ispowerof2(int n)
{
    return n && !(n & n - 1);
}

int32_t main()
{
    boost;
    cout << (ispowerof2(8) == 1 ? "True" : "False") << endl;
    return 0;
}