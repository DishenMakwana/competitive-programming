#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    cin.ignore();
    char s[n + 1];

    cin.getline(s, n);
    cin.ignore();

    int i = 0, currlen = 0, mxlen = 0, st = 0, maxst = 0;

    while (1)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            if (currlen > mxlen)
            {
                mxlen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i + 1;
        }
        else
        {
            currlen++;
        }

        if (s[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << mxlen << endl;
    for (int i = 0; i < mxlen; i++)
    {
        cout << s[i + maxst];
    }

    return 0;
}