#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int numberofones(int n)
{
    int cnt = 0;
    while (n)
    {
        n = (n & n - 1);
        cnt++;
    }
    return cnt;
}

int32_t main()
{
    boost;
    cout << numberofones(6) << endl;
    return 0;
}