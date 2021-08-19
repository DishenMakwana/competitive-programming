#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = n;
    int sum = 0;
    while (n > 0)
    {
        int last = n % 10;
        sum += pow(last, 3);
        n /= 10;
    }
    sum == num ? cout << "Armstrong number" << endl : cout << "Not Armstrong number" << endl;
    return 0;
}