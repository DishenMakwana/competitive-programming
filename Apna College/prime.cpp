#include "bits/stdc++.h"
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "It is not prime number " << n << endl;
//             break;
//         }
//     }
//     cout << "It is prime number " << n << endl;

//     return 0;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int cnt = 0;
//     for (int i = a; i <= b; i++)
//     {
//         bool f = true;
//         for (int j = 2; j <= sqrt(i); j++)
//         {
//             if (i % j == 0)
//             {
//                 f = false;
//                 break;
//             }
//         }

//         if (f)
//         {
//             cout << i << endl;
//             cnt++;
//         }
//     }
//     cout << endl;
//     cout << "total prime between " << a << " and " << b << " is : " << cnt << endl;
//     return 0;
// }

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " is prime" << endl;
        }
    }
    return 0;
}