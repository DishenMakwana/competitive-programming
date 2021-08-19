#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int minLen,maxLen,minWid,maxWid;
    int choco=0;
    
    cin>>minLen>>maxLen>>minWid>>maxWid;
    
    for(int i=minLen;i<=maxLen;i++)
    {
        for(int j=minWid;j<=maxWid;j++)
        {
            int part1=i;
            int part2=j;
            
            while(part1 && part2)
            {
                choco++;
                if(part1==part2)
                {
                    break;
                }
                if(part1<part2)
                {
                    part2=part2-part1;
                }
                else
                {
                    part1=part1-part2;
                }  
            }
        }
    }
    cout<<choco<<"\n";
    return 0;   
}