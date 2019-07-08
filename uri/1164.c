#include<stdio.h>
int main()
{
    int n,x,i,j,s;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        s=0;
        for(j=1; j<x; j++)
        {
            if(x%j==0)
                s=s+j;
        }
        if(s==x)
            printf("%d eh perfeito\n",x);

        else
            printf("%d nao eh perfeito\n",x);

    }
    return 0;
}
