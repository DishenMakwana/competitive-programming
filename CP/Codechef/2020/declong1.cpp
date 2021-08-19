#include <bits/stdc++.h> 
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 

int32_t main()
{
    IOS;
    int t=1;
    // cin >> t;
    while(t--)
    {
        int d1,v1,d2,v2,p;
        cin >> d1 >> v1 >> d2 >> v2 >> p;

        int days=0,total=0;
        if(d1==d2)
        {
            days = d1-1;
            days += (p+(v1+v2)-1)/(v1+v2);
            
        }
        else
        {
            if(d1<d2)
            {
                days = d1-1;
                int dd = (d2-d1);

                while(total<p && dd)
                {
                    total += v1;
                    days++;
                    dd--;
                }

                days += ((p-total)+(v1+v2)-1)/(v1+v2);
            }
            else
            {
                days = d2-1;
                int dd = (d1-d2);

                while(total<p && dd)
                {
                    total += v2;
                    days++;
                    dd--;
                }
                days += ((p-total)+(v1+v2)-1)/(v1+v2);
            }   
        }
        cout << days << endl;
    }
    return 0;
}