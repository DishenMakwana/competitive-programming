#include <iostream>
#include <algorithm>
using namespace std;

int32_t main()
{
    long long n;
    cin >> n;
    long long arr[n], i = 0;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    long long count = 0, sum = 0;

    if (arr[n - 1] < 0)
    {
        cout << arr[n - 1] << " "
             << "1";
    }
    else
    {
        for (i = n - 1; i >= 0; i--)
        {
            if (arr[i] < 0)
            {
                break;
            }
            sum += arr[i];
            count++;
        }
        cout << sum << " " << count;
    }
    return 0;
}