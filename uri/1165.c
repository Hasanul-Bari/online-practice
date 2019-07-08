#include<stdio.h>
int main()
{
    int n,x,i,j,c;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        c=1;
        for(j=2; j<x; j++)
        {
            if(x%j==0){
                c=0;
            break;}
        }
        if(c==0)
            printf("%d nao eh primo\n",x);
        else
            printf("%d eh primo\n",x);




    }
    return 0;
}

