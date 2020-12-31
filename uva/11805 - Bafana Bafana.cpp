#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,p,i=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&k,&p);
        int x=(k+p)%n;
        if(x==0)
            printf("Case %d: %d\n",i,n);
        else
            printf("Case %d: %d\n",i,x);
        i++;
    }
    return 0;
}
