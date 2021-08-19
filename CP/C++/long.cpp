#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

int32_t main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;

        double x = 0.000000, y = 0.000000;
        while (n--) 
        {
            int g, a, b;
            cin >> g >> a >> b;

            x += (double)(g/(a+b))*b;
            y += (double)(g/(a+b))*a;

        }   
        cout << fixed << setprecision(5) << x << " " << y << endl;
    }
    return 0;
}