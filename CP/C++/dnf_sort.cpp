#include <bits/stdc++.h> 
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 

void dnf_sort(int a[],int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(a[mid],a[high]);
            high--;
        }
        
    }
}

int32_t main()
{
    IOS;
    int a[]={1,0,2,1,0,1,2,1,2};
    dnf_sort(a,9);
    for(int i=0;i<9;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}