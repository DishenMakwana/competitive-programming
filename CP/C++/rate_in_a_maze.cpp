#include <bits/stdc++.h> 
// #define int long long int
using namespace std; 

bool isSafe(int** a,int x,int y,int n)
{
    if(x<n and y<n and a[x][y]==1)
    {
        return true;
    }
    return false;
}

bool ratinmaze(int** a,int x,int y,int n,int** ans)
{
    if(x==n-1 and y==n-1)
    {
        ans[x][y]=1;
        return true;
    }

    if(isSafe(a,x,y,n))
    {
        ans[x][y]=1;

        if(ratinmaze(a,x+1,y,n,ans))
        {
            return true;
        }
        if(ratinmaze(a,x,y+1,n,ans))
        {
            return true;
        }

        ans[x][y]=0; //backtracking
        return false;
    }
    return false;
}

int32_t main()
{
    int n;
    cin >> n;

    int** a=new int*[n];
    for(int i=0;i<n;i++)
    {
        a[i]=new int[n];
    }
    // int a[n][n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }

    int** ans=new int*[n];
    for(int i=0;i<n;i++)
    {
        ans[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            ans[i][j]=0;
        }
    }
    // int ans[n][n]={0};
    if(ratinmaze(a,0,0,n,ans))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Sol is not possible for given input! " << endl;
    }
    return 0;
}
