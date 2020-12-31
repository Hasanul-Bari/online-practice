#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,h,l,y;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        h=0,l=0;
        scanf("%d%d",&n,&x);
        for(int j=1; j<=n-1; j++)
        {
            scanf("%d",&y);
            if(y>x)
                h++;
            else if(y<x)
                l++;
            x=y;
        }

        printf("Case %d: %d %d\n",i,h,l);
    }
    return 0;
}
