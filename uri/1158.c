#include<stdio.h>
int main()
{

    int i,n,j,x,y,s=0,k;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        if(x%2!=0)
        {
            for(j=0,k=x; j<y; j++)
            {
                s=s+k;
                k=k+2;
            }
        }
        else
        {
            for(j=0,k=x+1; j<y; j++)
            {
                s=s+k;
                k=k+2;
            }
        }
        printf("%d\n",s);
        s=0;
    }
    return 0;
}
