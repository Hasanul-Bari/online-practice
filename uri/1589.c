#include<stdio.h>
int main()
{
    int x,n,y,r,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&x,&y);
        r=x+y;
        printf("%d\n",r);
    }

    return 0;
}
