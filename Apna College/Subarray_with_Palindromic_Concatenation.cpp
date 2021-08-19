// using sliding window approach
#include "bits/stdc++.h"
using namespace std;

bool isPalindrome(int n)
{
    int tmp = n, num = 0;

    while (tmp > 0)
    {
        num = num * 10 + tmp % 10;
        tmp = tmp / 10;
    }

    if (num == n)
    {
        return true;
    }
    return false;
}

int findPalindromicSubarray(vector<int> &a, int k)
{
    int num = 0;

    for (int i = 0; i < k; i++)
    {
        num = num * 10 + a[i];
    }

    if (isPalindrome(num))
    {
        return 0;
    }

    for (int j = k; j < a.size(); j++)
    {
        num = (num % (int)pow(10, k - 1)) * 10 + a[j]; // remove first digit and add last digit

        if (isPalindrome(num))
        {
            return j - k + 1;
        }
    }

    return -1;
}

int32_t main()
{
    vector<int> a = {2, 3, 5, 1, 1, 5};
    int k = 4;

    int idx = findPalindromicSubarray(a, k);

    if (idx == -1)
    {
        cout << "palindromic subarray doesn't exist!" << endl;
        return 0;
    }

    for (int i = idx; i < idx + k; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}