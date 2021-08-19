#include "bits/stdc++.h"
using namespace std;

// applications of catalan numbers
//  - possible BSTs
// - paranthesis / bracket combinations
// - possible forests
// - ways of triangulations
// - possible paths in matrix
// - dividing a circle using N chords 
// - dyck words of given length 

int catalan(int n)
{

    if (n <= 1)
    {
        return 1;
    }

    int res = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        res += catalan(i) * catalan(n - i - 1);
    }

    return res;
}

int32_t main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << catalan(i) << " ";
    }
    return 0;
}